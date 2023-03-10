#include <stdbool.h>
#include "gd32vf103.h"

/* Red: C13. */

#define DELAY_COUNT (1000000U)

static void delay(uint32_t count);

int main(void) {
    /* PLL multiplier = 27. */
    RCU->CFG0 |= ((10U << RCU_CFG0_PLLMF_Pos) | (1U << RCU_CFG0_PLLMF_4_Pos));
    /* PLL source = PREDV0. */
    RCU->CFG0 |= (0U << RCU_CFG0_PLLSEL_Pos);

    /* PREDV0 = 2. */
    RCU->CFG1 |= (1U << RCU_CFG1_PREDV0_Pos);
    /* PREDV0 source = HXTAL. */
    RCU->CFG1 |= (0U << RCU_CFG1_PREDV0SEL_Pos);

    /* AHB prescaler = 1. */
    RCU->CFG0 |= (0U << RCU_CFG0_AHBPSC_Pos);
    /* APB1 prescaler = 2. */
    RCU->CFG0 |= (4U << RCU_CFG0_APB1PSC_Pos);
    /* APB2 prescaler = 1. */
    RCU->CFG0 |= (0U << RCU_CFG0_APB2PSC_Pos);

    /* Enable HXTAL. */
    RCU->CTL |= RCU_CTL_HXTALEN;
    while ((RCU->CTL & RCU_CTL_HXTALSTB) == 0U) {}

    /* Enable PLL. */
    RCU->CTL |= RCU_CTL_PLLEN;
    while ((RCU->CTL & RCU_CTL_PLLSTB) == 0U) {}

    /* System clock source = PLL. */
    RCU->CFG0 |= (2U << RCU_CFG0_SCS_Pos);
    while ((RCU->CFG0 & RCU_CFG0_SCSS) == 0U) {}

    /* Enable GPIOC. */
    RCU->APB2EN |= RCU_APB2EN_PCEN;

    /* Output, max speed 50 MHz, push-pull. */
    GPIOC->CTL1 &= ~(GPIO_CTL1_MD13 | GPIO_CTL1_CTL13);
    GPIOC->CTL1 |= (0x3U << GPIO_CTL1_MD13_Pos);

    while (1) {
        /* Turn on red. */
        GPIOC->BC = GPIO_BC_CR13;
        delay(DELAY_COUNT);

        /* Turn off red. */
        GPIOC->BOP = GPIO_BOP_BOP13;
        delay(DELAY_COUNT);
    }
}

static void delay(uint32_t count) {
    for (uint32_t i = 0U; i < count; i++) {
        __asm__("nop");
    }
}
