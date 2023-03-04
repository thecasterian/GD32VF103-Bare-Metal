OUTPUT_ARCH("riscv")

/* Entry address. */
start = 0x00000000;
/* Reserved stack size. */
_stack_size = 2K;

MEMORY
{
    FLASH(rxai!w) : ORIGIN = 0x08000000, LENGTH = 128K
    RAM(wxa!ri) : ORIGIN = 0x20000000, LENGTH = 32K
}

SECTIONS
{
    /* Flash sections. */

    .start :
    {
        KEEP(*(.start))
    } >FLASH

    .text :
    {
        *(.text .text.*)
    } >FLASH

    .rodata :
    {
        *(.rodata .rodata.*)
    } >FLASH

    /* RAM sections. */

    . = ALIGN(4);

    _sidata = .;
    .data : AT(_sidata)
    {
        _sdata = .;

        *(.rdata)
        *(.data .data.*)

        . = ALIGN(8);
        PROVIDE(__global_pointer$ = . + 0x800);

        *(.sdata .sdata.*)

        . = ALIGN(8);
        *(.srodata.cst16)
        *(.srodata.cst8)
        *(.srodata.cst4)
        *(.srodata.cst2)
        *(.srodata .srodata.*)

        . = ALIGN(4);
        _edata = .;
    } >RAM

    .bss :
    {
        _sbss = .;

        *(.sbss .sbss.*)
        *(.bss .bss.*)
        *(COMMON)

        . = ALIGN(4);
        _ebss = .;
    } >RAM

    /* Reserve stack section. */
    .stack ORIGIN(RAM) + LENGTH(RAM) - _stack_size :
    {
        . = _stack_size;
        _estack = .;
    } >RAM
}
