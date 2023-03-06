#ifndef GD32VF103_RCU_H
#define GD32VF103_RCU_H

#include <stdint.h>

typedef struct {
    volatile uint32_t CTL;              /* Control register,                    Address offset: 0x00. */
    volatile uint32_t CFG0;             /* Clock configuration register 0,      Address offset: 0x04. */
    volatile uint32_t INT;              /* Clock interrupt register,            Address offset: 0x08. */
    volatile uint32_t APB2RST;          /* APB2 reset register,                 Address offset: 0x0C. */
    volatile uint32_t APB1RST;          /* APB1 reset register,                 Address offset: 0x10. */
    volatile uint32_t AHBEN;            /* AHB enable register,                 Address offset: 0x14. */
    volatile uint32_t APB2EN;           /* APB2 enable register,                Address offset: 0x18. */
    volatile uint32_t APB1EN;           /* APB1 enable register,                Address offset: 0x1C. */
    volatile uint32_t BDCTL;            /* Backup domain control register,      Address offset: 0x20. */
    volatile uint32_t RSTSCK;           /* Reset source/clock register,         Address offset: 0x24. */
    volatile uint32_t AHBRST;           /* AHB reset register,                  Address offset: 0x28. */
    volatile uint32_t CFG1;             /* Clock configuration register 1,      Address offset: 0x2C. */
    uint32_t RESERVED0;                 /* Reserved: 0x30. */
    volatile uint32_t DSV;              /* Deep-sleep mode voltage register,    Address offset: 0x34. */
} RCU_TypeDef;

#define RCU                             ((RCU_TypeDef *)0x40021000)

#define RCU_CTL_IRC8MEN_Pos             (0U)
#define RCU_CTL_IRC8MEN_Msk             (0x1UL << RCU_CTL_IRC8MEN_Pos)
#define RCU_CTL_IRC8MEN                 RCU_CTL_IRC8MEN_Msk
#define RCU_CTL_ICR8MSTB_Pos            (1U)
#define RCU_CTL_ICR8MSTB_Msk            (0x1UL << RCU_CTL_ICR8MSTB_Pos)
#define RCU_CTL_ICR8MSTB                RCU_CTL_ICR8MSTB_Msk
#define RCU_CTL_IRC8MADJ_Pos            (3U)
#define RCU_CTL_IRC8MADJ_Msk            (0x1FUL << RCU_CTL_IRC8MADJ_Pos)
#define RCU_CTL_IRC8MADJ                RCU_CTL_IRC8MADJ_Msk
#define RCU_CTL_IRC8MCALIB_Pos          (8U)
#define RCU_CTL_IRC8MCALIB_Msk          (0xFFUL << RCU_CTL_IRC8MCALIB_Pos)
#define RCU_CTL_IRC8MCALIB              RCU_CTL_IRC8MCALIB_Msk
#define RCU_CTL_HXTALEN_Pos             (16U)
#define RCU_CTL_HXTALEN_Msk             (0x1UL << RCU_CTL_HXTALEN_Pos)
#define RCU_CTL_HXTALEN                 RCU_CTL_HXTALEN_Msk
#define RCU_CTL_HXTALSTB_Pos            (17U)
#define RCU_CTL_HXTALSTB_Msk            (0x1UL << RCU_CTL_HXTALSTB_Pos)
#define RCU_CTL_HXTALSTB                RCU_CTL_HXTALSTB_Msk
#define RCU_CTL_HXTALBPS_Pos            (18U)
#define RCU_CTL_HXTALBPS_Msk            (0x1UL << RCU_CTL_HXTALBPS_Pos)
#define RCU_CTL_HXTALBPS                RCU_CTL_HXTALBPS_Msk
#define RCU_CTL_CKMEN_Pos               (19U)
#define RCU_CTL_CKMEN_Msk               (0x1UL << RCU_CTL_CKMEN_Pos)
#define RCU_CTL_CKMEN                   RCU_CTL_CKMEN_Msk
#define RCU_CTL_PLLEN_Pos               (24U)
#define RCU_CTL_PLLEN_Msk               (0x1UL << RCU_CTL_PLLEN_Pos)
#define RCU_CTL_PLLEN                   RCU_CTL_PLLEN_Msk
#define RCU_CTL_PLLSTB_Pos              (25U)
#define RCU_CTL_PLLSTB_Msk              (0x1UL << RCU_CTL_PLLSTB_Pos)
#define RCU_CTL_PLLSTB                  RCU_CTL_PLLSTB_Msk
#define RCU_CTL_PLL1EN_Pos              (26U)
#define RCU_CTL_PLL1EN_Msk              (0x1UL << RCU_CTL_PLL1EN_Pos)
#define RCU_CTL_PLL1EN                  RCU_CTL_PLL1EN_Msk
#define RCU_CTL_PLL1STB_Pos             (27U)
#define RCU_CTL_PLL1STB_Msk             (0x1UL << RCU_CTL_PLL1STB_Pos)
#define RCU_CTL_PLL1STB                 RCU_CTL_PLL1STB_Msk
#define RCU_CTL_PLL2EN_Pos              (28U)
#define RCU_CTL_PLL2EN_Msk              (0x1UL << RCU_CTL_PLL2EN_Pos)
#define RCU_CTL_PLL2EN                  RCU_CTL_PLL2EN_Msk
#define RCU_CTL_PLL2STB_Pos             (29U)
#define RCU_CTL_PLL2STB_Msk             (0x1UL << RCU_CTL_PLL2STB_Pos)
#define RCU_CTL_PLL2STB                 RCU_CTL_PLL2STB_Msk

