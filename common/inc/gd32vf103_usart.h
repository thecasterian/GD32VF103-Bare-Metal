#ifndef GD32VF103_USART_H
#define GD32VF103_USART_H

#include <stdint.h>

typedef struct {
    volatile uint32_t STAT;             /* Status register,                     Address offset: 0x00. */
    volatile uint32_t DATA;             /* Data register,                       Address offset: 0x04. */
    volatile uint32_t BAUD;             /* Baud rate register,                  Address offset: 0x08. */
    volatile uint32_t CTL0;             /* Control register 0,                  Address offset: 0x0C. */
    volatile uint32_t CTL1;             /* Control register 1.                  Address offset: 0x10. */
    volatile uint32_t CTL2;             /* Control register 2.                  Address offset: 0x14. */
    volatile uint32_t GP;               /* Guard time and prescaler register.   Address offset: 0x18. */
} USART_TypeDef;

#define USART0 ((USART_TypeDef *)0x40013800)
#define USART1 ((USART_TypeDef *)0x40004400)
#define USART2 ((USART_TypeDef *)0x40004800)

#define USART_STAT_PERR_Pos             (0U)
#define USART_STAT_PERR_Msk             (0x1UL << USART_STAT_PERR_Pos)
#define USART_STAT_PERR                 USART_STAT_PERR_Msk
#define USART_STAT_FERR_Pos             (1U)
#define USART_STAT_FERR_Msk             (0x1UL << USART_STAT_FERR_Pos)
#define USART_STAT_FERR                 USART_STAT_FERR_Msk
#define USART_STAT_NERR_Pos             (2U)
#define USART_STAT_NERR_Msk             (0x1UL << USART_STAT_NERR_Pos)
#define USART_STAT_NERR                 USART_STAT_NERR_Msk
#define USART_STAT_ORERR_Pos            (3U)
#define USART_STAT_ORERR_Msk            (0x1UL << USART_STAT_ORERR_Pos)
#define USART_STAT_ORERR                USART_STAT_ORERR_Msk
#define USART_STAT_IDLEF_Pos            (4U)
#define USART_STAT_IDLEF_Msk            (0x1UL << USART_STAT_IDLEF_Pos)
#define USART_STAT_IDLEF                USART_STAT_IDLEF_Msk
#define USART_STAT_RBNE_Pos             (5U)
#define USART_STAT_RBNE_Msk             (0x1UL << USART_STAT_RBNE_Pos)
#define USART_STAT_RBNE                 USART_STAT_RBNE_Msk
#define USART_STAT_TC_Pos               (6U)
#define USART_STAT_TC_Msk               (0x1UL << USART_STAT_TC_Pos)
#define USART_STAT_TC                   USART_STAT_TC_Msk
#define USART_STAT_TBE_Pos              (7U)
#define USART_STAT_TBE_Msk              (0x1UL << USART_STAT_TBE_Pos)
#define USART_STAT_TBE                  USART_STAT_TBE_Msk
#define USART_STAT_LBDF_Pos             (8U)
#define USART_STAT_LBDF_Msk             (0x1UL << USART_STAT_LBDF_Pos)
#define USART_STAT_LBDF                 USART_STAT_LBDF_Msk
#define USART_STAT_CTSF_Pos             (9U)
#define USART_STAT_CTSF_Msk             (0x1UL << USART_STAT_CTSF_Pos)
#define USART_STAT_CTSF                 USART_STAT_CTSF_Msk

#define USART_DATA_DATA_Pos             (0U)
#define USART_DATA_DATA_Msk             (0x1FFUL << USART_DATA_DATA_Pos)
#define USART_DATA_DATA                 USART_DATA_DATA_Pos

#define USART_BAUD_FRADIV_Pos           (0U)
#define USART_BAUD_FRADIV_Msk           (0xFUL << USART_BAUD_FRADIV_Pos)
#define USART_BAUD_FRADIV               USART_BAUD_FRADIV_Msk
#define USART_BAUD_INTDIV_Pos           (4U)
#define USART_BAUD_INTDIV_Msk           (0xFFF << USART_BAUD_INTDIV_Pos)
#define USRAT_BAUD_INTDIV               USART_BAUD_INTDIV_Msk

