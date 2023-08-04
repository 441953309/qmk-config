# TBK Mini

A split, compact ergonomic keyboard.

* Keyboard Maintainer: [Bastard Keyboards](https://github.com/Bastardkb/)
* Hardware Supported: elite-C V4
* Hardware Availability: [Bastardkb.com](https://bastardkb.com/)

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```
| v2 (ProMicro) | `qmk compile -kb qoo/tbkmini/v2/promicro -km default`  | `qmk compile -kb qoo/tbkmini/v2/promicro -km via`      |
| v2 (RP2040)   | `qmk compile -kb qoo/tbkmini/v2/rp2040 -km default`    | `qmk compile -kb qoo/tbkmini/v2/rp2040 -km via`  |


//row1是给4x6用的，tbk-mini从row2开始
// "rows": ["GP29", "GP26", "GP5", "GP4", "GP9"]
// "rows": ["F4", "F7", "C6", "D4", "B5"]


//Handedness by EEPROM
qmk flash -kb qoo/tbkmini/v2/rp2040 -km via -bl uf2-split-left
qmk flash -kb qoo/tbkmini/v2/rp2040 -km via -bl uf2-split-right