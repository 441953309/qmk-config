# Corne Keyboard (CRKBD)

A split keyboard with 3x6 vertically staggered keys and 3 thumb keys.

* Keyboard Maintainer: [Bastard Keyboards](https://github.com/Bastardkb/)
* Hardware Supported: elite-C V4
* Hardware Availability: [Bastardkb.com](https://bastardkb.com/)

* Keyboard Maintainer: [foostan](https://github.com/foostan/)
* Hardware Supported: Crkbd PCB, Pro Micro  
* Hardware Availability: [PCB & Case Data](https://github.com/foostan/crkbd)

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```
| v3 (Elite-C)    | `qmk compile -kb qoo/corne/v3/elitec -km default`     | `qmk compile -kb qoo/corne/v3/elitec -km via`      |
| v3 (Helios)     | `qmk compile -kb qoo/tbkmini/v2/helios -km default`   | `qmk compile -kb qoo/tbkmini/v2/helios -km via`  |