#define RCU_CFG0_SCS_Pos                (0U)
#define RCU_CFG0_SCS_Msk                (0x3UL << RCU_CFG0_SCS_Pos)
#define RCU_CFG0_SCS                    RCU_CFG0_SCS_Msk
#define RCU_CFG0_SCSS_Pos               (2U)
#define RCU_CFG0_SCSS_Msk               (0x3UL << RCU_CFG0_SCSS_Pos)
#define RCU_CFG0_SCSS                   RCU_CFG0_SCSS_Msk
#define RCU_CFG0_AHBPSC_Pos             (4U)
#define RCU_CFG0_AHBPSC_Msk             (0xFUL << RCU_CFG0_AHBPSC_Pos)
#define RCU_CFG0_AHBPSC                 RCU_CFG0_AHBPSC_Msk
#define RCU_CFG0_APB1PSC_Pos            (8U)
#define RCU_CFG0_APB1PSC_Msk            (0x7UL << RCU_CFG0_APB1PSC_Pos)
#define RCU_CFG0_APB1PSC                RCU_CFG0_APB1PSC_Msk
#define RCU_CFG0_APB2PSC_Pos            (11U)
#define RCU_CFG0_APB2PSC_Msk            (0x7UL << RCU_CFG0_APB2PSC_Pos)
#define RCU_CFG0_APB2PSC                RCU_CFG0_APB2PSC_Msk
#define RCU_CFG0_ADCPSC_Pos             (14U)
#define RCU_CFG0_ADCPSC_Msk             (0x3UL << RCU_CFG0_ADCPSC_Pos)
#define RCU_CFG0_ADCPSC                 RCU_CFG0_ADCPSC_Msk
#define RCU_CFG0_PLLSEL_Pos             (16U)
#define RCU_CFG0_PLLSEL_Msk             (0x1UL << RCU_CFG0_PLLSEL_Pos)
#define RCU_CFG0_PLLSEL                 RCU_CFG0_PLLSEL_Msk
#define RCU_CFG0_PREDV0_LSB_Pos         (17U)
#define RCU_CFG0_PREDV0_LSB_Msk         (0x1UL << RCU_CFG0_PREDV0_LSB_Pos)
#define RCU_CFG0_PREDV0_LSB             RCU_CFG0_PREDV0_LSB_Msk
#define RCU_CFG0_PLLMF_Pos              (18U)
#define RCU_CFG0_PLLMF_Msk              (0xFUL << RCU_CFG0_PLLMF_Pos)
#define RCU_CFG0_PLLMF                  RCU_CFG0_PLLMF_Msk
#define RCU_CFG0_USBFSPSC_Pos           (22U)
#define RCU_CFG0_USBFSPSC_Msk           (0x3UL << RCU_CFG0_USBFSPSC_Pos)
#define RCU_CFG0_USBFSPSC               RCU_CFG0_USBFSPSC_Msk
#define RCU_CFG0_CKOUT0SEL_Pos          (24U)
#define RCU_CFG0_CKOUT0SEL_Msk          (0xFUL << RCU_CFG0_CKOUT0SEL_Pos)
#define RCU_CFG0_CKOUT0SEL              RCU_CFG0_CKOUT0SEL_Msk
#define RCU_CFG0_ADCPSC_2_Pos           (28U)
#define RCU_CFG0_ADCPSC_2_Msk           (0x1UL << RCU_CFG0_ADCPSC_2_Pos)
#define RCU_CFG0_ADCPSC_2               RCU_CFG0_ADCPSC_2_Msk
#define RCU_CFG0_PLLMF_4_Pos            (29U)
#define RCU_CFG0_PLLMF_4_Msk            (0x1UL << RCU_CFG0_PLLMF_4_Pos)
#define RCU_CFG0_PLLMF_4                RCU_CFG0_PLLMF_4_Msk

