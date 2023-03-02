TARGET = first_sight
BUILD_DIR = build
DEVICE = gd32vf103cbt6

include ../common/toolchain.mk
include ../common/flag.mk

AS_SRCS = $(DEVICE).S
AS_OBJS = $(addprefix $(BUILD_DIR)/, $(AS_SRCS:.S=.o))

.PHONY: all clean

all: $(BUILD_DIR) $(TARGET).elf

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/%.o: %.S
	$(CC) $(ASFLAGS) -c $< -o $@

$(TARGET).elf: $(AS_OBJS)
	$(CC) $(LDFLAGS) -o $@ $^
	@$(SZ) $@

clean:
	rm -rf $(TARGET).elf $(AS_OBJS)

include ../common/debug.mk
