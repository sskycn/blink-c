# blick-c

a hello world for stm32 with vscode and makefile

## Arm GNU Toolchain

https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/downloads

## stlink

https://github.com/stlink-org/stlink

## Compile

```bash
make
```

## Flash write

```bash
st-flash write build/blink.bin 0x8000000
```