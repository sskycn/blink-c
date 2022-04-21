# 闪灯程序

用 vscode 和 makefile 来写 stm32 的闪灯程序。

## 编译工具

https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/downloads

## stlink 刷写工具

https://github.com/stlink-org/stlink

## MCU STM32F407VG

    STM32F407VGTX_FLASH.ld
    startup_stm32f407xx.s
    system_stm32f4xx.c

## 编译

```bash
make
```

## 刷写

```bash
st-flash write build/blink.bin 0x8000000
```