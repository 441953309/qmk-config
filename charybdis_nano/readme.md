# Charybdis (3x5 "Nano")

An ergonomic keyboard with integrated trackball.

Engineered to be a full mouse replacement solution with high-quality, custom-developed components.

There are 6x4 and 3x5 "Nano" versions.

- Keyboard Maintainer: [Bastard Keyboards](https://github.com/Bastardkb)
- Hardware Supported: elite-C V4
- Hardware Availability: [Bastard Keyboards](https://bastardkb.com)

## Building the firmware

**You must specify the shield version when compiling/flashing the firmware.**

The template is:

```shell
qmk compile -kb bastardkb/charybdis/{LAYOUT}/{VERSION}/elitec -km {KEYMAP}
```

### Charybdis (3x5)

v2 (rp2040)

```shell
qmk compile -kb qoo/charybdis_nano/v2/rp2040 -km default
```

//Handedness by EE_HANDS
qmk flash -kb qoo/charybdis_nano/v2/rp2040 -km default -bl uf2-split-left
qmk flash -kb qoo/charybdis_nano/v2/rp2040 -km default -bl uf2-split-right