#define RCU_INT_IRC40KSTBIF_Pos         (0U)
#define RCU_INT_IRC40KSTBIF_Msk         (0x1UL << RCU_INT_IRC40KSTBIF_Pos)
#define RCU_INT_IRC40KSTBIF             RCU_INT_IRC40KSTBIF_Msk
#define RCU_INT_LXTALSTBIF_Pos          (1U)
#define RCU_INT_LXTALSTBIF_Msk          (0x1UL << RCU_INT_LXTALSTBIF_Pos)
#define RCU_INT_LXTALSTBIF              RCU_INT_LXTALSTBIF_Msk
#define RCU_INT_IRC8MSTBIF_Pos          (2U)
#define RCU_INT_IRC8MSTBIF_Msk          (0x1UL << RCU_INT_IRC8MSTBIF_Pos)
#define RCU_INT_IRC8MSTBIF              RCU_INT_IRC8MSTBIF_Msk
#define RCU_INT_HXTALSTBIF_Pos          (3U)
#define RCU_INT_HXTALSTBIF_Msk          (0x1UL << RCU_INT_HXTALSTBIF_Pos)
#define RCU_INT_HXTALSTBIF              RCU_INT_HXTALSTBIF_Msk
#define RCU_INT_PLLSTBIF_Pos            (4U)
#define RCU_INT_PLLSTBIF_Msk            (0x1UL << RCU_INT_PLLSTBIF_Pos)
#define RCU_INT_PLLSTBIF                RCU_INT_PLLSTBIF_Msk
#define RCU_INT_PLL1STBIF_Pos           (5U)
#define RCU_INT_PLL1STBIF_Msk           (0x1UL << RCU_INT_PLL1STBIF_Pos)
#define RCU_INT_PLL1STBIF               RCU_INT_PLL1STBIF_Msk
#define RCU_INT_PLL2STBIF_Pos           (6U)
#define RCU_INT_PLL2STBIF_Msk           (0x1UL << RCU_INT_PLL2STBIF_Pos)
#define RCU_INT_PLL2STBIF               RCU_INT_PLL2STBIF_Msk
#define RCU_INT_CKMIF_Pos               (7U)
#define RCU_INT_CKMIF_Msk               (0x1UL << RCU_INT_CKMIF_Pos)
#define RCU_INT_CKMIF                   RCU_INT_CKMIF_Msk
#define RCU_INT_IRC40KSTBIE_Pos         (8U)
#define RCU_INT_IRC40KSTBIE_Msk         (0x1UL << RCU_INT_IRC40KSTBIE_Pos)
#define RCU_INT_IRC40KSTBIE             RCU_INT_IRC40KSTBIE_Msk
#define RCU_INT_LXTALSTBIE_Pos          (9U)
#define RCU_INT_LXTALSTBIE_Msk          (0x1UL << RCU_INT_LXTALSTBIE_Pos)
#define RCU_INT_LXTALSTBIE              RCU_INT_LXTALSTBIE_Msk
#define RCU_INT_IRC8MSTBIE_Pos          (10U)
#define RCU_INT_IRC8MSTBIE_Msk          (0x1UL << RCU_INT_IRC8MSTBIE_Pos)
#define RCU_INT_IRC8MSTBIE              RCU_INT_IRC8MSTBIE_Msk
#define RCU_INT_HXTALSTBIE_Pos          (11U)
#define RCU_INT_HXTALSTBIE_Msk          (0x1UL << RCU_INT_HXTALSTBIE_Pos)
#define RCU_INT_HXTALSTBIE              RCU_INT_HXTALSTBIE_Msk
#define RCU_INT_PLLSTBIE_Pos            (12U)
#define RCU_INT_PLLSTBIE_Msk            (0x1UL << RCU_INT_PLLSTBIE_Pos)
#define RCU_INT_PLLSTBIE                RCU_INT_PLLSTBIE_Msk
#define RCU_INT_PLL1STBIE_Pos           (13U)
#define RCU_INT_PLL1STBIE_Msk           (0x1UL << RCU_INT_PLL1STBIE_Pos)
#define RCU_INT_PLL1STBIE               RCU_INT_PLL1STBIE_Msk
#define RCU_INT_PLL2STBIE_Pos           (14U)
#define RCU_INT_PLL2STBIE_Msk           (0x1UL << RCU_INT_PLL2STBIE_Pos)
#define RCU_INT_PLL2STBIE               RCU_INT_PLL2STBIE_Msk
#define RCU_INT_IRC40KSTBIC_Pos         (16U)
#define RCU_INT_IRC40KSTBIC_Msk         (0x1UL << RCU_INT_IRC40KSTBIC_Pos)
#define RCU_INT_IRC40KSTBIC             RCU_INT_IRC40KSTBIC_Msk
#define RCU_INT_LXTALSTBIC_Pos          (17U)
#define RCU_INT_LXTALSTBIC_Msk          (0x1UL << RCU_INT_LXTALSTBIC_Pos)
#define RCU_INT_LXTALSTBIC              RCU_INT_LXTALSTBIC_Msk
#define RCU_INT_IRC8MSTBIC_Pos          (18U)
#define RCU_INT_IRC8MSTBIC_Msk          (0x1UL << RCU_INT_IRC8MSTBIC_Pos)
#define RCU_INT_IRC8MSTBIC              RCU_INT_IRC8MSTBIC_Msk
#define RCU_INT_HXTALSTBIC_Pos          (19U)
#define RCU_INT_HXTALSTBIC_Msk          (0x1UL << RCU_INT_HXTALSTBIC_Pos)
#define RCU_INT_HXTALSTBIC              RCU_INT_HXTALSTBIC_Msk
#define RCU_INT_PLLSTBIC_Pos            (20U)
#define RCU_INT_PLLSTBIC_Msk            (0x1UL << RCU_INT_PLLSTBIC_Pos)
#define RCU_INT_PLLSTBIC                RCU_INT_PLLSTBIC_Msk
#define RCU_INT_PLL1STBIC_Pos           (21U)
#define RCU_INT_PLL1STBIC_Msk           (0x1UL << RCU_INT_PLL1STBIC_Pos)
#define RCU_INT_PLL1STBIC               RCU_INT_PLL1STBIC_Msk
#define RCU_INT_PLL2STBIC_Pos           (22U)
#define RCU_INT_PLL2STBIC_Msk           (0x1UL << RCU_INT_PLL2STBIC_Pos)
#define RCU_INT_PLL2STBIC               RCU_INT_PLL2STBIC_Msk
#define RCU_INT_CKMIC_Pos               (23U)
#define RCU_INT_CKMIC_Msk               (0x1UL << RCU_INT_CKMIC_Pos)
#define RCU_INT_CKMIC                   RCU_INT_CKMIC_Msk

