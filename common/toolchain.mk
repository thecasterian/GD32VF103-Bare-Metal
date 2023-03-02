# Toolchain definitions.
TOOLCHAIN = riscv32-unknown-elf
CC = $(TOOLCHAIN)-gcc
OC = $(TOOLCHAIN)-objcopy
OD = $(TOOLCHAIN)-objdump
SZ = $(TOOLCHAIN)-size
DB = $(TOOLCHAIN)-gdb
