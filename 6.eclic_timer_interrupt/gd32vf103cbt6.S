#include "gd32vf103_csr.h"

.section .start, "ax", %progbits

_start:
    /* Jump to reset_handler. */
    lui a0, %hi(reset_handler)
    jalr zero, %lo(reset_handler)(a0)

.globl reset_handler
.type reset_handler, %function
reset_handler:
    /* Set mnvec to be the mtvec address; share the exception handler for the NMI. */
    li t0, 0x200
    csrw CSR_MMISC_CTL, t0

    /* Set interrupt vector table base address in mtvt. */
    la t0, vtable
    csrw CSR_MTVT, t0

    /* Set non-vectored interrupt handler address in mtvt2 and enable mtvt2. */
    la t0, non_vectored_irq_handler
    ori t0, t0, 0x1
    csrw CSR_MTVT2, t0

    /* Set exception handler address in mtvec and set to CLIC mode. */
    la t0, exception_handler
    ori t0, t0, 0x3
    csrw CSR_MTVEC, t0

    /* Set global pointer. */
    .option push
    .option norelax
    la gp, __global_pointer$
    .option pop

    /* Set initial stack pointer: end of the section .stack */
    la sp, _estack

    /* Load data section. */
    la a0, _sdata
    la a1, _edata
    la a2, _sidata
    load_data_loop:
        beq a0, a1, load_data_loop_end
        lw t0, 0(a2)
        sw t0, 0(a0)
        addi a0, a0, 4
        addi a2, a2, 4
        j load_data_loop
    load_data_loop_end:

    /* Clear bss section. */
    la a0, _sbss
    la a1, _ebss
    clear_bss_loop:
        beq a0, a1, clear_bss_loop_end
        sw zero, 0(a0)
        addi a0, a0, 4
        j clear_bss_loop
    clear_bss_loop_end:

    /* Call main. */
    li a0, 0
    li a1, 0
    call main

.section .vtable, "ax", %progbits

.globl vtable
.type vtable, %object
vtable:
    /* Internal interrupts. */
    .word 0
    .word 0
    .word 0
    .word sft_irq_handler
    .word 0
    .word 0
    .word 0
    .word tmr_irq_handler
    .word 0
    .word 0
    .word 0
    .word 0
    .word 0
    .word 0
    .word 0
    .word 0
    .word 0
    .word bus_err_irq_handler
    .word perf_mon_irq_handler

    /* External interrupts. */
    .word wwdgt_irq_handler
	.word lvd_irq_handler
	.word tamper_irq_handler
	.word rtc_irq_handler
	.word fmc_irq_handler
	.word rcu_irq_handler
	.word exti0_irq_handler
	.word exti1_irq_handler
	.word exti2_irq_handler
	.word exti3_irq_handler
	.word exti4_irq_handler
	.word dma0_channel0_irq_handler
	.word dma0_channel1_irq_handler
	.word dma0_channel2_irq_handler
	.word dma0_channel3_irq_handler
	.word dma0_channel4_irq_handler
	.word dma0_channel5_irq_handler
	.word dma0_channel6_irq_handler
	.word adc0_1_irq_handler
	.word can0_tx_irq_handler
	.word can0_rx0_irq_handler
	.word can0_rx1_irq_handler
	.word can0_ewmc_irq_handler
	.word exti5_9_irq_handler
	.word timer0_brk_irq_handler
	.word timer0_up_irq_handler
	.word timer0_trg_cmt_irq_handler
	.word timer0_channel_irq_handler
	.word timer1_irq_handler
	.word timer2_irq_handler
	.word timer3_irq_handler
	.word i2c0_ev_irq_handler
	.word i2c0_er_irq_handler
	.word i2c1_ev_irq_handler
	.word i2c1_er_irq_handler
	.word spi0_irq_handler
	.word spi1_irq_handler
	.word usart0_irq_handler
	.word usart1_irq_handler
	.word usart2_irq_handler
	.word exti10_15_irq_handler
	.word rtc_alarm_irq_handler
	.word usbfs_wkup_irq_handler
    .word 0
    .word 0
    .word 0
    .word 0
	.word 0
	.word exmc_irq_handler
	.word 0
	.word timer4_irq_handler
	.word spi2_irq_handler
	.word uart3_irq_handler
	.word uart4_irq_handler
	.word timer5_irq_handler
	.word timer6_irq_handler
	.word dma1_channel0_irq_handler
	.word dma1_channel1_irq_handler
	.word dma1_channel2_irq_handler
	.word dma1_channel3_irq_handler
	.word dma1_channel4_irq_handler
    .word 0
    .word 0
	.word can1_tx_irq_handler
	.word can1_rx0_irq_handler
	.word can1_rx1_irq_handler
	.word can1_ewmc_irq_handler
	.word usbfs_irq_handler

