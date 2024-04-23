# Square58

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```

v1 (PicoMini)
`qmk compile -kb qoo/square58/v1/picomini -km default`

//Handedness by EE_HANDS
qmk flash -kb qoo/square58/v1/picomini -km default -bl uf2-split-left
qmk flash -kb qoo/square58/v1/picomini -km default -bl uf2-split-right
