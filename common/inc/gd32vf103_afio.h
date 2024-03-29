#ifndef GD32VF103_AFIO_H
#define GD32VF103_AFIO_H

#include <stdint.h>

typedef struct {
    volatile uint32_t EC;               /* Event control register,              Address offset: 0x00. */
    volatile uint32_t PCF0;             /* AFIO port configuration register 0,  Address offset: 0x04. */
    volatile uint32_t EXTISS0;          /* EXTI sources selection register 0,   Address offset: 0x08. */
    volatile uint32_t EXTISS1;          /* EXTI sources selection register 1,   Address offset: 0x0C. */
    volatile uint32_t EXTISS2;          /* EXTI sources selection register 2,   Address offset: 0x10. */
    volatile uint32_t EXTISS3;          /* EXTI sources selection register 3,   Address offset: 0x14. */
    volatile uint32_t PCF1;             /* AFIO port configuration register 1,  Address offset: 0x1C. */
} AFIO_TypeDef;

#define AFIO ((AFIO_TypeDef *)0x40010000)

#define AFIO_EC_PIN_Pos                 (0U)
#define AFIO_EC_PIN_Msk                 (0xFUL << AFIO_EC_PIN_Pos)
#define AFIO_EC_PIN                     AFIO_EC_PIN_Msk
#define AFIO_EC_PORT_Pos                (4U)
#define AFIO_EC_PORT_Msk                (0x7UL << AFIO_EC_PORT_Pos)
#define AFIO_EC_PORT                    AFIO_EC_PORT_Msk
#define AFIO_EC_EOE_Pos                 (7U)
#define AFIO_EC_EOE_Msk                 (0x1UL << AFIO_EC_EOE_Pos)
#define AFIO_EC_EOE                     AFIO_EC_EOE_Msk

