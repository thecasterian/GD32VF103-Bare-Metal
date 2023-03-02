.section .init

_start:
    lui a0, %hi(reset_handler)
    addi a0, a0, %lo(reset_handler)
    jalr a0

.global reset_handler
.type reset_handler, %function
reset_handler:
    li a0, 0xdeadbeef
    inf_loop:
        j inf_loop