#define RCU_APB2RST_AFRST_Pos           (0U)
#define RCU_APB2RST_AFRST_Msk           (0x1UL << RCU_APB2RST_AFRST_Pos)
#define RCU_APB2RST_AFRST               RCU_APB2RST_AFRST_Msk
#define RCU_APB2RST_PARST_Pos           (2U)
#define RCU_APB2RST_PARST_Msk           (0x1UL << RCU_APB2RST_PARST_Pos)
#define RCU_APB2RST_PARST               RCU_APB2RST_PARST_Msk
#define RCU_APB2RST_PBRST_Pos           (3U)
#define RCU_APB2RST_PBRST_Msk           (0x1UL << RCU_APB2RST_PBRST_Pos)
#define RCU_APB2RST_PBRST               RCU_APB2RST_PBRST_Msk
#define RCU_APB2RST_PCRST_Pos           (4U)
#define RCU_APB2RST_PCRST_Msk           (0x1UL << RCU_APB2RST_PCRST_Pos)
#define RCU_APB2RST_PCRST               RCU_APB2RST_PCRST_Msk
#define RCU_APB2RST_PDRST_Pos           (5U)
#define RCU_APB2RST_PDRST_Msk           (0x1UL << RCU_APB2RST_PDRST_Pos)
#define RCU_APB2RST_PDRST               RCU_APB2RST_PDRST_Msk
#define RCU_APB2RST_PERST_Pos           (6U)
#define RCU_APB2RST_PERST_Msk           (0x1UL << RCU_APB2RST_PERST_Pos)
#define RCU_APB2RST_PERST               RCU_APB2RST_PERST_Msk
#define RCU_APB2RST_ADC0RST_Pos         (9U)
#define RCU_APB2RST_ADC0RST_Msk         (0x1UL << RCU_APB2RST_ADC0RST_Pos)
#define RCU_APB2RST_ADC0RST             RCU_APB2RST_ADC0RST_Msk
#define RCU_APB2RST_ADC1RST_Pos         (10U)
#define RCU_APB2RST_ADC1RST_Msk         (0x1UL << RCU_APB2RST_ADC1RST_Pos)
#define RCU_APB2RST_ADC1RST             RCU_APB2RST_ADC1RST_Msk
#define RCU_APB2RST_TIMER0RST_Pos       (11U)
#define RCU_APB2RST_TIMER0RST_Msk       (0x1UL << RCU_APB2RST_TIMER0RST_Pos)
#define RCU_APB2RST_TIMER0RST           RCU_APB2RST_TIMER0RST_Msk
#define RCU_APB2RST_SPI0RST_Pos         (12U)
#define RCU_APB2RST_SPI0RST_Msk         (0x1UL << RCU_APB2RST_SPI0RST_Pos)
#define RCU_APB2RST_SPI0RST             RCU_APB2RST_SPI0RST_Msk
#define RCU_APB2RST_USART0RST_Pos       (14U)
#define RCU_APB2RST_USART0RST_Msk       (0x1UL << RCU_APB2RST_USART0RST_Pos)
#define RCU_APB2RST_USART0RST           RCU_APB2RST_USART0RST_Msk

