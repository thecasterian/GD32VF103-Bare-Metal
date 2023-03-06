#ifndef GD32VF103_GPIO_H
#define GD32VF103_GPIO_H

#include <stdint.h>

typedef struct {
    volatile uint32_t CTL0;             /* Port control register 0,             Address offset: 0x00. */
    volatile uint32_t CTL1;             /* Port control register 1,             Address offset: 0x04. */
    volatile uint32_t ISTAT;            /* Port input status register,          Address offset: 0x08. */
    volatile uint32_t OCTL;             /* Port output control register,        Address offset: 0x0C. */
    volatile uint32_t BOP;              /* Port bit operation register,         Address offset: 0x10. */
    volatile uint32_t BC;               /* Port bit clear register,             Address offset: 0x14. */
    volatile uint32_t LOCK;             /* Port configuration lock register,    Address offset: 0x18. */
} GPIO_TypeDef;

#define GPIOA                           ((GPIO_TypeDef *)0x40010800)
#define GPIOB                           ((GPIO_TypeDef *)0x40010C00)
#define GPIOC                           ((GPIO_TypeDef *)0x40011000)
#define GPIOD                           ((GPIO_TypeDef *)0x40011400)
#define GPIOE                           ((GPIO_TypeDef *)0x40011800)

#define GPIO_CTL0_MD0_Pos               (0U)
#define GPIO_CTL0_MD0_Msk               (0x3UL << GPIO_CTL0_MD0_Pos)
#define GPIO_CTL0_MD0                   GPIO_CTL0_MD0_Msk                       /* Port 0 mode bits. */
#define GPIO_CTL0_CTL0_Pos              (2U)
#define GPIO_CTL0_CTL0_Msk              (0x3UL << GPIO_CTL0_CTL0_Pos)
#define GPIO_CTL0_CTL0                  GPIO_CTL0_CTL0_Msk                      /* Port 0 configuration bits. */
#define GPIO_CTL0_MD1_Pos               (4U)
#define GPIO_CTL0_MD1_Msk               (0x3UL << GPIO_CTL0_MD1_Pos)
#define GPIO_CTL0_MD1                   GPIO_CTL0_MD1_Msk
#define GPIO_CTL0_CTL1_Pos              (6U)
#define GPIO_CTL0_CTL1_Msk              (0x3UL << GPIO_CTL0_CTL1_Pos)
#define GPIO_CTL0_CTL1                  GPIO_CTL0_CTL1_Msk
#define GPIO_CTL0_MD2_Pos               (8U)
#define GPIO_CTL0_MD2_Msk               (0x3UL << GPIO_CTL0_MD2_Pos)
#define GPIO_CTL0_MD2                   GPIO_CTL0_MD2_Msk
#define GPIO_CTL0_CTL2_Pos              (10U)
#define GPIO_CTL0_CTL2_Msk              (0x3UL << GPIO_CTL0_CTL2_Pos)
#define GPIO_CTL0_CTL2                  GPIO_CTL0_CTL2_Msk
#define GPIO_CTL0_MD3_Pos               (12U)
#define GPIO_CTL0_MD3_Msk               (0x3UL << GPIO_CTL0_MD3_Pos)
#define GPIO_CTL0_MD3                   GPIO_CTL0_MD3_Msk
#define GPIO_CTL0_CTL3_Pos              (14U)
#define GPIO_CTL0_CTL3_Msk              (0x3UL << GPIO_CTL0_CTL3_Pos)
#define GPIO_CTL0_CTL3                  GPIO_CTL0_CTL3_Msk
#define GPIO_CTL0_MD4_Pos               (16U)
#define GPIO_CTL0_MD4_Msk               (0x3UL << GPIO_CTL0_MD4_Pos)
#define GPIO_CTL0_MD4                   GPIO_CTL0_MD4_Msk
#define GPIO_CTL0_CTL4_Pos              (18U)
#define GPIO_CTL0_CTL4_Msk              (0x3UL << GPIO_CTL0_CTL4_Pos)
#define GPIO_CTL0_CTL4                  GPIO_CTL0_CTL4_Msk
#define GPIO_CTL0_MD5_Pos               (20U)
#define GPIO_CTL0_MD5_Msk               (0x3UL << GPIO_CTL0_MD5_Pos)
#define GPIO_CTL0_MD5                   GPIO_CTL0_MD5_Msk
#define GPIO_CTL0_CTL5_Pos              (22U)
#define GPIO_CTL0_CTL5_Msk              (0x3UL << GPIO_CTL0_CTL5_Pos)
#define GPIO_CTL0_CTL5                  GPIO_CTL0_CTL5_Msk
#define GPIO_CTL0_MD6_Pos               (24U)
#define GPIO_CTL0_MD6_Msk               (0x3UL << GPIO_CTL0_MD6_Pos)
#define GPIO_CTL0_MD6                   GPIO_CTL0_MD6_Msk
#define GPIO_CTL0_CTL6_Pos              (26U)
#define GPIO_CTL0_CTL6_Msk              (0x3UL << GPIO_CTL0_CTL6_Pos)
#define GPIO_CTL0_CTL6                  GPIO_CTL0_CTL6_Msk
#define GPIO_CTL0_MD7_Pos               (28U)
#define GPIO_CTL0_MD7_Msk               (0x3UL << GPIO_CTL0_MD7_Pos)
#define GPIO_CTL0_MD7                   GPIO_CTL0_MD7_Msk
#define GPIO_CTL0_CTL7_Pos              (30U)
#define GPIO_CTL0_CTL7_Msk              (0x3UL << GPIO_CTL0_CTL7_Pos)
#define GPIO_CTL0_CTL7                  GPIO_CTL0_CTL7_Msk