#define USART_CTL0_SBKCMD_Pos           (0U)
#define USART_CTL0_SBKCMD_Msk           (0x1UL << USART_CTL0_SBKCMD_Pos)
#define USART_CTL0_SBKCMD               USART_CTL0_SBKCMD_Msk
#define USART_CTL0_RWU_Pos              (1U)
#define USART_CTL0_RWU_Msk              (0x1UL << USART_CTL0_RWU_Pos)
#define USART_CTL0_RWU                  USART_CTL0_RWU_Msk
#define USART_CTL0_REN_Pos              (2U)
#define USART_CTL0_REN_Msk              (0x1UL << USART_CTL0_REN_Pos)
#define USART_CTL0_REN                  USART_CTL0_REN_Msk
#define USART_CTL0_TEN_Pos              (3U)
#define USART_CTL0_TEN_Msk              (0x1UL << USART_CTL0_TEN_Pos)
#define USART_CTL0_TEN                  USART_CTL0_TEN_Msk
#define USART_CTL0_IDLEIE_Pos           (4U)
#define USART_CTL0_IDLEIE_Msk           (0x1UL << USART_CTL0_IDLEIE_Pos)
#define USART_CTL0_IDLEIE               USART_CTL0_IDLEIE_Msk
#define USART_CTL0_RBNEIE_Pos           (5U)
#define USART_CTL0_RBNEIE_Msk           (0x1UL << USART_CTL0_RBNEIE_Pos)
#define USART_CTL0_RBNEIE               USART_CTL0_RBNEIE_Msk
#define USART_CTL0_TCIE_Pos             (6U)
#define USART_CTL0_TCIE_Msk             (0x1UL << USART_CTL0_TCIE_Pos)
#define USART_CTL0_TCIE                 USART_CTL0_TCIE_Msk
#define USART_CTL0_TBEIE_Pos            (7U)
#define USART_CTL0_TBEIE_Msk            (0x1UL << USART_CTL0_TBEIE_Pos)
#define USART_CTL0_TBEIE                USART_CTL0_TBEIE_Msk
#define USART_CTL0_PERRIE_Pos           (8U)
#define USART_CTL0_PERRIE_Msk           (0x1UL << USART_CTL0_PERRIE_Pos)
#define USART_CTL0_PERRIE               USART_CTL0_PERRIE_Msk
#define USART_CTL0_PM_Pos               (9U)
#define USART_CTL0_PM_Msk               (0x1UL << USART_CTL0_PM_Pos)
#define USART_CTL0_PM                   USART_CTL0_PM_Msk
#define USART_CTL0_PCEN_Pos             (10U)
#define USART_CTL0_PCEN_Msk             (0x1UL << USART_CTL0_PCEN_Pos)
#define USART_CTL0_PCEN                 USART_CTL0_PCEN_Msk
#define USART_CTL0_WM_Pos               (11U)
#define USART_CTL0_WM_Msk               (0x1UL << USART_CTL0_WM_Pos)
#define USART_CTL0_WM                   USART_CTL0_WM_Msk
#define USART_CTL0_WL_Pos               (12U)
#define USART_CTL0_WL_Msk               (0x1UL << USART_CTL0_WL_Pos)
#define USART_CTL0_WL                   USART_CTL0_WL_Msk
#define USART_CTL0_UEN_Pos              (13U)
#define USART_CTL0_UEN_Msk              (0x1UL << USART_CTL0_UEN_Pos)
#define USART_CTL0_UEN                  USART_CTL0_UEN_Msk

