#include "gd32vf103.h"

#define DELAY_MS 1000

static volatile uint32_t systick;

static void delay(uint32_t count);

int main(void) {
    /* Enable interrupt globally. */
    __asm__ volatile ("csrs 0x300, 0x8");
    /* Set nlbits to 3. (3 level bits and 1 priority bit) */
    ECLIC->cliccfg = 0x3 << ECLIC_CLICCFG_NLBITS_Pos;

    /* Set SysTick interrupt frequency to 1000 Hz. */
    TIMER->mtimecmp_lo = 2000 - 1;
    TIMER->mtimecmp_hi = 0;
    /* Reset the counter. */
    TIMER->mtime_lo = 0;
    TIMER->mtime_hi = 0;

    /* Enable SysTick interrupt. */
    ECLIC->clicint[TMR_IRQn].ie = 1;
    /* Set SysTick interrupt level and priority to their minimum. */
    ECLIC->clicint[TMR_IRQn].ctl = 0x0F;
    /* Make SysTick interrupt be a vectored interrupt. */
    ECLIC->clicint[TMR_IRQn].attr |= 1 << ECLIC_CLICINTATTR_SHV_Pos;

    /* Enable GPIOC. */
    RCU->APB2EN |= RCU_APB2EN_PCEN;

    /* Output, max speed 50 MHz, push-pull. */
    GPIOC->CTL1 &= ~(GPIO_CTL1_MD13 | GPIO_CTL1_CTL13);
    GPIOC->CTL1 |= (0x3U << GPIO_CTL1_MD13_Pos);

    while (1) {
        /* Turn on red. */
        GPIOC->BC = GPIO_BC_CR13;
        delay(DELAY_MS);

        /* Turn off red. */
        GPIOC->BOP = GPIO_BOP_BOP13;
        delay(DELAY_MS);
    }
}

static void delay(uint32_t ms) {
    uint32_t start = systick;

    while (systick - start < ms) {
        __asm__ volatile ("wfi");
    }
}

__attribute__((interrupt)) void tmr_irq_handler(void) {
    systick++;

    /* Reset the counter. */
    TIMER->mtime_lo = 0;
    TIMER->mtime_hi = 0;
}