#define GPIO_CTL1_MD8_Pos               (0U)
#define GPIO_CTL1_MD8_Msk               (0x3UL << GPIO_CTL1_MD8_Pos)
#define GPIO_CTL1_MD8                   GPIO_CTL1_MD8_Msk
#define GPIO_CTL1_CTL8_Pos              (2U)
#define GPIO_CTL1_CTL8_Msk              (0x3UL << GPIO_CTL1_CTL8_Pos)
#define GPIO_CTL1_CTL8                  GPIO_CTL1_CTL8_Msk
#define GPIO_CTL1_MD9_Pos               (4U)
#define GPIO_CTL1_MD9_Msk               (0x3UL << GPIO_CTL1_MD9_Pos)
#define GPIO_CTL1_MD9                   GPIO_CTL1_MD9_Msk
#define GPIO_CTL1_CTL9_Pos              (6U)
#define GPIO_CTL1_CTL9_Msk              (0x3UL << GPIO_CTL1_CTL9_Pos)
#define GPIO_CTL1_CTL9                  GPIO_CTL1_CTL9_Msk
#define GPIO_CTL1_MD10_Pos              (8U)
#define GPIO_CTL1_MD10_Msk              (0x3UL << GPIO_CTL1_MD10_Pos)
#define GPIO_CTL1_MD10                  GPIO_CTL1_MD10_Msk
#define GPIO_CTL1_CTL10_Pos             (10U)
#define GPIO_CTL1_CTL10_Msk             (0x3UL << GPIO_CTL1_CTL10_Pos)
#define GPIO_CTL1_CTL10                 GPIO_CTL1_CTL10_Msk
#define GPIO_CTL1_MD11_Pos              (12U)
#define GPIO_CTL1_MD11_Msk              (0x3UL << GPIO_CTL1_MD11_Pos)
#define GPIO_CTL1_MD11                  GPIO_CTL1_MD11_Msk
#define GPIO_CTL1_CTL11_Pos             (14U)
#define GPIO_CTL1_CTL11_Msk             (0x3UL << GPIO_CTL1_CTL11_Pos)
#define GPIO_CTL1_CTL11                 GPIO_CTL1_CTL11_Msk
#define GPIO_CTL1_MD12_Pos              (16U)
#define GPIO_CTL1_MD12_Msk              (0x3UL << GPIO_CTL1_MD12_Pos)
#define GPIO_CTL1_MD12                  GPIO_CTL1_MD12_Msk
#define GPIO_CTL1_CTL12_Pos             (18U)
#define GPIO_CTL1_CTL12_Msk             (0x3UL << GPIO_CTL1_CTL12_Pos)
#define GPIO_CTL1_CTL12                 GPIO_CTL1_CTL12_Msk
#define GPIO_CTL1_MD13_Pos              (20U)
#define GPIO_CTL1_MD13_Msk              (0x3UL << GPIO_CTL1_MD13_Pos)
#define GPIO_CTL1_MD13                  GPIO_CTL1_MD13_Msk
#define GPIO_CTL1_CTL13_Pos             (22U)
#define GPIO_CTL1_CTL13_Msk             (0x3UL << GPIO_CTL1_CTL13_Pos)
#define GPIO_CTL1_CTL13                 GPIO_CTL1_CTL13_Msk
#define GPIO_CTL1_MD14_Pos              (24U)
#define GPIO_CTL1_MD14_Msk              (0x3UL << GPIO_CTL1_MD14_Pos)
#define GPIO_CTL1_MD14                  GPIO_CTL1_MD14_Msk
#define GPIO_CTL1_CTL14_Pos             (26U)
#define GPIO_CTL1_CTL14_Msk             (0x3UL << GPIO_CTL1_CTL14_Pos)
#define GPIO_CTL1_CTL14                 GPIO_CTL1_CTL14_Msk
#define GPIO_CTL1_MD15_Pos              (28U)
#define GPIO_CTL1_MD15_Msk              (0x3UL << GPIO_CTL1_MD15_Pos)
#define GPIO_CTL1_MD15                  GPIO_CTL1_MD15_Msk
#define GPIO_CTL1_CTL15_Pos             (30U)
#define GPIO_CTL1_CTL15_Msk             (0x3UL << GPIO_CTL1_CTL15_Pos)
#define GPIO_CTL1_CTL15                 GPIO_CTL1_CTL15_Msk

