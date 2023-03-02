TARGET = first_sight

include ../common/definition.mk

AS_SRCS = gd32vf103cbt6.S

LDFLAGS += -T gd32vf103cbt6.ld

AS_OBJS = $(addprefix $(BUILD_DIR)/, $(AS_SRCS:.S=.o))

.PHONY: all clean

all: $(BUILD_DIR) $(TARGET).elf

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/%.o: %.S
	$(CC) $(ASFLAGS) -c $< -o $@

$(TARGET).elf: $(AS_OBJS)
	$(CC) $(LDFLAGS) $^ -o $@
	@$(SZ) $@
	$(OC) -S -O binary $@ $(TARGET).bin

clean:
	rm -rf $(TARGET).elf $(TARGET).bin $(AS_OBJS)

include ../common/debug.mk
