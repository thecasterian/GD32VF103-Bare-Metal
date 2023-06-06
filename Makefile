MAKE := make

all:
	$(MAKE) -C 1.hello_gd32vf103
	$(MAKE) -C 2.compile_with_c
	$(MAKE) -C 3.gpio_basic
	$(MAKE) -C 4.clock_config
	$(MAKE) -C 5.interrupt_basic
