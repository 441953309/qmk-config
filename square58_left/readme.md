# Square58

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```

v1 (PicoMini)
`qmk flash -kb qoo/square58_left/v1/picomini -km game`
