.section .start, "ax", %progbits

_start:
    /* Jump to reset_handler. */
    lui a0, %hi(reset_handler)
    jalr zero, %lo(reset_handler)(a0)

.globl reset_handler
.type reset_handler, %function
reset_handler:
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