#define RCU_APB1RST_TIMER1RST_Pos       (0U)
#define RCU_APB1RST_TIMER1RST_Msk       (0x1UL << RCU_APB1RST_TIMER1RST_Pos)
#define RCU_APB1RST_TIMER1RST           RCU_APB1RST_TIMER1RST_Msk
#define RCU_APB1RST_TIMER2RST_Pos       (1U)
#define RCU_APB1RST_TIMER2RST_Msk       (0x1UL << RCU_APB1RST_TIMER2RST_Pos)
#define RCU_APB1RST_TIMER2RST           RCU_APB1RST_TIMER2RST_Msk
#define RCU_APB1RST_TIMER3RST_Pos       (2U)
#define RCU_APB1RST_TIMER3RST_Msk       (0x1UL << RCU_APB1RST_TIMER3RST_Pos)
#define RCU_APB1RST_TIMER3RST           RCU_APB1RST_TIMER3RST_Msk
#define RCU_APB1RST_TIMER4RST_Pos       (3U)
#define RCU_APB1RST_TIMER4RST_Msk       (0x1UL << RCU_APB1RST_TIMER4RST_Pos)
#define RCU_APB1RST_TIMER4RST           RCU_APB1RST_TIMER4RST_Msk
#define RCU_APB1RST_TIMER5RST_Pos       (4U)
#define RCU_APB1RST_TIMER5RST_Msk       (0x1UL << RCU_APB1RST_TIMER5RST_Pos)
#define RCU_APB1RST_TIMER5RST           RCU_APB1RST_TIMER5RST_Msk
#define RCU_APB1RST_TIMER6RST_Pos       (5U)
#define RCU_APB1RST_TIMER6RST_Msk       (0x1UL << RCU_APB1RST_TIMER6RST_Pos)
#define RCU_APB1RST_TIMER6RST           RCU_APB1RST_TIMER6RST_Msk
#define RCU_APB1RST_WWDGTRST_Pos        (11U)
#define RCU_APB1RST_WWDGTRST_Msk        (0x1UL << RCU_APB1RST_WWDGTRST_Pos)
#define RCU_APB1RST_WWDGTRST            RCU_APB1RST_WWDGTRST_Msk
#define RCU_APB1RST_SPI1RST_Pos         (14U)
#define RCU_APB1RST_SPI1RST_Msk         (0x1UL << RCU_APB1RST_SPI1RST_Pos)
#define RCU_APB1RST_SPI1RST             RCU_APB1RST_SPI1RST_Msk
#define RCU_APB1RST_SPI2RST_Pos         (15U)
#define RCU_APB1RST_SPI2RST_Msk         (0x1UL << RCU_APB1RST_SPI2RST_Pos)
#define RCU_APB1RST_SPI2RST             RCU_APB1RST_SPI2RST_Msk
#define RCU_APB1RST_USART1RST_Pos       (17U)
#define RCU_APB1RST_USART1RST_Msk       (0x1UL << RCU_APB1RST_USART1RST_Pos)
#define RCU_APB1RST_USART1RST           RCU_APB1RST_USART1RST_Msk
#define RCU_APB1RST_USART2RST_Pos       (18U)
#define RCU_APB1RST_USART2RST_Msk       (0x1UL << RCU_APB1RST_USART2RST_Pos)
#define RCU_APB1RST_USART2RST           RCU_APB1RST_USART2RST_Msk
#define RCU_APB1RST_USART3RST_Pos       (19U)
#define RCU_APB1RST_USART3RST_Msk       (0x1UL << RCU_APB1RST_USART3RST_Pos)
#define RCU_APB1RST_USART3RST           RCU_APB1RST_USART3RST_Msk
#define RCU_APB1RST_UART4RST_Pos        (20U)
#define RCU_APB1RST_UART4RST_Msk        (0x1UL << RCU_APB1RST_UART4RST_Pos)
#define RCU_APB1RST_UART4RST            RCU_APB1RST_UART4RST_Msk
#define RCU_APB1RST_I2C0RST_Pos         (21U)
#define RCU_APB1RST_I2C0RST_Msk         (0x1UL << RCU_APB1RST_I2C0RST_Pos)
#define RCU_APB1RST_I2C0RST             RCU_APB1RST_I2C0RST_Msk
#define RCU_APB1RST_I2C1RST_Pos         (22U)
#define RCU_APB1RST_I2C1RST_Msk         (0x1UL << RCU_APB1RST_I2C1RST_Pos)
#define RCU_APB1RST_I2C1RST             RCU_APB1RST_I2C1RST_Msk
#define RCU_APB1RST_CAN0RST_Pos         (25U)
#define RCU_APB1RST_CAN0RST_Msk         (0x1UL << RCU_APB1RST_CAN0RST_Pos)
#define RCU_APB1RST_CAN0RST             RCU_APB1RST_CAN0RST_Msk
#define RCU_APB1RST_CAN1RST_Pos         (26U)
#define RCU_APB1RST_CAN1RST_Msk         (0x1UL << RCU_APB1RST_CAN1RST_Pos)
#define RCU_APB1RST_CAN1RST             RCU_APB1RST_CAN1RST_Msk
#define RCU_APB1RST_BKPIRST_Pos         (27U)
#define RCU_APB1RST_BKPIRST_Msk         (0x1UL << RCU_APB1RST_BKPIRST_Pos)
#define RCU_APB1RST_BKPIRST             RCU_APB1RST_BKPIRST_Msk
#define RCU_APB1RST_PMURST_Pos          (28U)
#define RCU_APB1RST_PMURST_Msk          (0x1UL << RCU_APB1RST_PMURST_Pos)
#define RCU_APB1RST_PMURST              RCU_APB1RST_PMURST_Msk
#define RCU_APB1RST_DACRST_Pos          (29U)
#define RCU_APB1RST_DACRST_Msk          (0x1UL << RCU_APB1RST_DACRST_Pos)
#define RCU_APB1RST_DACRST              RCU_APB1RST_DACRST_Msk

#define RCU_AHBEN_DMA0EN_Pos            (0U)
#define RCU_AHBEN_DMA0EN_Msk            (0x1UL << RCU_AHBEN_DMA0EN_Pos)
#define RCU_AHBEN_DMA0EN                RCU_AHBEN_DMA0EN_Msk
#define RCU_AHBEN_DMA1EN_Pos            (1U)
#define RCU_AHBEN_DMA1EN_Msk            (0x1UL << RCU_AHBEN_DMA1EN_Pos)
#define RCU_AHBEN_DMA1EN                RCU_AHBEN_DMA1EN_Msk
#define RCU_AHBEN_SRAMSPEN_Pos          (2U)
#define RCU_AHBEN_SRAMSPEN_Msk          (0x1UL << RCU_AHBEN_SRAMSPEN_Pos)
#define RCU_AHBEN_SRAMSPEN              RCU_AHBEN_SRAMSPEN_Msk
#define RCU_AHBEN_FMCSPEN_Pos           (4U)
#define RCU_AHBEN_FMCSPEN_Msk           (0x1UL << RCU_AHBEN_FMCSPEN_Pos)
#define RCU_AHBEN_FMCSPEN               RCU_AHBEN_FMCSPEN_Msk
#define RCU_AHBEN_CRCEN_Pos             (6U)
#define RCU_AHBEN_CRCEN_Msk             (0x1UL << RCU_AHBEN_CRCEN_Pos)
#define RCU_AHBEN_CRCEN                 RCU_AHBEN_CRCEN_Msk
#define RCU_AHBEN_EXMCEN_Pos            (8U)
#define RCU_AHBEN_EXMCEN_Msk            (0x1UL << RCU_AHBEN_EXMCEN_Pos)
#define RCU_AHBEN_EXMCEN                RCU_AHBEN_EXMCEN_Msk
#define RCU_AHBEN_USBFSEN_Pos           (12U)
#define RCU_AHBEN_USBFSEN_Msk           (0x1UL << RCU_AHBEN_USBFSEN_Pos)
#define RCU_AHBEN_USBFSEN               RCU_AHBEN_USBFSEN_Msk

