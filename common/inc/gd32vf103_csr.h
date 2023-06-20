#ifndef GD32VF103_CSR_H
#define GD32VF103_CSR_H

/* Standard machine-mode CSRs. */

#define CSR_MVENDORID                   0xF11
#define CSR_MARCHID                     0xF12
#define CSR_MIMPID                      0xF13
#define CSR_MHARTID                     0xF14
#define CSR_MSTATUS                     0x300
#define CSR_MISA                        0x301
#define CSR_MIE                         0x304
#define CSR_MTVEC                       0x305
#define CSR_MTVT                        0x307
#define CSR_MSCRATCH                    0x340
#define CSR_MEPC                        0x341
#define CSR_MCAUSE                      0x342
#define CSR_MTVAL                       0x343
#define CSR_MIP                         0x344
#define CSR_MNXTI                       0x345
#define CSR_MINTSTATUS                  0x346
#define CSR_MSCRATCHCSW                 0x348
#define CSR_MSCRATCHCSWL                0x349
#define CSR_MCYCLE                      0xB00
#define CSR_MCYCLEH                     0xB80
#define CSR_MINSTRET                    0xB02
#define CSR_MINSTRETH                   0xB82

/* Standard user-mode CSRs. */

#define CSR_CYCLE                       0xC00
#define CSR_TIME                        0xC01
#define CSR_INSTRET                     0xC02
#define CSR_CYCLEH                      0xC80
#define CSR_TIMEH                       0xC81
#define CSR_INSTRETH                    0xC82

/* Customized CSRs. */

#define CSR_MCOUNTINHIBIT               0x320
#define CSR_MNVEC                       0x7C3
#define CSR_MSUBM                       0x7C4
#define CSR_MMISC_CTL                   0x7D0
#define CSR_MSAVESTATUS                 0x7D6
#define CSR_MSAVEEPC1                   0x7D7
#define CSR_MSAVECAUSE1                 0x7D8
#define CSR_MSAVEEPC2                   0x7D9
#define CSR_MSAVECAUSE2                 0x7DA
#define CSR_PUSHMSUBM                   0x7EB
#define CSR_MTVT2                       0x7EC
#define CSR_JALMNXTI                    0x7ED
#define CSR_PUSHMCAUSE                  0x7EE
#define CSR_PUSHMEPC                    0x7EF
#define CSR_SLEEPVALUE                  0x811
#define CSR_TXEVT                       0x812
#define CSR_WFE                         0x810

#define READ_CSR(reg) READ_CSR_(reg)
#define WRITE_CSR(reg, val) WRITE_CSR_(reg, val)
#define SET_CSR(reg, bits) SET_CSR_(reg, bits)
#define CLEAR_CSR(reg, bits) CLEAR_CSR_(reg, bits)

#define READ_CSR_(reg) \
({ \
    uint32_t val; \
    __asm__ volatile ("csrr %0, " #reg : "=r"(val)); \
    val; \
})
#define WRITE_CSR_(reg, val) \
    __asm__ volatile ("csrw " #reg ", %0" :: "r"(val))
#define SET_CSR_(reg, bits) \
    __asm__ volatile ("csrs " #reg ", %0" :: "r"(bits))
#define CLEAR_CSR_(reg, bits) \
    __asm__ volatile ("csrc " #reg ", %0" :: "r"(bits))

#endif
