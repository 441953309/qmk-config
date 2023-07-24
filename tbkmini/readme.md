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