#define GPIO_ISTAT_ISTAT0_Pos           (0U)
#define GPIO_ISTAT_ISTAT0_Msk           (0x1UL << GPIO_ISTAT_ISTAT0_Pos)
#define GPIO_ISTAT_ISTAT0               GPIO_ISTAT_ISTAT0_Msk
#define GPIO_ISTAT_ISTAT1_Pos           (1U)
#define GPIO_ISTAT_ISTAT1_Msk           (0x1UL << GPIO_ISTAT_ISTAT1_Pos)
#define GPIO_ISTAT_ISTAT1               GPIO_ISTAT_ISTAT1_Msk
#define GPIO_ISTAT_ISTAT2_Pos           (2U)
#define GPIO_ISTAT_ISTAT2_Msk           (0x1UL << GPIO_ISTAT_ISTAT2_Pos)
#define GPIO_ISTAT_ISTAT2               GPIO_ISTAT_ISTAT2_Msk
#define GPIO_ISTAT_ISTAT3_Pos           (3U)
#define GPIO_ISTAT_ISTAT3_Msk           (0x1UL << GPIO_ISTAT_ISTAT3_Pos)
#define GPIO_ISTAT_ISTAT3               GPIO_ISTAT_ISTAT3_Msk
#define GPIO_ISTAT_ISTAT4_Pos           (4U)
#define GPIO_ISTAT_ISTAT4_Msk           (0x1UL << GPIO_ISTAT_ISTAT4_Pos)
#define GPIO_ISTAT_ISTAT4               GPIO_ISTAT_ISTAT4_Msk
#define GPIO_ISTAT_ISTAT5_Pos           (5U)
#define GPIO_ISTAT_ISTAT5_Msk           (0x1UL << GPIO_ISTAT_ISTAT5_Pos)
#define GPIO_ISTAT_ISTAT5               GPIO_ISTAT_ISTAT5_Msk
#define GPIO_ISTAT_ISTAT6_Pos           (6U)
#define GPIO_ISTAT_ISTAT6_Msk           (0x1UL << GPIO_ISTAT_ISTAT6_Pos)
#define GPIO_ISTAT_ISTAT6               GPIO_ISTAT_ISTAT6_Msk
#define GPIO_ISTAT_ISTAT7_Pos           (7U)
#define GPIO_ISTAT_ISTAT7_Msk           (0x1UL << GPIO_ISTAT_ISTAT7_Pos)
#define GPIO_ISTAT_ISTAT7               GPIO_ISTAT_ISTAT7_Msk
#define GPIO_ISTAT_ISTAT8_Pos           (8U)
#define GPIO_ISTAT_ISTAT8_Msk           (0x1UL << GPIO_ISTAT_ISTAT8_Pos)
#define GPIO_ISTAT_ISTAT8               GPIO_ISTAT_ISTAT8_Msk
#define GPIO_ISTAT_ISTAT9_Pos           (9U)
#define GPIO_ISTAT_ISTAT9_Msk           (0x1UL << GPIO_ISTAT_ISTAT9_Pos)
#define GPIO_ISTAT_ISTAT9               GPIO_ISTAT_ISTAT9_Msk
#define GPIO_ISTAT_ISTAT10_Pos          (10U)
#define GPIO_ISTAT_ISTAT10_Msk          (0x1UL << GPIO_ISTAT_ISTAT10_Pos)
#define GPIO_ISTAT_ISTAT10              GPIO_ISTAT_ISTAT10_Msk
#define GPIO_ISTAT_ISTAT11_Pos          (11U)
#define GPIO_ISTAT_ISTAT11_Msk          (0x1UL << GPIO_ISTAT_ISTAT11_Pos)
#define GPIO_ISTAT_ISTAT11              GPIO_ISTAT_ISTAT11_Msk
#define GPIO_ISTAT_ISTAT12_Pos          (12U)
#define GPIO_ISTAT_ISTAT12_Msk          (0x1UL << GPIO_ISTAT_ISTAT12_Pos)
#define GPIO_ISTAT_ISTAT12              GPIO_ISTAT_ISTAT12_Msk
#define GPIO_ISTAT_ISTAT13_Pos          (13U)
#define GPIO_ISTAT_ISTAT13_Msk          (0x1UL << GPIO_ISTAT_ISTAT13_Pos)
#define GPIO_ISTAT_ISTAT13              GPIO_ISTAT_ISTAT13_Msk
#define GPIO_ISTAT_ISTAT14_Pos          (14U)
#define GPIO_ISTAT_ISTAT14_Msk          (0x1UL << GPIO_ISTAT_ISTAT14_Pos)
#define GPIO_ISTAT_ISTAT14              GPIO_ISTAT_ISTAT14_Msk
#define GPIO_ISTAT_ISTAT15_Pos          (15U)
#define GPIO_ISTAT_ISTAT15_Msk          (0x1UL << GPIO_ISTAT_ISTAT15_Pos)
#define GPIO_ISTAT_ISTAT15              GPIO_ISTAT_ISTAT15_Msk

