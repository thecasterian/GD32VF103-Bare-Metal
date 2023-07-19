#include "gd32vf103.h"

/* USART0 Tx: PA9 (default). */

#define DELAY_COUNT (1000000UL)

static void send_string(const char *s);
static void delay(uint32_t count);

int main(void) {
    /* Enable GPIOA and USART0. */
    RCU->APB2EN |= RCU_APB2EN_PAEN | RCU_APB2EN_USART0EN;

    /* Alternative input/output, max speed 50 MHz, push-pull. */
    GPIOA->CTL1 &= ~(GPIO_CTL1_CTL9 | GPIO_CTL1_MD9);
    GPIOA->CTL1 |= ((0x2UL << GPIO_CTL1_CTL9_Pos)
                    | (0x3UL << GPIO_CTL1_MD9_Pos));

    /* Reset USART0. */
    RCU->APB2RST |= RCU_APB2RST_USART0RST;
    RCU->APB2RST &= ~RCU_APB2RST_USART0RST;

    /* 8 data bits. */
    USART0->CTL0 &= ~USART_CTL0_WL;
    /* No parity bit. */
    USART0->CTL0 &= ~USART_CTL0_PCEN;
    /* 1 Stop bit. */
    USART0->CTL1 &= ~USART_CTL1_STB;
    /* No hardware flow control. */
    USART0->CTL2 &= ~(USART_CTL2_RTSEN | USART_CTL2_CTSEN);
    /* Set baud-rate to 115200: USARTDIV = PCLK / (16 * 115200) = 4.3402777...
       where PCLK is PCLK2 for USART0 and is 8 MHz by default. The integer part
       of the baud-rate (INTDIV) is 4 and fractional part (FRADIV) is
       0.3402777... * 16 = 5 (take the nearest 4-bit integer). The error is
       0.644%, which is acceptable. */
    USART0->BAUD = ((4UL << USART_BAUD_INTDIV_Pos)
                    | (5UL << USART_BAUD_FRADIV_Pos));
    /* Enable transmitter. */
    USART0->CTL0 |= USART_CTL0_TEN;
    /* Enable USART. Do not configure USART registers from now on. */
    USART0->CTL0 |= USART_CTL0_UEN;

    while (1) {
        send_string("Hello, world!\n");
        delay(DELAY_COUNT);
    }
}

static void send_string(const char *s) {
    const char *ptr = s;
    while (*ptr) {
        /* Wait for TBE to be asserted. */
        while (!(USART0->STAT & USART_STAT_TBE)) {}
        /* Write to the data register. */
        USART0->DATA = ((*ptr) << USART_DATA_DATA_Pos) & USART_DATA_DATA_Msk;
        ptr++;
    }
    /* Wait for TC to be asserted. */
    while (!(USART0->STAT & USART_STAT_TC)) {}
}

static void delay(uint32_t count) {
    for (uint32_t i = 0UL; i < count; i++) {
        __asm__("nop");
    }
}