#define RCU_APB2EN_AFEN_Pos             (0U)
#define RCU_APB2EN_AFEN_Msk             (0x1UL << RCU_APB2EN_AFEN_Pos)
#define RCU_APB2EN_AFEN                 RCU_APB2EN_AFEN_Msk
#define RCU_APB2EN_PAEN_Pos             (2U)
#define RCU_APB2EN_PAEN_Msk             (0x1UL << RCU_APB2EN_PAEN_Pos)
#define RCU_APB2EN_PAEN                 RCU_APB2EN_PAEN_Msk
#define RCU_APB2EN_PBEN_Pos             (3U)
#define RCU_APB2EN_PBEN_Msk             (0x1UL << RCU_APB2EN_PBEN_Pos)
#define RCU_APB2EN_PBEN                 RCU_APB2EN_PBEN_Msk
#define RCU_APB2EN_PCEN_Pos             (4U)
#define RCU_APB2EN_PCEN_Msk             (0x1UL << RCU_APB2EN_PCEN_Pos)
#define RCU_APB2EN_PCEN                 RCU_APB2EN_PCEN_Msk
#define RCU_APB2EN_PDEN_Pos             (5U)
#define RCU_APB2EN_PDEN_Msk             (0x1UL << RCU_APB2EN_PDEN_Pos)
#define RCU_APB2EN_PDEN                 RCU_APB2EN_PDEN_Msk
#define RCU_APB2EN_PEEN_Pos             (6U)
#define RCU_APB2EN_PEEN_Msk             (0x1UL << RCU_APB2EN_PEEN_Pos)
#define RCU_APB2EN_PEEN                 RCU_APB2EN_PEEN_Msk
#define RCU_APB2EN_ADC0EN_Pos           (9U)
#define RCU_APB2EN_ADC0EN_Msk           (0x1UL << RCU_APB2EN_ADC0EN_Pos)
#define RCU_APB2EN_ADC0EN               RCU_APB2EN_ADC0EN_Msk
#define RCU_APB2EN_ADC1EN_Pos           (10U)
#define RCU_APB2EN_ADC1EN_Msk           (0x1UL << RCU_APB2EN_ADC1EN_Pos)
#define RCU_APB2EN_ADC1EN               RCU_APB2EN_ADC1EN_Msk
#define RCU_APB2EN_TIMER0EN_Pos         (11U)
#define RCU_APB2EN_TIMER0EN_Msk         (0x1UL << RCU_APB2EN_TIMER0EN_Pos)
#define RCU_APB2EN_TIMER0EN             RCU_APB2EN_TIMER0EN_Msk
#define RCU_APB2EN_SPI0EN_Pos           (12U)
#define RCU_APB2EN_SPI0EN_Msk           (0x1UL << RCU_APB2EN_SPI0EN_Pos)
#define RCU_APB2EN_SPI0EN               RCU_APB2EN_SPI0EN_Msk
#define RCU_APB2EN_USART0EN_Pos         (14U)
#define RCU_APB2EN_USART0EN_Msk         (0x1UL << RCU_APB2EN_USART0EN_Pos)
#define RCU_APB2EN_USART0EN             RCU_APB2EN_USART0EN_Msk