#define GPIO_OCTL_OCTL0_Pos             (0U)
#define GPIO_OCTL_OCTL0_Msk             (0x1UL << GPIO_OCTL_OCTL0_Pos)
#define GPIO_OCTL_OCTL0                 GPIO_OCTL_OCTL0_Msk
#define GPIO_OCTL_OCTL1_Pos             (1U)
#define GPIO_OCTL_OCTL1_Msk             (0x1UL << GPIO_OCTL_OCTL1_Pos)
#define GPIO_OCTL_OCTL1                 GPIO_OCTL_OCTL1_Msk
#define GPIO_OCTL_OCTL2_Pos             (2U)
#define GPIO_OCTL_OCTL2_Msk             (0x1UL << GPIO_OCTL_OCTL2_Pos)
#define GPIO_OCTL_OCTL2                 GPIO_OCTL_OCTL2_Msk
#define GPIO_OCTL_OCTL3_Pos             (3U)
#define GPIO_OCTL_OCTL3_Msk             (0x1UL << GPIO_OCTL_OCTL3_Pos)
#define GPIO_OCTL_OCTL3                 GPIO_OCTL_OCTL3_Msk
#define GPIO_OCTL_OCTL4_Pos             (4U)
#define GPIO_OCTL_OCTL4_Msk             (0x1UL << GPIO_OCTL_OCTL4_Pos)
#define GPIO_OCTL_OCTL4                 GPIO_OCTL_OCTL4_Msk
#define GPIO_OCTL_OCTL5_Pos             (5U)
#define GPIO_OCTL_OCTL5_Msk             (0x1UL << GPIO_OCTL_OCTL5_Pos)
#define GPIO_OCTL_OCTL5                 GPIO_OCTL_OCTL5_Msk
#define GPIO_OCTL_OCTL6_Pos             (6U)
#define GPIO_OCTL_OCTL6_Msk             (0x1UL << GPIO_OCTL_OCTL6_Pos)
#define GPIO_OCTL_OCTL6                 GPIO_OCTL_OCTL6_Msk
#define GPIO_OCTL_OCTL7_Pos             (7U)
#define GPIO_OCTL_OCTL7_Msk             (0x1UL << GPIO_OCTL_OCTL7_Pos)
#define GPIO_OCTL_OCTL7                 GPIO_OCTL_OCTL7_Msk
#define GPIO_OCTL_OCTL8_Pos             (8U)
#define GPIO_OCTL_OCTL8_Msk             (0x1UL << GPIO_OCTL_OCTL8_Pos)
#define GPIO_OCTL_OCTL8                 GPIO_OCTL_OCTL8_Msk
#define GPIO_OCTL_OCTL9_Pos             (9U)
#define GPIO_OCTL_OCTL9_Msk             (0x1UL << GPIO_OCTL_OCTL9_Pos)
#define GPIO_OCTL_OCTL9                 GPIO_OCTL_OCTL9_Msk
#define GPIO_OCTL_OCTL10_Pos            (10U)
#define GPIO_OCTL_OCTL10_Msk            (0x1UL << GPIO_OCTL_OCTL10_Pos)
#define GPIO_OCTL_OCTL10                GPIO_OCTL_OCTL10_Msk
#define GPIO_OCTL_OCTL11_Pos            (11U)
#define GPIO_OCTL_OCTL11_Msk            (0x1UL << GPIO_OCTL_OCTL11_Pos)
#define GPIO_OCTL_OCTL11                GPIO_OCTL_OCTL11_Msk
#define GPIO_OCTL_OCTL12_Pos            (12U)
#define GPIO_OCTL_OCTL12_Msk            (0x1UL << GPIO_OCTL_OCTL12_Pos)
#define GPIO_OCTL_OCTL12                GPIO_OCTL_OCTL12_Msk
#define GPIO_OCTL_OCTL13_Pos            (13U)
#define GPIO_OCTL_OCTL13_Msk            (0x1UL << GPIO_OCTL_OCTL13_Pos)
#define GPIO_OCTL_OCTL13                GPIO_OCTL_OCTL13_Msk
#define GPIO_OCTL_OCTL14_Pos            (14U)
#define GPIO_OCTL_OCTL14_Msk            (0x1UL << GPIO_OCTL_OCTL14_Pos)
#define GPIO_OCTL_OCTL14                GPIO_OCTL_OCTL14_Msk
#define GPIO_OCTL_OCTL15_Pos            (15U)
#define GPIO_OCTL_OCTL15_Msk            (0x1UL << GPIO_OCTL_OCTL15_Pos)
#define GPIO_OCTL_OCTL15                GPIO_OCTL_OCTL15_Msk