#define USART_CTL1_ADDR_Pos             (0U)
#define USART_CTL1_ADDR_Msk             (0xFUL << USART_CTL1_ADDR_Pos)
#define USART_CTL1_ADDR                 USART_CTL1_ADDR_Msk
#define USART_CTL1_LBLEN_Pos            (5U)
#define USART_CTL1_LBLEN_Msk            (0x1UL << USART_CTL1_LBLEN_Pos)
#define USART_CTL1_LBLEN                USART_CTL1_LBLEN_Msk
#define USART_CTL1_LBDIE_Pos            (6U)
#define USART_CTL1_LBDIE_Msk            (0x1UL << USART_CTL1_LBDIE_Pos)
#define USART_CTL1_LBDIE                USART_CTL1_LBDIE_Msk
#define USART_CTL1_CLEN_Pos             (8U)
#define USART_CTL1_CLEN_Msk             (0x1UL << USART_CTL1_CLEN_Pos)
#define USART_CTL1_CLEN                 USART_CTL1_CLEN_Msk
#define USART_CTL1_CPH_Pos              (9U)
#define USART_CTL1_CPH_Msk              (0x1UL << USART_CTL1_CPH_Pos)
#define USART_CTL1_CPH                  USART_CTL1_CPH_Msk
#define USART_CTL1_CPL_Pos              (10U)
#define USART_CTL1_CPL_Msk              (0x1UL << USART_CTL1_CPL_Pos)
#define USART_CTL1_CPL                  USART_CTL1_CPL_Msk
#define USART_CTL1_CKEN_Pos             (11U)
#define USART_CTL1_CKEN_Msk             (0x1UL << USART_CTL1_CKEN_Pos)
#define USART_CTL1_CKEN                 USART_CTL1_CKEN_Msk
#define USART_CTL1_STB_Pos              (12U)
#define USART_CTL1_STB_Msk              (0x3UL << USART_CTL1_STB_Pos)
#define USART_CTL1_STB                  USART_CTL1_STB_Msk
#define USART_CTL1_LMEN_Pos             (14U)
#define USART_CTL1_LMEN_Msk             (0x1UL << USART_CTL1_LMEN_Pos)
#define USART_CTL1_LMEN                 USART_CTL1_LMEN_Msk

#define USART_CTL2_ERRIE_Pos            (0U)
#define USART_CTL2_ERRIE_Msk            (0x1UL << USART_CTL2_ERRIE_Pos)
#define USART_CTL2_ERRIE                USART_CTL2_ERRIE_Msk
#define USART_CTL2_IREN_Pos             (1U)
#define USART_CTL2_IREN_Msk             (0x1UL << USART_CTL2_IREN_Pos)
#define USART_CTL2_IREN                 USART_CTL2_IREN_Msk
#define USART_CTL2_IRLP_Pos             (2U)
#define USART_CTL2_IRLP_Msk             (0x1UL << USART_CTL2_IRLP_Pos)
#define USART_CTL2_IRLP                 USART_CTL2_IRLP_Msk
#define USART_CTL2_HDEN_Pos             (3U)
#define USART_CTL2_HDEN_Msk             (0x1UL << USART_CTL2_HDEN_Pos)
#define USART_CTL2_HDEN                 USART_CTL2_HDEN_Msk
#define USART_CTL2_NKEN_Pos             (4U)
#define USART_CTL2_NKEN_Msk             (0x1UL << USART_CTL2_NKEN_Pos)
#define USART_CTL2_NKEN                 USART_CTL2_NKEN_Msk
#define USART_CTL2_SCEN_Pos             (5U)
#define USART_CTL2_SCEN_Msk             (0x1UL << USART_CTL2_SCEN_Pos)
#define USART_CTL2_SCEN                 USART_CTL2_SCEN_Msk
#define USART_CTL2_DENR_Pos             (6U)
#define USART_CTL2_DENR_Msk             (0x1UL << USART_CTL2_DENR_Pos)
#define USART_CTL2_DENR                 USART_CTL2_DENR_Msk
#define USART_CTL2_DENT_Pos             (7U)
#define USART_CTL2_DENT_Msk             (0x1UL << USART_CTL2_DENT_Pos)
#define USART_CTL2_DENT                 USART_CTL2_DENT_Msk
#define USART_CTL2_RTSEN_Pos            (8U)
#define USART_CTL2_RTSEN_Msk            (0x1UL << USART_CTL2_RTSEN_Pos)
#define USART_CTL2_RTSEN                USART_CTL2_RTSEN_Msk
#define USART_CTL2_CTSEN_Pos            (9U)
#define USART_CTL2_CTSEN_Msk            (0x1UL << USART_CTL2_CTSEN_Pos)
#define USART_CTL2_CTSEN                USART_CTL2_CTSEN_Msk
#define USART_CTL2_CTSIE_Pos            (10U)
#define USART_CTL2_CTSIE_Msk            (0x1UL << USART_CTL2_CTSIE_Pos)
#define USART_CTL2_CTSIE                USART_CTL2_CTSIE_Msk

#endif