#define RCU_APB1EN_TIMER1EN_Pos         (0U)
#define RCU_APB1EN_TIMER1EN_Msk         (0x1UL << RCU_APB1EN_TIMER1EN_Pos)
#define RCU_APB1EN_TIMER1EN             RCU_APB1EN_TIMER1EN_Msk
#define RCU_APB1EN_TIMER2EN_Pos         (1U)
#define RCU_APB1EN_TIMER2EN_Msk         (0x1UL << RCU_APB1EN_TIMER2EN_Pos)
#define RCU_APB1EN_TIMER2EN             RCU_APB1EN_TIMER2EN_Msk
#define RCU_APB1EN_TIMER3EN_Pos         (2U)
#define RCU_APB1EN_TIMER3EN_Msk         (0x1UL << RCU_APB1EN_TIMER3EN_Pos)
#define RCU_APB1EN_TIMER3EN             RCU_APB1EN_TIMER3EN_Msk
#define RCU_APB1EN_TIMER4EN_Pos         (3U)
#define RCU_APB1EN_TIMER4EN_Msk         (0x1UL << RCU_APB1EN_TIMER4EN_Pos)
#define RCU_APB1EN_TIMER4EN             RCU_APB1EN_TIMER4EN_Msk
#define RCU_APB1EN_TIMER5EN_Pos         (4U)
#define RCU_APB1EN_TIMER5EN_Msk         (0x1UL << RCU_APB1EN_TIMER5EN_Pos)
#define RCU_APB1EN_TIMER5EN             RCU_APB1EN_TIMER5EN_Msk
#define RCU_APB1EN_TIMER6EN_Pos         (5U)
#define RCU_APB1EN_TIMER6EN_Msk         (0x1UL << RCU_APB1EN_TIMER6EN_Pos)
#define RCU_APB1EN_TIMER6EN             RCU_APB1EN_TIMER6EN_Msk
#define RCU_APB1EN_WWDGTEN_Pos          (11U)
#define RCU_APB1EN_WWDGTEN_Msk          (0x1UL << RCU_APB1EN_WWDGTEN_Pos)
#define RCU_APB1EN_WWDGTEN              RCU_APB1EN_WWDGTEN_Msk
#define RCU_APB1EN_SPI1EN_Pos           (14U)
#define RCU_APB1EN_SPI1EN_Msk           (0x1UL << RCU_APB1EN_SPI1EN_Pos)
#define RCU_APB1EN_SPI1EN               RCU_APB1EN_SPI1EN_Msk
#define RCU_APB1EN_SPI2EN_Pos           (15U)
#define RCU_APB1EN_SPI2EN_Msk           (0x1UL << RCU_APB1EN_SPI2EN_Pos)
#define RCU_APB1EN_SPI2EN               RCU_APB1EN_SPI2EN_Msk
#define RCU_APB1EN_USART1EN_Pos         (17U)
#define RCU_APB1EN_USART1EN_Msk         (0x1UL << RCU_APB1EN_USART1EN_Pos)
#define RCU_APB1EN_USART1EN             RCU_APB1EN_USART1EN_Msk
#define RCU_APB1EN_USART2EN_Pos         (18U)
#define RCU_APB1EN_USART2EN_Msk         (0x1UL << RCU_APB1EN_USART2EN_Pos)
#define RCU_APB1EN_USART2EN             RCU_APB1EN_USART2EN_Msk
#define RCU_APB1EN_USART3EN_Pos         (19U)
#define RCU_APB1EN_USART3EN_Msk         (0x1UL << RCU_APB1EN_USART3EN_Pos)
#define RCU_APB1EN_USART3EN             RCU_APB1EN_USART3EN_Msk
#define RCU_APB1EN_USART4EN_Pos         (20U)
#define RCU_APB1EN_USART4EN_Msk         (0x1UL << RCU_APB1EN_USART4EN_Pos)
#define RCU_APB1EN_USART4EN             RCU_APB1EN_USART4EN_Msk
#define RCU_APB1EN_I2C0EN_Pos           (21U)
#define RCU_APB1EN_I2C0EN_Msk           (0x1UL << RCU_APB1EN_I2C0EN_Pos)
#define RCU_APB1EN_I2C0EN               RCU_APB1EN_I2C0EN_Msk
#define RCU_APB1EN_I2C1EN_Pos           (22U)
#define RCU_APB1EN_I2C1EN_Msk           (0x1UL << RCU_APB1EN_I2C1EN_Pos)
#define RCU_APB1EN_I2C1EN               RCU_APB1EN_I2C1EN_Msk
#define RCU_APB1EN_CAN0EN_Pos           (25U)
#define RCU_APB1EN_CAN0EN_Msk           (0x1UL << RCU_APB1EN_CAN0EN_Pos)
#define RCU_APB1EN_CAN0EN               RCU_APB1EN_CAN0EN_Msk
#define RCU_APB1EN_CAN1EN_Pos           (26U)
#define RCU_APB1EN_CAN1EN_Msk           (0x1UL << RCU_APB1EN_CAN1EN_Pos)
#define RCU_APB1EN_CAN1EN               RCU_APB1EN_CAN1EN_Msk
#define RCU_APB1EN_BKPIEN_Pos           (27U)
#define RCU_APB1EN_BKPIEN_Msk           (0x1UL << RCU_APB1EN_BKPIEN_Pos)
#define RCU_APB1EN_BKPIEN               RCU_APB1EN_BKPIEN_Msk
#define RCU_APB1EN_PMUEN_Pos            (28U)
#define RCU_APB1EN_PMUEN_Msk            (0x1UL << RCU_APB1EN_PMUEN_Pos)
#define RCU_APB1EN_PMUEN                RCU_APB1EN_PMUEN_Msk
#define RCU_APB1EN_DACEN_Pos            (29U)
#define RCU_APB1EN_DACEN_Msk            (0x1UL << RCU_APB1EN_DACEN_Pos)
#define RCU_APB1EN_DACEN                RCU_APB1EN_DACEN_Msk

#define RCU_BDCTL_LXTALEN_Pos           (0U)
#define RCU_BDCTL_LXTALEN_Msk           (0x1UL << RCU_BDCTL_LXTALEN_Pos)
#define RCU_BDCTL_LXTALEN               RCU_BDCTL_LXTALEN_Msk
#define RCU_BDCTL_LXTALSTB_Pos          (1U)
#define RCU_BDCTL_LXTALSTB_Msk          (0x1UL << RCU_BDCTL_LXTALSTB_Pos)
#define RCU_BDCTL_LXTALSTB              RCU_BDCTL_LXTALSTB_Msk
#define RCU_BDCTL_RTCSRC_Pos            (8U)
#define RCU_BDCTL_RTCSRC_Msk            (0x3UL << RCU_BDCTL_RTCSRC_Pos)
#define RCU_BDCTL_RTCSRC                RCU_BDCTL_RTCSRC_Msk
#define RCU_BDCTL_RTCEN_Pos             (15U)
#define RCU_BDCTL_RTCEN_Msk             (0x1UL << RCU_BDCTL_RTCEN_Pos)
#define RCU_BDCTL_RTCEN                 RCU_BDCTL_RTCEN_Msk
#define RCU_BDCTL_BKPRST_Pos            (16U)
#define RCU_BDCTL_BKPRST_Msk            (0x1UL << RCU_BDCTL_BKPRST_Pos)
#define RCU_BDCTL_BKPRST                RCU_BDCTL_BKPRST_Msk

