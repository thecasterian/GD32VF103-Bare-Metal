#ifndef GD32VF103_TIMER_H
#define GD32VF103_TIMER_H

#include <stdint.h>

typedef struct {
    volatile uint32_t mtime_lo;
    volatile uint32_t mtime_hi;
    volatile uint32_t mtimecmp_lo;
    volatile uint32_t mtimecmp_hi;
    uint32_t reserved0[1018];
    volatile uint32_t mtimectl;
    volatile uint32_t msip;
} TIMER_TypeDef;

#define TIMER ((TIMER_TypeDef *)0xD1000000)

#define TIMER_MTIMECTL_TIMESTOP_Pos     (0U)
#define TIMER_MTIMECTL_TIMESTOP_Msk     (0x1UL << TIMER_MTIMECTL_TIMESTOP_Pos)
#define TIMER_MTIMECTL_TIMESTOP         TIMER_MTIMECTL_TIMESTOP_Msk

#define TIMER_MSIP_MSIP_Pos             (0U)
#define TIMER_MSIP_MSIP_Msk             (0x1UL << TIMER_MSIP_MSIP_Pos)
#define TIMER_MSIP_MSIP                 TIMER_MSIP_MSIP_Msk

#endif
