TARGET = hello_riscv

# Directories.
BUILD_DIR = build
OCD_CFG_DIR = ../openocd

# Toolchain definitions.
TOOLCHAIN = riscv32-unknown-elf
CC = $(TOOLCHAIN)-gcc
OC = $(TOOLCHAIN)-objcopy
SZ = $(TOOLCHAIN)-size
DB = $(TOOLCHAIN)-gdb

OPT = -O0
WRN = -Wall -Wextra
ARCH = -march=rv32imac -mabi=ilp32 -mcmodel=medlow

# Assembler flags.
ASFLAGS  = $(OPT)
ASFLAGS += $(WRN)
ASFLAGS += -g3
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
LDFLAGS += -T gd32vf103cbt6.ld

# For debug.
OCD = riscv-openocd
OCD_CFG = ft2232.cfg
GDB_PORT = 3333

# Source files.
AS_SRCS = gd32vf103cbt6.S

AS_OBJS = $(addprefix $(BUILD_DIR)/, $(AS_SRCS:.S=.o))

.PHONY: all clean ocd gdb

all: $(BUILD_DIR) $(TARGET).elf

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/%.o: %.S
	$(CC) $(ASFLAGS) -c $< -o $@

$(TARGET).elf: $(AS_OBJS)
	$(CC) $(LDFLAGS) $^ -o $@
	$(OC) -S -O binary $@ $(TARGET).bin
	@$(SZ) $@

clean:
	rm -rf $(TARGET).elf $(TARGET).bin $(AS_OBJS)

ocd:
	$(OCD) -f $(OCD_CFG_DIR)/$(OCD_CFG)

gdb:
	$(DB) -q $(TARGET).elf -ex "target remote :$(GDB_PORT)"
