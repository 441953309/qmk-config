# Corne Keyboard (CRKBD)

A split keyboard with 3x6 vertically staggered keys and 3 thumb keys.

* Keyboard Maintainer: [foostan](https://github.com/foostan/)
* Hardware Supported: Crkbd PCB, Pro Micro  
* Hardware Availability: [PCB & Case Data](https://github.com/foostan/crkbd)

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```

| v3 (RP2040)   | `qmk compile -kb qoo/corne_prune/v3/rp2040 -km default -bl uf2-split-left`    |

qmk flash -kb qoo/corne_prune/v3/rp2040 -km default -bl uf2-split-left
qmk flash -kb qoo/corne_prune/v3/rp2040 -km default -bl uf2-split-right
