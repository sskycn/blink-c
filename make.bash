#!/bin/bash
set -e

make clean

make

st-flash write build/blink.bin 0x8000000