# SPDX-License-Identifier: BSD-2-Clause-Views
#
# Makefile for mqnic kernel module
#

ifneq ($(KERNELRELEASE),)

# Called from kernel build system
include $(src)/Kbuild

else

# Called directly from command line
KDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

.PHONY: all modules clean install help

all: modules

modules:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean

install:
	$(MAKE) -C $(KDIR) M=$(PWD) modules_install
	depmod -a

help:
	@echo "Targets:"
	@echo "  all      - Build the kernel module (default)"
	@echo "  modules  - Build the kernel module"
	@echo "  clean    - Clean build artifacts"
	@echo "  install  - Install the module to system"
	@echo "  help     - Show this help message"
	@echo ""
	@echo "Variables:"
	@echo "  KDIR     - Path to kernel build directory"
	@echo "             Default: /lib/modules/$(shell uname -r)/build"

endif
