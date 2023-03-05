.section .start, "ax", %progbits

_start:
    /* Jump to reset_handler. */
    lui a0, %hi(reset_handler)              // a0 = (&reset_handler) & 0xFFFFF000
    jalr zero, %lo(reset_handler)(a0)       // pc = a0 + (&reset_handler) & 0x00000FFF

.globl reset_handler
.type reset_handler, %function
reset_handler:
    li a0, 0xdeadbeef                       // a0 = 0xdeadbeef

    li a1, 0                                // a1 = 0
    inf_loop:                               // while (1) {
        addi a1, a1, 1                      //     a1 = a1 + 1
        j inf_loop                          // }
