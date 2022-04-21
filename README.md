# blink-c

a hello world for stm32 with vscode and makefile

## Arm GNU Toolchain

https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/downloads

## stlink

https://github.com/stlink-org/stlink

## MCU STM32F407VG

    STM32F407VGTX_FLASH.ld
    startup_stm32f407xx.s
    system_stm32f4xx.c

## Compile

```bash
make
```

## Flash write

```bash
st-flash write build/blink.bin 0x8000000
```

## Thanks

https://platformio.org/