#define RCU_RSTSCK_IRC40KEN_Pos         (0U)
#define RCU_RSTSCK_IRC40KEN_Msk         (0x1UL << RCU_RSTSCK_IRC40KEN_Pos)
#define RCU_RSTSCK_IRC40KEN             RCU_RSTSCK_IRC40KEN_Msk
#define RCU_RSTSCK_IRC40KSTB_Pos        (1U)
#define RCU_RSTSCK_IRC40KSTB_Msk        (0x1UL << RCU_RSTSCK_IRC40KSTB_Pos)
#define RCU_RSTSCK_IRC40KSTB            RCU_RSTSCK_IRC40KSTB_Msk
#define RCU_RSTSCK_RSTFC_Pos            (24U)
#define RCU_RSTSCK_RSTFC_Msk            (0x1UL << RCU_RSTSCK_RSTFC_Pos)
#define RCU_RSTSCK_RSTFC                RCU_RSTSCK_RSTFC_Msk
#define RCU_RSTSCK_EPRSTF_Pos           (26U)
#define RCU_RSTSCK_EPRSTF_Msk           (0x1UL << RCU_RSTSCK_EPRSTF_Pos)
#define RCU_RSTSCK_EPRSTF               RCU_RSTSCK_EPRSTF_Msk
#define RCU_RSTSCK_PORRSTF_Pos          (27U)
#define RCU_RSTSCK_PORRSTF_Msk          (0x1UL << RCU_RSTSCK_PORRSTF_Pos)
#define RCU_RSTSCK_PORRSTF              RCU_RSTSCK_PORRSTF_Msk
#define RCU_RSTSCK_SWRSTF_Pos           (28U)
#define RCU_RSTSCK_SWRSTF_Msk           (0x1UL << RCU_RSTSCK_SWRSTF_Pos)
#define RCU_RSTSCK_SWRSTF               RCU_RSTSCK_SWRSTF_Msk
#define RCU_RSTSCK_FWDGTRSTF_Pos        (29U)
#define RCU_RSTSCK_FWDGTRSTF_Msk        (0x1UL << RCU_RSTSCK_FWDGTRSTF_Pos)
#define RCU_RSTSCK_FWDGTRSTF            RCU_RSTSCK_FWDGTRSTF_Msk
#define RCU_RSTSCK_WWDGTRSTF_Pos        (30U)
#define RCU_RSTSCK_WWDGTRSTF_Msk        (0x1UL << RCU_RSTSCK_WWDGTRSTF_Pos)
#define RCU_RSTSCK_WWDGTRSTF            RCU_RSTSCK_WWDGTRSTF_Msk
#define RCU_RSTSCK_LPRSTF_Pos           (31U)
#define RCU_RSTSCK_LPRSTF_Msk           (0x1UL << RCU_RSTSCK_LPRSTF_Pos)
#define RCU_RSTSCK_LPRSTF               RCU_RSTSCK_LPRSTF_Msk

#define RCU_AHBRST_USBFSRST_Pos         (12U)
#define RCU_AHBRST_USBFSRST_Msk         (0x1UL << RCU_AHBRST_USBFSRST_Pos)
#define RCU_AHBRST_USBFSRST             RCU_AHBRST_USBFSRST_Msk

#define RCU_CFG1_PREDV0_Pos             (0U)
#define RCU_CFG1_PREDV0_Msk             (0xFUL << RCU_CFG1_PREDV0_Pos)
#define RCU_CFG1_PREDV0                 RCU_CFG1_PREDV0_Msk
#define RCU_CFG1_PREDV1_Pos             (4U)
#define RCU_CFG1_PREDV1_Msk             (0xFUL << RCU_CFG1_PREDV1_Pos)
#define RCU_CFG1_PREDV1                 RCU_CFG1_PREDV1_Msk
#define RCU_CFG1_PLL1MF_Pos             (8U)
#define RCU_CFG1_PLL1MF_Msk             (0xFUL << RCU_CFG1_PLL1MF_Pos)
#define RCU_CFG1_PLL1MF                 RCU_CFG1_PLL1MF_Msk
#define RCU_CFG1_PLL2MF_Pos             (12U)
#define RCU_CFG1_PLL2MF_Msk             (0xFUL << RCU_CFG1_PLL2MF_Pos)
#define RCU_CFG1_PLL2MF                 RCU_CFG1_PLL2MF_Msk
#define RCU_CFG1_PREDV0SEL_Pos          (16U)
#define RCU_CFG1_PREDV0SEL_Msk          (0x1UL << RCU_CFG1_PREDV0SEL_Pos)
#define RCU_CFG1_PREDV0SEL              RCU_CFG1_PREDV0SEL_Msk
#define RCU_CFG1_I2S1SEL_Pos            (17U)
#define RCU_CFG1_I2S1SEL_Msk            (0x1UL << RCU_CFG1_I2S1SEL_Pos)
#define RCU_CFG1_I2S1SEL                RCU_CFG1_I2S1SEL_Msk
#define RCU_CFG1_I2S2SEL_Pos            (18U)
#define RCU_CFG1_I2S2SEL_Msk            (0x1UL << RCU_CFG1_I2S2SEL_Pos)
#define RCU_CFG1_I2S2SEL                RCU_CFG1_I2S2SEL_Msk

#define RCU_DSV_DSLPVS_Pos              (0U)
#define RCU_DSV_DSLPVS_Msk              (0x3UL << RCU_DSV_DSLPVS_Pos)
#define RCU_DSV_DSLPVS                  RCU_DSV_DSLPVS_Msk

#endif