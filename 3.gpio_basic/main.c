#include "gd32vf103.h"

/* Red: C13. */
/* Green: A1. */
/* Blue: A2. */

#define DELAY_COUNT (1000000UL)

static void delay(uint32_t count);

int main(void) {
    /* Enable GPIOA and GPIOC. */
    RCU->APB2EN |= RCU_APB2EN_PAEN | RCU_APB2EN_PCEN;

    /* Output, max speed 50 MHz, push-pull. */
    GPIOC->CTL1 &= ~(GPIO_CTL1_MD13 | GPIO_CTL1_CTL13);
    GPIOC->CTL1 |= (0x3UL << GPIO_CTL1_MD13_Pos);
    GPIOA->CTL0 &= ~(GPIO_CTL0_MD1 | GPIO_CTL0_CTL1 | GPIO_CTL0_MD2 | GPIO_CTL0_CTL2);
    GPIOA->CTL0 |= ((0x3UL << GPIO_CTL0_MD1_Pos) | (0x3UL << GPIO_CTL0_MD2_Pos));

    /* Turn off all LEDs. */
    GPIOC->BOP = GPIO_BOP_BOP13;
    GPIOA->BOP = GPIO_BOP_BOP1;
    GPIOA->BOP = GPIO_BOP_BOP2;

    while (1) {
        /* Red only. */
        GPIOC->BC = GPIO_BC_CR13;
        GPIOA->BOP = GPIO_BOP_BOP1;
        GPIOA->BOP = GPIO_BOP_BOP2;
        delay(DELAY_COUNT);

        /* Green only. */
        GPIOC->BOP = GPIO_BOP_BOP13;
        GPIOA->BC = GPIO_BC_CR1;
        GPIOA->BOP = GPIO_BOP_BOP2;
        delay(DELAY_COUNT);

        /* Blue only. */
        GPIOC->BOP = GPIO_BOP_BOP13;
        GPIOA->BOP = GPIO_BOP_BOP1;
        GPIOA->BC = GPIO_BC_CR2;
        delay(DELAY_COUNT);
    }
}

static void delay(uint32_t count) {
    for (uint32_t i = 0UL; i < count; i++) {
        __asm__("nop");
    }
}
