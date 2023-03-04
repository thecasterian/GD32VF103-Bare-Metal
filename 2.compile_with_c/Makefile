TARGET = compile_with_c

include ../common/definition.mk

AS_SRCS = gd32vf103cbt6.S
C_SRCS = main.c

LDFLAGS += -T gd32vf103cbt6.ld

AS_OBJS = $(addprefix $(BUILD_DIR)/, $(AS_SRCS:.S=.o))
C_OBJS = $(addprefix $(BUILD_DIR)/, $(C_SRCS:.c=.o))

.PHONY: all clean ocd gdb

all: $(BUILD_DIR) $(TARGET).elf

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/%.o: %.S
	$(CC) $(ASFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET).elf: $(AS_OBJS) $(C_OBJS)
	$(CC) $(LDFLAGS) $^ -o $@
	$(OC) -S -O binary $@ $(TARGET).bin
	@$(SZ) $@

clean:
	rm -rf $(TARGET).elf $(TARGET).bin $(AS_OBJS) $(C_OBJS)

ocd:
	$(OCD) -f $(OCD_CFG_DIR)/$(OCD_CFG)

gdb:
	$(DB) -q $(TARGET).elf -ex "target remote :$(GDB_PORT)"
