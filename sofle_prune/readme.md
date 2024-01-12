# Sofle Keyboard

Sofle is 6×4+5 keys column-staggered split keyboard. Based on Lily58, Corne and Helix keyboards.

* Keyboard Maintainer: [Josef Adamcik](https://josef-adamcik.cz) [Twitter:@josefadamcik](https://twitter.com/josefadamcik)
* Hardware Supported: SofleKeyboard PCB, ProMicro
* Hardware Availability: [PCB & Case Data](https://github.com/josefadamcik/SofleKeyboard)

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```

| v2 (RP2040)   | `qmk compile -kb qoo/sofle_prune/v2/rp2040 -km default`    |