.weak sft_irq_handler
.set sft_irq_handler, default_handler
.weak tmr_irq_handler
.set tmr_irq_handler, default_handler
.weak bus_err_irq_handler
.set bus_err_irq_handler, default_handler
.weak perf_mon_irq_handler
.set perf_mon_irq_handler, default_handler
.weak wwdgt_irq_handler
.set wwdgt_irq_handler, default_handler
.weak lvd_irq_handler
.set lvd_irq_handler, default_handler
.weak tamper_irq_handler
.set tamper_irq_handler, default_handler
.weak rtc_irq_handler
.set rtc_irq_handler, default_handler
.weak fmc_irq_handler
.set fmc_irq_handler, default_handler
.weak rcu_irq_handler
.set rcu_irq_handler, default_handler
.weak exti0_irq_handler
.set exti0_irq_handler, default_handler
.weak exti1_irq_handler
.set exti1_irq_handler, default_handler
.weak exti2_irq_handler
.set exti2_irq_handler, default_handler
.weak exti3_irq_handler
.set exti3_irq_handler, default_handler
.weak exti4_irq_handler
.set exti4_irq_handler, default_handler
.weak dma0_channel0_irq_handler
.set dma0_channel0_irq_handler, default_handler
.weak dma0_channel1_irq_handler
.set dma0_channel1_irq_handler, default_handler
.weak dma0_channel2_irq_handler
.set dma0_channel2_irq_handler, default_handler
.weak dma0_channel3_irq_handler
.set dma0_channel3_irq_handler, default_handler
.weak dma0_channel4_irq_handler
.set dma0_channel4_irq_handler, default_handler
.weak dma0_channel5_irq_handler
.set dma0_channel5_irq_handler, default_handler
.weak dma0_channel6_irq_handler
.set dma0_channel6_irq_handler, default_handler
.weak adc0_1_irq_handler
.set adc0_1_irq_handler, default_handler
.weak can0_tx_irq_handler
.set can0_tx_irq_handler, default_handler
.weak can0_rx0_irq_handler
.set can0_rx0_irq_handler, default_handler
.weak can0_rx1_irq_handler
.set can0_rx1_irq_handler, default_handler
.weak can0_ewmc_irq_handler
.set can0_ewmc_irq_handler, default_handler
.weak exti5_9_irq_handler
.set exti5_9_irq_handler, default_handler
.weak timer0_brk_irq_handler
.set timer0_brk_irq_handler, default_handler
.weak timer0_up_irq_handler
.set timer0_up_irq_handler, default_handler
.weak timer0_trg_cmt_irq_handler
.set timer0_trg_cmt_irq_handler, default_handler
.weak timer0_channel_irq_handler
.set timer0_channel_irq_handler, default_handler
.weak timer1_irq_handler
.set timer1_irq_handler, default_handler
.weak timer2_irq_handler
.set timer2_irq_handler, default_handler
.weak timer3_irq_handler
.set timer3_irq_handler, default_handler
.weak i2c0_ev_irq_handler
.set i2c0_ev_irq_handler, default_handler
.weak i2c0_er_irq_handler
.set i2c0_er_irq_handler, default_handler
.weak i2c1_ev_irq_handler
.set i2c1_ev_irq_handler, default_handler
.weak i2c1_er_irq_handler
.set i2c1_er_irq_handler, default_handler
.weak spi0_irq_handler
.set spi0_irq_handler, default_handler
.weak spi1_irq_handler
.set spi1_irq_handler, default_handler
.weak usart0_irq_handler
.set usart0_irq_handler, default_handler
.weak usart1_irq_handler
.set usart1_irq_handler, default_handler
.weak usart2_irq_handler
.set usart2_irq_handler, default_handler
.weak exti10_15_irq_handler
.set exti10_15_irq_handler, default_handler
.weak rtc_alarm_irq_handler
.set rtc_alarm_irq_handler, default_handler
.weak usbfs_wkup_irq_handler
.set usbfs_wkup_irq_handler, default_handler
.weak exmc_irq_handler
.set exmc_irq_handler, default_handler
.weak timer4_irq_handler
.set timer4_irq_handler, default_handler
.weak spi2_irq_handler
.set spi2_irq_handler, default_handler
.weak uart3_irq_handler
.set uart3_irq_handler, default_handler
.weak uart4_irq_handler
.set uart4_irq_handler, default_handler
.weak timer5_irq_handler
.set timer5_irq_handler, default_handler
.weak timer6_irq_handler
.set timer6_irq_handler, default_handler
.weak dma1_channel0_irq_handler
.set dma1_channel0_irq_handler, default_handler
.weak dma1_channel0_irq_handler
.set dma1_channel0_irq_handler, default_handler
.weak dma1_channel1_irq_handler
.set dma1_channel1_irq_handler, default_handler
.weak dma1_channel2_irq_handler
.set dma1_channel2_irq_handler, default_handler
.weak dma1_channel3_irq_handler
.set dma1_channel3_irq_handler, default_handler
.weak dma1_channel4_irq_handler
.set dma1_channel4_irq_handler, default_handler
.weak can1_tx_irq_handler
.set can1_tx_irq_handler, default_handler
.weak can1_rx0_irq_handler
.set can1_rx0_irq_handler, default_handler
.weak can1_rx1_irq_handler
.set can1_rx1_irq_handler, default_handler
.weak can1_ewmc_irq_handler
.set can1_ewmc_irq_handler, default_handler
.weak usbfs_irq_handler
.set usbfs_irq_handler, default_handler

.section .handler, "ax", %progbits

.globl default_handler
.type default_handler, %function
default_handler:
    mret

/* Exception handler must be aligned to 64 bytes. */
.align 6

.globl exception_handler
.type exception_handler, %function
exception_handler:
    mret

/* Non-vectored interrupt handler must be aligned to 4 bytes. */
.align 2

.globl non_vectored_irq_handler
.type non_vectored_irq_handler, %function
non_vectored_irq_handler:
    mret
