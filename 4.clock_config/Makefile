TARGET = clock_config

# Directories.
BUILD_DIR = build
LIB_INCLUDE_DIR = ../common/inc
OCD_CFG_DIR = ../openocd

# Toolchain definitions.
TOOLCHAIN = riscv32-unknown-elf
CC = $(TOOLCHAIN)-gcc
OC = $(TOOLCHAIN)-objcopy
SZ = $(TOOLCHAIN)-size
DB = $(TOOLCHAIN)-gdb

OPT = -O0
WRN = -Wall -Wextra
ARCH = -march=rv32imac_zicsr -mabi=ilp32 -mcmodel=medlow

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
CFLAGS += -I$(LIB_INCLUDE_DIR)

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
C_SRCS = main.c

AS_OBJS = $(addprefix $(BUILD_DIR)/, $(AS_SRCS:.S=.o))
C_OBJS = $(addprefix $(BUILD_DIR)/, $(notdir $(C_SRCS:.c=.o)))

.PHONY: all clean ocd gdb

all: $(BUILD_DIR) $(TARGET).elf

$(BUILD_DIR):
	mkdir -p $@

$(AS_OBJS): $(BUILD_DIR)/%.o: %.S
	$(CC) $(ASFLAGS) -c $< -o $@

$(C_OBJS): $(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET).elf: $(AS_OBJS) $(C_OBJS)
	$(CC) $(LDFLAGS) $^ -o $@
	$(OC) -S -O binary $@ $(TARGET).bin
	@$(SZ) $@

clean:
	rm -rf $(TARGET).elf $(TARGET).bin $(AS_OBJS) $(C_OBJS)

ocd:
	$(OCD) -f $(OCD_CFG_DIR)/$(OCD_CFG)

gdb: $(TARGET).elf
	$(DB) -q $(TARGET).elf -ex "target remote :$(GDB_PORT)"

flash: $(TARGET).elf
	$(OCD) -f $(OCD_CFG_DIR)/$(OCD_CFG) -c init -c "flash protect 0 0 last off; program {$(TARGET).elf} verify; exit 0;"
