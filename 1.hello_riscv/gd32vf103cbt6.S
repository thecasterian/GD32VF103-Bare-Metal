.section .start, "ax", %progbits

_start:
    /* Jump to reset_handler. */
    lui a0, %hi(reset_handler)
    jalr zero, %lo(reset_handler)(a0)

.global reset_handler
.type reset_handler, %function
reset_handler:
    li a0, 0xdeadbeef

    li a1, 0
    inf_loop:
        addi a1, a1, 1
        j inf_loop
