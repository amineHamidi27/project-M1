CC = sdcc
FX2LIB = /home/amine/Desktop/project/max2771_fx2lp/FX2LP/fx2lib

CFLAGS  += -mmcs51
CFLAGS  += -I$(FX2LIB)/include

LDFLAGS += -mmcs51
LDFLAGS += --code-size 0x1c00
LDFLAGS += --xram-size 0x0200
LDFLAGS += --xram-loc 0x1c00
LDFLAGS += -L$(FX2LIB)/lib

# Main source file (example: led_toggle.c)
MAIN ?= led

# Output folder named after source file
BUILD_DIR = $(MAIN)

# Make sure folder exists
$(shell mkdir -p $(BUILD_DIR))

# Default target
all: $(BUILD_DIR)/$(MAIN).ihx

# Compile and link
$(BUILD_DIR)/$(MAIN).ihx: $(MAIN).c
#$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ fx2.lib
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(FX2LIB)/lib/fx2.lib
	@echo "✅ Built firmware: $@"

# Flash to device
flash: $(BUILD_DIR)/$(MAIN).ihx
	# sudo cycfx2prog prg:$< run
	fxload load_ram --ihex-path $< -t FX2LP

flash_eeprom: $(BUILD_DIR)/$(MAIN).ihx
	 fxload load_eeprom --ihex-path $<  -t FX2LP
# Clean up build artifacts
clean:
	rm -rf $(BUILD_DIR)
	@echo "🧹 Cleaned: $(BUILD_DIR)"
