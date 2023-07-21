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
| v2 (Elite-C)    | `qmk compile -kb qoo/tbkmini/v2/elitec -km default`      | `qmk compile -kb qoo/tbkmini/v2/elitec -km via`      |
| v2 (Helios)     | `qmk compile -kb qoo/tbkmini/v2/helios -km default`   | `qmk compile -kb qoo/tbkmini/v2/helios -km via`  |