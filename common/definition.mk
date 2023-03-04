# Directories.
INCLUDE_DIR = inc
SOURCE_DIR = src
BUILD_DIR = build
OCD_CFG_DIR = ../openocd

# Toolchain definitions.
TOOLCHAIN = riscv32-unknown-elf
CC = $(TOOLCHAIN)-gcc
OC = $(TOOLCHAIN)-objcopy
OD = $(TOOLCHAIN)-objdump
SZ = $(TOOLCHAIN)-size
DB = $(TOOLCHAIN)-gdb

OPT = -O0
WRN = -Wall -Wextra
ARCH = -march=rv32imac -mabi=ilp32 -mcmodel=medlow

# Assembler flags.
ASFLAGS  = $(OPT)
ASFLAGS += $(WRN)
ASFLAGS += $(ARCH)

# Compiler flags.
CFLAGS  = $(OPT)
CFLAGS += $(WRN)
CFLAGS += -g3
CFLAGS += -std=gnu11
CFLAGS += --specs=nano.specs
CFLAGS += --specs=nosys.specs
CFLAGS += -ffunction-sections
CFLAGS += -fdata-sections
CFLAGS += $(ARCH)

# Linker flags.
LDFLAGS  = $(OPT)
LDFLAGS += $(WRN)
LDFLAGS += $(ARCH)
LDFLAGS += -nostartfiles
LDFLAGS += -Wl,--gc-sections

# For debug.
OCD = riscv-openocd
OCD_CFG = ft2232.cfg
GDB_PORT = 3333
