OUTPUT_ARCH("riscv")

/* Entry point. */
start = 0x00000000;

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
}
