# Butterfly36

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```

v1 (PicoMini)
`qmk compile -kb qoo/microbox34/v1/pipico -km default`

//Handedness by EE_HANDS
qmk flash -kb qoo/microbox34/v1/pipico -km default -bl uf2-split-left
qmk flash -kb qoo/microbox34/v1/pipico -km default -bl uf2-split-right
