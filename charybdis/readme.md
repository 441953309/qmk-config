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

| Shield Version | default                                                         | via                                                         |
| -------------- | --------------------------------------------------------------- | ----------------------------------------------------------- |
| v2             | `qmk compile -kb qoo/charybdis/3x5/v2/rp2040 -km default` | `qmk compile -kb qoo/charybdis/3x5/v2/rp2040 -km via` |

## Customizing the firmware

### Dynamic DPI scaling

The pointer's DPI can be changed at runtime.

By default, the DPI is set to `400`. The Charybdis supports up to 16 different DPI values. By default, it cycles between `400` and `3400`, with a step of `200` (_ie._ `400`, `600`, `800`, …, `3400`).

Calling `charybdis_cycle_pointer_default_dpi(bool forward)` will cycle forward or backward the possible values.

Use `charybdis_cycle_pointer_default_dpi_noeeprom(bool forward)` to change the DPI value without persisting the change to EEPROM (_ie._ resetting the board will revert to the last saved value).

`charybdis_get_pointer_default_dpi()` returns the current DPI value.

This behavior can be further customized with the following defines:

```c
#define CHARYBDIS_MINIMUM_DEFAULT_DPI 400
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 200
```

### Drag-scroll

Drag-scroll enables scrolling with the trackball. When drag-scroll is enabled, the trackball's `x` and `y` movements are converted into `h` (horizontal) and `v` (vertical) movement, effectively sending scroll instructions to the host system.

Call `charybdis_set_pointer_dragscroll_enabled(bool enable)` to enable/disable drag-scroll.

`charybdis_get_pointer_dragscroll_enabled()` returns whether drag-scroll mode is currently enabled.

To invert the horizontal scrolling direction, define `CHARYBDIS_DRAGSCROLL_REVERSE_X`:

```c
#define CHARYBDIS_DRAGSCROLL_REVERSE_X
```

To invert the vertical scrolling direction (_ie._ mimic macOS "natural" scroll direction), define `CHARYBDIS_DRAGSCROLL_REVERSE_Y`:

```c
#define CHARYBDIS_DRAGSCROLL_REVERSE_Y
```

This only affects the vertical scroll direction.

### Sniping mode

Sniping mode slows down the pointer for more precise gestures. It is useful when combined with a higher default DPI.

Call `charybdis_set_pointer_sniping_enabled(bool enable)` to enable/disable sniping mode.

`charybdis_get_pointer_sniping_enabled()` returns whether sniping mode is currently enabled.

Like the default pointer's DPI, the sniper mode DPI can be changed at runtime.

By default, sniping mode lowers the DPI to `200`. This can be changed at runtime: the Charybdis supports up to 4 different DPI values for sniping mode. By default, it cycles between `200`, `300`, `400` and `500`.

Calling `charybdis_cycle_pointer_sniping_dpi(bool forward)` will cycle forward or backward the possible values.

Use `charybdis_cycle_pointer_sniping_dpi_noeeprom(bool forward)` to change the sniping mode DPI value without persisting the change to EEPROM (_ie._ resetting the board will revert to the last saved value).

`charybdis_get_pointer_sniping_dpi()` returns the current sniping mode DPI value.

This behavior can be further customized with the following defines:

```c
#define CHARYBDIS_MINIMUM_SNIPING_DPI 200
#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 100
```

### Custom keycodes

The Charybdis firmware defines a number of keycodes to leverage its features, namely:

```
#ifndef NO_CHARYBDIS_KEYCODES
enum charybdis_keycodes {
  POINTER_DEFAULT_DPI_FORWARD = QK_KB_0,
  POINTER_DEFAULT_DPI_REVERSE,
  POINTER_SNIPING_DPI_FORWARD,
  POINTER_SNIPING_DPI_REVERSE,
  SNIPING_MODE,
  SNIPING_MODE_TOGGLE,
  DRAGSCROLL_MODE,
  DRAGSCROLL_MODE_TOGGLE,
};

#define DPI_MOD POINTER_DEFAULT_DPI_FORWARD
#define DPI_RMOD POINTER_DEFAULT_DPI_REVERSE
#define S_D_MOD POINTER_SNIPING_DPI_FORWARD
#define S_D_RMOD POINTER_SNIPING_DPI_REVERSE
#define SNIPING SNIPING_MODE
#define SNP_TOG SNIPING_MODE_TOGGLE
#define DRGSCRL DRAGSCROLL_MODE
#define DRG_TOG DRAGSCROLL_MODE_TOGGLE
#endif // !NO_CHARYBDIS_KEYCODES
```

To disable the custom keycodes, and reduce binary size, simply add a definition in `config.h`:

```c
#define NO_CHARYBDIS_KEYCODES
```

### Configuration Syncing

If you want/need to enable syncing of the charybdis config, such as to read the sniping or drag scroll modes on the other half (such as for displaying the status via rgb matrix, or added on screens, or what not), you can enabled this. To do so, add this to your `config.h`:

```c
#define CHARYBDIS_CONFIG_SYNC
```

Note that you will need to reflash both sides when enabling this.

### Enable Large Mouse Reports

By default, the X and Y motion for the pointing device/mouse reports is -127 to 127. You can definitely hit the limit for that with the sensors. You can enable support for -32767 to 32767 by adding this to your `config.h`:

```c
#define MOUSE_EXTENDED_REPORT
```

Note that you will need to reflash both sides when enabling this.