#define GPIO_BOP_BOP0_Pos               (0U)
#define GPIO_BOP_BOP0_Msk               (0x1UL << GPIO_BOP_BOP0_Pos)
#define GPIO_BOP_BOP0                   GPIO_BOP_BOP0_Msk
#define GPIO_BOP_BOP1_Pos               (1U)
#define GPIO_BOP_BOP1_Msk               (0x1UL << GPIO_BOP_BOP1_Pos)
#define GPIO_BOP_BOP1                   GPIO_BOP_BOP1_Msk
#define GPIO_BOP_BOP2_Pos               (2U)
#define GPIO_BOP_BOP2_Msk               (0x1UL << GPIO_BOP_BOP2_Pos)
#define GPIO_BOP_BOP2                   GPIO_BOP_BOP2_Msk
#define GPIO_BOP_BOP3_Pos               (3U)
#define GPIO_BOP_BOP3_Msk               (0x1UL << GPIO_BOP_BOP3_Pos)
#define GPIO_BOP_BOP3                   GPIO_BOP_BOP3_Msk
#define GPIO_BOP_BOP4_Pos               (4U)
#define GPIO_BOP_BOP4_Msk               (0x1UL << GPIO_BOP_BOP4_Pos)
#define GPIO_BOP_BOP4                   GPIO_BOP_BOP4_Msk
#define GPIO_BOP_BOP5_Pos               (5U)
#define GPIO_BOP_BOP5_Msk               (0x1UL << GPIO_BOP_BOP5_Pos)
#define GPIO_BOP_BOP5                   GPIO_BOP_BOP5_Msk
#define GPIO_BOP_BOP6_Pos               (6U)
#define GPIO_BOP_BOP6_Msk               (0x1UL << GPIO_BOP_BOP6_Pos)
#define GPIO_BOP_BOP6                   GPIO_BOP_BOP6_Msk
#define GPIO_BOP_BOP7_Pos               (7U)
#define GPIO_BOP_BOP7_Msk               (0x1UL << GPIO_BOP_BOP7_Pos)
#define GPIO_BOP_BOP7                   GPIO_BOP_BOP7_Msk
#define GPIO_BOP_BOP8_Pos               (8U)
#define GPIO_BOP_BOP8_Msk               (0x1UL << GPIO_BOP_BOP8_Pos)
#define GPIO_BOP_BOP8                   GPIO_BOP_BOP8_Msk
#define GPIO_BOP_BOP9_Pos               (9U)
#define GPIO_BOP_BOP9_Msk               (0x1UL << GPIO_BOP_BOP9_Pos)
#define GPIO_BOP_BOP9                   GPIO_BOP_BOP9_Msk
#define GPIO_BOP_BOP10_Pos              (10U)
#define GPIO_BOP_BOP10_Msk              (0x1UL << GPIO_BOP_BOP10_Pos)
#define GPIO_BOP_BOP10                  GPIO_BOP_BOP10_Msk
#define GPIO_BOP_BOP11_Pos              (11U)
#define GPIO_BOP_BOP11_Msk              (0x1UL << GPIO_BOP_BOP11_Pos)
#define GPIO_BOP_BOP11                  GPIO_BOP_BOP11_Msk
#define GPIO_BOP_BOP12_Pos              (12U)
#define GPIO_BOP_BOP12_Msk              (0x1UL << GPIO_BOP_BOP12_Pos)
#define GPIO_BOP_BOP12                  GPIO_BOP_BOP12_Msk
#define GPIO_BOP_BOP13_Pos              (13U)
#define GPIO_BOP_BOP13_Msk              (0x1UL << GPIO_BOP_BOP13_Pos)
#define GPIO_BOP_BOP13                  GPIO_BOP_BOP13_Msk
#define GPIO_BOP_BOP14_Pos              (14U)
#define GPIO_BOP_BOP14_Msk              (0x1UL << GPIO_BOP_BOP14_Pos)
#define GPIO_BOP_BOP14                  GPIO_BOP_BOP14_Msk
#define GPIO_BOP_BOP15_Pos              (15U)
#define GPIO_BOP_BOP15_Msk              (0x1UL << GPIO_BOP_BOP15_Pos)
#define GPIO_BOP_BOP15                  GPIO_BOP_BOP15_Msk
#define GPIO_BOP_BOP16_Pos              (16U)
#define GPIO_BOP_BOP16_Msk              (0x1UL << GPIO_BOP_BOP16_Pos)
#define GPIO_BOP_BOP16                  GPIO_BOP_BOP16_Msk
#define GPIO_BOP_CR0_Pos                (16U)
#define GPIO_BOP_CR0_Msk                (0x1UL << GPIO_BOP_CR0_Pos)
#define GPIO_BOP_CR0                    GPIO_BOP_CR0_Msk
#define GPIO_BOP_CR1_Pos                (17U)
#define GPIO_BOP_CR1_Msk                (0x1UL << GPIO_BOP_CR1_Pos)
#define GPIO_BOP_CR1                    GPIO_BOP_CR1_Msk
#define GPIO_BOP_CR2_Pos                (18U)
#define GPIO_BOP_CR2_Msk                (0x1UL << GPIO_BOP_CR2_Pos)
#define GPIO_BOP_CR2                    GPIO_BOP_CR2_Msk
#define GPIO_BOP_CR3_Pos                (19U)
#define GPIO_BOP_CR3_Msk                (0x1UL << GPIO_BOP_CR3_Pos)
#define GPIO_BOP_CR3                    GPIO_BOP_CR3_Msk
#define GPIO_BOP_CR4_Pos                (20U)
#define GPIO_BOP_CR4_Msk                (0x1UL << GPIO_BOP_CR4_Pos)
#define GPIO_BOP_CR4                    GPIO_BOP_CR4_Msk
#define GPIO_BOP_CR5_Pos                (21U)
#define GPIO_BOP_CR5_Msk                (0x1UL << GPIO_BOP_CR5_Pos)
#define GPIO_BOP_CR5                    GPIO_BOP_CR5_Msk
#define GPIO_BOP_CR6_Pos                (22U)
#define GPIO_BOP_CR6_Msk                (0x1UL << GPIO_BOP_CR6_Pos)
#define GPIO_BOP_CR6                    GPIO_BOP_CR6_Msk
#define GPIO_BOP_CR7_Pos                (23U)
#define GPIO_BOP_CR7_Msk                (0x1UL << GPIO_BOP_CR7_Pos)
#define GPIO_BOP_CR7                    GPIO_BOP_CR7_Msk
#define GPIO_BOP_CR8_Pos                (24U)
#define GPIO_BOP_CR8_Msk                (0x1UL << GPIO_BOP_CR8_Pos)
#define GPIO_BOP_CR8                    GPIO_BOP_CR8_Msk
#define GPIO_BOP_CR9_Pos                (25U)
#define GPIO_BOP_CR9_Msk                (0x1UL << GPIO_BOP_CR9_Pos)
#define GPIO_BOP_CR9                    GPIO_BOP_CR9_Msk
#define GPIO_BOP_CR10_Pos               (26U)
#define GPIO_BOP_CR10_Msk               (0x1UL << GPIO_BOP_CR10_Pos)
#define GPIO_BOP_CR10                   GPIO_BOP_CR10_Msk
#define GPIO_BOP_CR11_Pos               (27U)
#define GPIO_BOP_CR11_Msk               (0x1UL << GPIO_BOP_CR11_Pos)
#define GPIO_BOP_CR11                   GPIO_BOP_CR11_Msk
#define GPIO_BOP_CR12_Pos               (28U)
#define GPIO_BOP_CR12_Msk               (0x1UL << GPIO_BOP_CR12_Pos)
#define GPIO_BOP_CR12                   GPIO_BOP_CR12_Msk
#define GPIO_BOP_CR13_Pos               (29U)
#define GPIO_BOP_CR13_Msk               (0x1UL << GPIO_BOP_CR13_Pos)
#define GPIO_BOP_CR13                   GPIO_BOP_CR13_Msk
#define GPIO_BOP_CR14_Pos               (30U)
#define GPIO_BOP_CR14_Msk               (0x1UL << GPIO_BOP_CR14_Pos)
#define GPIO_BOP_CR14                   GPIO_BOP_CR14_Msk
#define GPIO_BOP_CR15_Pos               (31U)
#define GPIO_BOP_CR15_Msk               (0x1UL << GPIO_BOP_CR15_Pos)
#define GPIO_BOP_CR15                   GPIO_BOP_CR15_Msk

