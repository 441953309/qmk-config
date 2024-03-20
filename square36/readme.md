# Butterfly36

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```

| v1 (PicoMini) | `qmk compile -kb qoo/square36/v1/picomini -km default`  | `qmk compile -kb qoo/square36/v1/picomini -km via`      |