#define AFIO_PCF0_SPI0_REMAP_Pos        (0U)
#define AFIO_PCF0_SPI0_REMAP_Msk        (0x1UL << AFIO_PCF0_SPI0_REMAP_Pos)
#define AFIO_PCF0_SPI0_REMAP            AFIO_PCF0_SPI0_REMAP_Msk
#define AFIO_PCF0_I2C0_REMAP_Pos        (1U)
#define AFIO_PCF0_I2C0_REMAP_Msk        (0x1UL << AFIO_PCF0_I2C0_REMAP_Pos)
#define AFIO_PCF0_I2C0_REMAP            AFIO_PCF0_SPI0_REMAP_Msk
#define AFIO_PCF0_USART0_REMAP_Pos      (2U)
#define AFIO_PCF0_USART0_REMAP_Msk      (0x1UL << AFIO_PCF0_USART0_REMAP_Pos)
#define AFIO_PCF0_USART0_REMAP          AFIO_PCF0_USART0_REMAP_Msk
#define AFIO_PCF0_USART1_REMAP_Pos      (3U)
#define AFIO_PCF0_USART1_REMAP_Msk      (0x1UL << AFIO_PCF0_USART1_REMAP_Pos)
#define AFIO_PCF0_USART1_REMAP          AFIO_PCF0_USART1_REMAP_Msk
#define AFIO_PCF0_USART2_REMAP_Pos      (4U)
#define AFIO_PCF0_USART2_REMAP_Msk      (0x3UL << AFIO_PCF0_USART2_REMAP_Pos)
#define AFIO_PCF0_USART2_REMAP          AFIO_PCF0_USART2_REMAP_Msk
#define AFIO_PCF0_TIMER0_REMAP_Pos      (6U)
#define AFIO_PCF0_TIMER0_REMAP_Msk      (0x3UL << AFIO_PCF0_TIMER0_REMAP_Pos)
#define AFIO_PCF0_TIMER0_REMAP          AFIO_PCF0_TIMER0_REMAP_Msk
#define AFIO_PCF0_TIMER1_REMAP_Pos      (8U)
#define AFIO_PCF0_TIMER1_REMAP_Msk      (0x3UL << AFIO_PCF0_TIMER1_REMAP_Pos)
#define AFIO_PCF0_TIMER1_REMAP          AFIO_PCF0_TIMER1_REMAP_Msk
#define AFIO_PCF0_TIMER2_REMAP_Pos      (10U)
#define AFIO_PCF0_TIMER2_REMAP_Msk      (0x3UL << AFIO_PCF0_TIMER2_REMAP_Pos)
#define AFIO_PCF0_TIMER2_REMAP          AFIO_PCF0_TIMER2_REMAP_Msk
#define AFIO_PCF0_TIMER3_REMAP_Pos      (12U)
#define AFIO_PCF0_TIMER3_REMAP_Msk      (0x1UL << AFIO_PCF0_TIMER3_REMAP_Pos)
#define AFIO_PCF0_TIMER3_REMAP          AFIO_PCF0_TIMER3_REMAP_Msk
#define AFIO_PCF0_CAN0_REMAP_Pos        (13U)
#define AFIO_PCF0_CAN0_REMAP_Msk        (0x3UL << AFIO_PCF0_CAN0_REMAP_Pos)
#define AFIO_PCF0_CAN0_REMAP            AFIO_PCF0_CAN0_REMAP_Msk
#define AFIO_PCF0_PD01_REMAP_Pos        (15U)
#define AFIO_PCF0_PD01_REMAP_Msk        (0x1UL << AFIO_PCF0_PD01_REMAP_Pos)
#define AFIO_PCF0_PD01_REMAP            AFIO_PCF0_PD01_REMAP_Msk
#define AFIO_PCF0_TIMER4CH3_IREMAP_Pos  (16U)
#define AFIO_PCF0_TIMER4CH3_IREMAP_Msk  (0x1UL << AFIO_PCF0_TIMER4CH3_IREMAP_Pos)
#define AFIO_PCF0_TIMER4CH3_IREMAP      AFIO_PCF0_TIMER4CH3_IREMAP_Msk
#define AFIO_PCF0_CAN1_REMAP_Pos        (22U)
#define AFIO_PCF0_CAN1_REMAP_Msk        (0x1UL << AFIO_PCF0_CAN1_REMAP_Pos)
#define AFIO_PCF0_CAN1_REMAP            AFIO_PCF0_CAN1_REMAP_Msk
#define AFIO_PCF0_SWJ_CFG_Pos           (24U)
#define AFIO_PCF0_SWJ_CFG_Msk           (0x7UL << AFIO_PCF0_SWJ_CFG_Pos)
#define AFIO_PCF0_SWJ_CFG               AFIO_PCF0_SWJ_CFG_Msk
#define AFIO_PCF0_SPI2_REMAP_Pos        (28U)
#define AFIO_PCF0_SPI2_REMAP_Msk        (0x1UL << AFIO_PCF0_SPI2_REMAP_Pos)
#define AFIO_PCF0_SPI2_REMAP            AFIO_PCF0_SPI2_REMAP_Msk
#define AFIO_PCF0_TIMER1ITI1_REMAP_Pos  (29U)
#define AFIO_PCF0_TIMER1ITI1_REMAP_Msk  (0x1UL << AFIO_PCF0_TIMER1ITI1_REMAP_Pos)
#define AFIO_PCF0_TIMER1ITI1_REMAP      AFIO_PCF0_TIMER1ITI1_REMAP_Msk

#define AFIO_EXTISS0_EXTI0_SS_Pos       (0U)
#define AFIO_EXTISS0_EXTI0_SS_Msk       (0xFUL << AFIO_EXTISS0_EXTI0_SS_Pos)
#define AFIO_EXTISS0_EXTI0_SS           AFIO_EXTISS0_EXTI0_SS_Msk
#define AFIO_EXTISS0_EXTI1_SS_Pos       (4U)
#define AFIO_EXTISS0_EXTI1_SS_Msk       (0xFUL << AFIO_EXTISS0_EXTI1_SS_Pos)
#define AFIO_EXTISS0_EXTI1_SS           AFIO_EXTISS0_EXTI1_SS_Msk
#define AFIO_EXTISS0_EXTI2_SS_Pos       (8U)
#define AFIO_EXTISS0_EXTI2_SS_Msk       (0xFUL << AFIO_EXTISS0_EXTI2_SS_Pos)
#define AFIO_EXTISS0_EXTI2_SS           AFIO_EXTISS0_EXTI2_SS_Msk
#define AFIO_EXTISS0_EXTI3_SS_Pos       (12U)
#define AFIO_EXTISS0_EXTI3_SS_Msk       (0xFUL << AFIO_EXTISS0_EXTI3_SS_Pos)
#define AFIO_EXTISS0_EXTI3_SS           AFIO_EXTISS0_EXTI3_SS_Msk

