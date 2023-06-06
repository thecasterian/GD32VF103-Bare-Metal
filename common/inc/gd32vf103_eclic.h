#ifndef GD32VF103_ECLIC_H
#define GD32VF103_ECLIC_H

#include <stdint.h>

#define MAX_IRQN 87

typedef struct
{
    volatile uint8_t cliccfg;
    uint8_t reserved0[3];
    volatile uint32_t clicinfo;
    uint8_t reserved1[3];
    volatile uint8_t mth;
    uint8_t reserved2[4084];
    struct
    {
        volatile uint8_t ip;
        volatile uint8_t ie;
        volatile uint8_t attr;
        volatile uint8_t ctl;
    } clicint[MAX_IRQN];
} ECLIC_TypeDef;

typedef enum
{
    /* Internal interrupts. */

    SFT_IRQn = 3,
    TMR_IRQn = 7,
    BUS_ERR_IRQn = 17,
    PERF_MON_IRQn = 18,

    /* External interrupts. */

    WWDGT_IRQn = 19,
    LVD_IRQn = 20,
    TAMPER_IRQn = 21,
    RTC_IRQn = 22,
    FMC_IRQn = 23,
    RCU_CTC_IRQn = 24,
    EXTI0_IRQn = 25,
    EXTI1_IRQn = 26,
    EXTI2_IRQn = 27,
    EXTI3_IRQn = 28,
    EXTI4_IRQn = 29,
    DMA0_Channel0_IRQn = 30,
    DMA0_Channel1_IRQn = 31,
    DMA0_Channel2_IRQn = 32,
    DMA0_Channel3_IRQn = 33,
    DMA0_Channel4_IRQn = 34,
    DMA0_Channel5_IRQn = 35,
    DMA0_Channel6_IRQn = 36,
    ADC0_1_IRQn = 37,
    CAN0_TX_IRQn = 38,
    CAN0_RX0_IRQn = 39,
    CAN0_RX1_IRQn = 40,
    CAN0_EWMC_IRQn = 41,
    EXTI5_9_IRQn = 42,
    TIMER0_BRK_IRQn = 43,
    TIMER0_UP_IRQn = 44,
    TIMER0_TRG_CMT_IRQn = 45,
    TIMER0_Channel_IRQn = 46,
    TIMER1_IRQn = 47,
    TIMER2_IRQn = 48,
    TIMER3_IRQn = 49,
    I2C0_EV_IRQn = 50,
    I2C0_ER_IRQn = 51,
    I2C1_EV_IRQn = 52,
    I2C1_ER_IRQn = 53,
    SPI0_IRQn = 54,
    SPI1_IRQn = 55,
    USART0_IRQn = 56,
    USART1_IRQn = 57,
    USART2_IRQn = 58,
    EXTI10_15_IRQn = 59,
    RTC_ALARM_IRQn = 60,
    USBFS_WKUP_IRQn = 61,
    EXMC_IRQn = 67,
    TIMER4_IRQn = 69,
    SPI2_IRQn = 70,
    UART3_IRQn = 71,
    UART4_IRQn = 72,
    TIMER5_IRQn = 73,
    TIMER6_IRQn = 74,
    DMA1_Channel0_IRQn = 75,
    DMA1_Channel1_IRQn = 76,
    DMA1_Channel2_IRQn = 77,
    DMA1_Channel3_IRQn = 78,
    DMA1_Channel4_IRQn = 79,
    CAN1_TX_IRQn = 82,
    CAN1_RX0_IRQn = 83,
    CAN1_RX1_IRQn = 84,
    CAN1_EWMC_IRQn = 85,
    USBFS_IRQn = 86,
} IRQn_Type;

#define ECLIC ((ECLIC_TypeDef *)0xD2000000)

#define ECLIC_CLICCFG_NLBITS_Pos (1U)
#define ELCIC_CLICCFG_NLBITS_Msk (0xFUL << ECLIC_CLICCFG_NLBITS_Pos)
#define ECLIC_CLICCFG_NLBITS ELCIC_CLICCFG_NLBITS_Msk

#define ECLIC_CLICINFO_NUM_INTERRUPT_Pos (0U)
#define ECLIC_CLICINFO_NUM_INTERRUPT_Msk (0x1FFFUL << ECLIC_CLICINFO_NUM_INTERRUPT_Pos)
#define ECLIC_CLICINFO_NUM_INTERRUPT ECLIC_CLICINFO_NUM_INTERRUPT_Msk
#define ECLIC_CLICINFO_VERSION_Pos (13U)
#define ECLIC_CLICINFO_VERSION_Msk (0xFFUL << ECLIC_CLICINFO_VERSION_Pos)
#define ECLIC_CLICINFO_VERSION ECLIC_CLICINFO_VERSION_Msk
#define ECLIC_CLICINFO_CLICINTCTLBITS_Pos (21U)
#define ECLIC_CLICINFO_CLICINTCTLBITS_Msk (0xFUL << ECLIC_CLICINFO_CLICINTCTLBITS_Pos)
#define ECLIC_CLICINFO_CLICINTCTLBITS ECLIC_CLICINFO_CLICINTCTLBITS_Msk

#define ECLIC_MTH_MTH_Pos (0U)
#define ECLIC_MTH_MTH_Msk (0xFFUL << ECLIC_MTH_MTH_Pos)
#define ECLIC_MTH_MTH ECLIC_MTH_MTH_Msk

#define ECLIC_CLICINTIP_IP_Pos (0U)
#define ECLIC_CLICINTIP_IP_Msk (0x1UL << ECLIC_CLICINTIP_IP_Pos)
#define ECLIC_CLICINTIP_IP ECLIC_CLICINTIP_IP_Msk

#define ECLIC_CLICINTIE_IE_Pos (0U)
#define ECLIC_CLICINTIE_IE_Msk (0x1UL << ECLIC_CLICINTIE_IE_Pos)
#define ECLIC_CLICINTIE_IE ECLIC_CLICINTIE_IE_Msk

#define ECLIC_CLICINTATTR_SHV_Pos (0U)
#define ECLIC_CLICINTATTR_SHV_Msk (0x1UL << ECLIC_CLICINTATTR_SHV_Pos)
#define ECLIC_CLICINTATTR_SHV ECLIC_CLICINTATTR_SHV_Msk
#define ECLIC_CLICINTATTR_TRIG_Pos (1U)
#define ECLIC_CLICINTATTR_TRIG_Msk (0x3UL << ECLIC_CLICINTATTR_TRIG_Pos)
#define ECLIC_CLICINTATTR_TRIG ECLIC_CLICINTATTR_TRIG_Msk

#endif