#define GPIO_BC_CR0_Pos                 (0U)
#define GPIO_BC_CR0_Msk                 (0x1UL << GPIO_BC_CR0_Pos)
#define GPIO_BC_CR0                     GPIO_BC_CR0_Msk
#define GPIO_BC_CR1_Pos                 (1U)
#define GPIO_BC_CR1_Msk                 (0x1UL << GPIO_BC_CR1_Pos)
#define GPIO_BC_CR1                     GPIO_BC_CR1_Msk
#define GPIO_BC_CR2_Pos                 (2U)
#define GPIO_BC_CR2_Msk                 (0x1UL << GPIO_BC_CR2_Pos)
#define GPIO_BC_CR2                     GPIO_BC_CR2_Msk
#define GPIO_BC_CR3_Pos                 (3U)
#define GPIO_BC_CR3_Msk                 (0x1UL << GPIO_BC_CR3_Pos)
#define GPIO_BC_CR3                     GPIO_BC_CR3_Msk
#define GPIO_BC_CR4_Pos                 (4U)
#define GPIO_BC_CR4_Msk                 (0x1UL << GPIO_BC_CR4_Pos)
#define GPIO_BC_CR4                     GPIO_BC_CR4_Msk
#define GPIO_BC_CR5_Pos                 (5U)
#define GPIO_BC_CR5_Msk                 (0x1UL << GPIO_BC_CR5_Pos)
#define GPIO_BC_CR5                     GPIO_BC_CR5_Msk
#define GPIO_BC_CR6_Pos                 (6U)
#define GPIO_BC_CR6_Msk                 (0x1UL << GPIO_BC_CR6_Pos)
#define GPIO_BC_CR6                     GPIO_BC_CR6_Msk
#define GPIO_BC_CR7_Pos                 (7U)
#define GPIO_BC_CR7_Msk                 (0x1UL << GPIO_BC_CR7_Pos)
#define GPIO_BC_CR7                     GPIO_BC_CR7_Msk
#define GPIO_BC_CR8_Pos                 (8U)
#define GPIO_BC_CR8_Msk                 (0x1UL << GPIO_BC_CR8_Pos)
#define GPIO_BC_CR8                     GPIO_BC_CR8_Msk
#define GPIO_BC_CR9_Pos                 (9U)
#define GPIO_BC_CR9_Msk                 (0x1UL << GPIO_BC_CR9_Pos)
#define GPIO_BC_CR9                     GPIO_BC_CR9_Msk
#define GPIO_BC_CR10_Pos                (10U)
#define GPIO_BC_CR10_Msk                (0x1UL << GPIO_BC_CR10_Pos)
#define GPIO_BC_CR10                    GPIO_BC_CR10_Msk
#define GPIO_BC_CR11_Pos                (11U)
#define GPIO_BC_CR11_Msk                (0x1UL << GPIO_BC_CR11_Pos)
#define GPIO_BC_CR11                    GPIO_BC_CR11_Msk
#define GPIO_BC_CR12_Pos                (12U)
#define GPIO_BC_CR12_Msk                (0x1UL << GPIO_BC_CR12_Pos)
#define GPIO_BC_CR12                    GPIO_BC_CR12_Msk
#define GPIO_BC_CR13_Pos                (13U)
#define GPIO_BC_CR13_Msk                (0x1UL << GPIO_BC_CR13_Pos)
#define GPIO_BC_CR13                    GPIO_BC_CR13_Msk
#define GPIO_BC_CR14_Pos                (14U)
#define GPIO_BC_CR14_Msk                (0x1UL << GPIO_BC_CR14_Pos)
#define GPIO_BC_CR14                    GPIO_BC_CR14_Msk
#define GPIO_BC_CR15_Pos                (15U)
#define GPIO_BC_CR15_Msk                (0x1UL << GPIO_BC_CR15_Pos)
#define GPIO_BC_CR15                    GPIO_BC_CR15_Msk

