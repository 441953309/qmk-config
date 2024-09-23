# Square58

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```

v1 (rp2040)
`qmk compile -kb qoo/gamebox58/v1/rp2040 -km game`
`qmk flash -kb qoo/gamebox58/v1/rp2040 -km game`

//Handedness by EE_HANDS
qmk flash -kb qoo/square58/v1/picomini -km default -bl uf2-split-left
qmk flash -kb qoo/square58/v1/picomini -km default -bl uf2-split-right
