# a85al
a85al is an emulator for the Attiny85, Arduino and ESP8266 with support for Linux. a85al was the first emulator to boot Attiny85 sketchs, and now boasts compatibility with most titles for those microcontrollers. With a huge community of developers and users around the world, a85al continues to gain compatibility, performance, and new features to this day.

It is very easy to use. Load the scketch and start the emulator. There are differents buttons in the toolbar to follow your sketch and debugger windows like Disassembler, Registers, Memory, IO Ports and EEPROM. The emulation is partialy complete some features are emulated and they work well, here is the complete list of the emulation status.

Emulation status:

AVR-CORE : 8-bit AVR CPU support (80%) 

Timers: All timers are emulated in both prescalar and count-up mode. 

Interrupts: timer interrupts are emulated.

TTL USB Serial Port is emulated. All ooutputs are printend on terminal window.

EEPROM read/write operations.

PINs change IRQ emulated.

USI port partialy emulated (Two-Wire mode only).

PCF8574, i2c multiplexer,, is partialy emulated.

Xtensa L106 : 32-bits Xtensa ISA (85%)

Timers 0 & 1

SPI Ch0 is emulated (70%)

Interrupts

COMPARE0 is emulated

Timer0 & Tiimer1 are emulated

NMI partialy emulated

Fake WDEV partialy emulated

BIOS is emulated (31%)


more detailsand builds on https://a85emu.xyz