#define AFIO_EXTISS1_EXTI4_SS_Pos       (0U)
#define AFIO_EXTISS1_EXTI4_SS_Msk       (0xFUL << AFIO_EXTISS1_EXTI4_SS_Pos)
#define AFIO_EXTISS1_EXTI4_SS           AFIO_EXTISS1_EXTI4_SS_Msk
#define AFIO_EXTISS1_EXTI5_SS_Pos       (4U)
#define AFIO_EXTISS1_EXTI5_SS_Msk       (0xFUL << AFIO_EXTISS1_EXTI5_SS_Pos)
#define AFIO_EXTISS1_EXTI5_SS           AFIO_EXTISS1_EXTI5_SS_Msk
#define AFIO_EXTISS1_EXTI6_SS_Pos       (8U)
#define AFIO_EXTISS1_EXTI6_SS_Msk       (0xFUL << AFIO_EXTISS1_EXTI6_SS_Pos)
#define AFIO_EXTISS1_EXTI6_SS           AFIO_EXTISS1_EXTI6_SS_Msk
#define AFIO_EXTISS1_EXTI7_SS_Pos       (12U)
#define AFIO_EXTISS1_EXTI7_SS_Msk       (0xFUL << AFIO_EXTISS1_EXTI7_SS_Pos)
#define AFIO_EXTISS1_EXTI7_SS           AFIO_EXTISS1_EXTI7_SS_Msk

#define AFIO_EXTISS2_EXTI8_SS_Pos       (0U)
#define AFIO_EXTISS2_EXTI8_SS_Msk       (0xFUL << AFIO_EXTISS2_EXTI8_SS_Pos)
#define AFIO_EXTISS2_EXTI8_SS           AFIO_EXTISS2_EXTI8_SS_Msk
#define AFIO_EXTISS2_EXTI9_SS_Pos       (4U)
#define AFIO_EXTISS2_EXTI9_SS_Msk       (0xFUL << AFIO_EXTISS2_EXTI9_SS_Pos)
#define AFIO_EXTISS2_EXTI9_SS           AFIO_EXTISS2_EXTI9_SS_Msk
#define AFIO_EXTISS2_EXTI10_SS_Pos      (8U)
#define AFIO_EXTISS2_EXTI10_SS_Msk      (0xFUL << AFIO_EXTISS2_EXTI10_SS_Pos)
#define AFIO_EXTISS2_EXTI10_SS          AFIO_EXTISS2_EXTI10_SS_Msk
#define AFIO_EXTISS2_EXTI11_SS_Pos      (12U)
#define AFIO_EXTISS2_EXTI11_SS_Msk      (0xFUL << AFIO_EXTISS2_EXTI11_SS_Pos)
#define AFIO_EXTISS2_EXTI11_SS          AFIO_EXTISS2_EXTI11_SS_Msk

#define AFIO_EXTISS3_EXTI12_SS_Pos      (0U)
#define AFIO_EXTISS3_EXTI12_SS_Msk      (0xFUL << AFIO_EXTISS3_EXTI12_SS_Pos)
#define AFIO_EXTISS3_EXTI12_SS          AFIO_EXTISS3_EXTI12_SS_Msk
#define AFIO_EXTISS3_EXTI13_SS_Pos      (4U)
#define AFIO_EXTISS3_EXTI13_SS_Msk      (0xFUL << AFIO_EXTISS3_EXTI13_SS_Pos)
#define AFIO_EXTISS3_EXTI13_SS          AFIO_EXTISS3_EXTI13_SS_Msk
#define AFIO_EXTISS3_EXTI14_SS_Pos      (8U)
#define AFIO_EXTISS3_EXTI14_SS_Msk      (0xFUL << AFIO_EXTISS3_EXTI14_SS_Pos)
#define AFIO_EXTISS3_EXTI14_SS          AFIO_EXTISS3_EXTI14_SS_Msk
#define AFIO_EXTISS3_EXTI15_SS_Pos      (12U)
#define AFIO_EXTISS3_EXTI15_SS_Msk      (0xFUL << AFIO_EXTISS3_EXTI15_SS_Pos)
#define AFIO_EXTISS3_EXTI15_SS          AFIO_EXTISS3_EXTI15_SS_Msk

#define AFIO_PCF1_EXMC_NADV_Pos         (10U)
#define AFIO_PCF1_EXMC_NADV_Msk         (0x1UL << AFIO_PCF1_EXMC_NADV_Pos)
#define AFIO_PCF1_EXMC_NADV             AFIO_PCF1_EXMC_NADV_Msk

#endif
