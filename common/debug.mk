OCD = riscv-openocd
OCD_DIR = ../openocd
OCD_CFG = ft2232.cfg
GDB_PORT = 3333

.PHONY: ocd gdb

ocd:
	$(OCD) -f $(OCD_DIR)/$(OCD_CFG)

gdb:
	$(DB) -q $(TARGET_ELF) -ex "target remote :$(GDB_PORT)"