#define GPIO_LOCK_LK0_Pos               (0U)
#define GPIO_LOCK_LK0_Msk               (0x1UL << GPIO_LOCK_LK0_Pos)
#define GPIO_LOCK_LK0                   GPIO_LOCK_LK0_Msk
#define GPIO_LOCK_LK1_Pos               (1U)
#define GPIO_LOCK_LK1_Msk               (0x1UL << GPIO_LOCK_LK1_Pos)
#define GPIO_LOCK_LK1                   GPIO_LOCK_LK1_Msk
#define GPIO_LOCK_LK2_Pos               (2U)
#define GPIO_LOCK_LK2_Msk               (0x1UL << GPIO_LOCK_LK2_Pos)
#define GPIO_LOCK_LK2                   GPIO_LOCK_LK2_Msk
#define GPIO_LOCK_LK3_Pos               (3U)
#define GPIO_LOCK_LK3_Msk               (0x1UL << GPIO_LOCK_LK3_Pos)
#define GPIO_LOCK_LK3                   GPIO_LOCK_LK3_Msk
#define GPIO_LOCK_LK4_Pos               (4U)
#define GPIO_LOCK_LK4_Msk               (0x1UL << GPIO_LOCK_LK4_Pos)
#define GPIO_LOCK_LK4                   GPIO_LOCK_LK4_Msk
#define GPIO_LOCK_LK5_Pos               (5U)
#define GPIO_LOCK_LK5_Msk               (0x1UL << GPIO_LOCK_LK5_Pos)
#define GPIO_LOCK_LK5                   GPIO_LOCK_LK5_Msk
#define GPIO_LOCK_LK6_Pos               (6U)
#define GPIO_LOCK_LK6_Msk               (0x1UL << GPIO_LOCK_LK6_Pos)
#define GPIO_LOCK_LK6                   GPIO_LOCK_LK6_Msk
#define GPIO_LOCK_LK7_Pos               (7U)
#define GPIO_LOCK_LK7_Msk               (0x1UL << GPIO_LOCK_LK7_Pos)
#define GPIO_LOCK_LK7                   GPIO_LOCK_LK7_Msk
#define GPIO_LOCK_LK8_Pos               (8U)
#define GPIO_LOCK_LK8_Msk               (0x1UL << GPIO_LOCK_LK8_Pos)
#define GPIO_LOCK_LK8                   GPIO_LOCK_LK8_Msk
#define GPIO_LOCK_LK9_Pos               (9U)
#define GPIO_LOCK_LK9_Msk               (0x1UL << GPIO_LOCK_LK9_Pos)
#define GPIO_LOCK_LK9                   GPIO_LOCK_LK9_Msk
#define GPIO_LOCK_LK10_Pos              (10U)
#define GPIO_LOCK_LK10_Msk              (0x1UL << GPIO_LOCK_LK10_Pos)
#define GPIO_LOCK_LK10                  GPIO_LOCK_LK10_Msk
#define GPIO_LOCK_LK11_Pos              (11U)
#define GPIO_LOCK_LK11_Msk              (0x1UL << GPIO_LOCK_LK11_Pos)
#define GPIO_LOCK_LK11                  GPIO_LOCK_LK11_Msk
#define GPIO_LOCK_LK12_Pos              (12U)
#define GPIO_LOCK_LK12_Msk              (0x1UL << GPIO_LOCK_LK12_Pos)
#define GPIO_LOCK_LK12                  GPIO_LOCK_LK12_Msk
#define GPIO_LOCK_LK13_Pos              (13U)
#define GPIO_LOCK_LK13_Msk              (0x1UL << GPIO_LOCK_LK13_Pos)
#define GPIO_LOCK_LK13                  GPIO_LOCK_LK13_Msk
#define GPIO_LOCK_LK14_Pos              (14U)
#define GPIO_LOCK_LK14_Msk              (0x1UL << GPIO_LOCK_LK14_Pos)
#define GPIO_LOCK_LK14                  GPIO_LOCK_LK14_Msk
#define GPIO_LOCK_LK15_Pos              (15U)
#define GPIO_LOCK_LK15_Msk              (0x1UL << GPIO_LOCK_LK15_Pos)
#define GPIO_LOCK_LK15                  GPIO_LOCK_LK15_Msk
#define GPIO_LOCK_LKK_Pos               (16U)
#define GPIO_LOCK_LKK_Msk               (0x1UL << GPIO_LOCK_LKK_Pos)
#define GPIO_LOCK_LKK                   GPIO_LOCK_LKK_Msk

#endif