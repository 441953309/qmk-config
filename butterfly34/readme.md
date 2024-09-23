# Butterfly36

## Building the firmware

The template is:

```shell
qmk compile -kb {FOLDER}/{KEYBOARD}/{VERSION}/{SHIELD} -km {KEYMAP}
```

| v1 (PiPico) | `qmk compile -kb qoo/butterfly34/v1/rp2040 -km default`  | `qmk compile -kb qoo/butterfly34/v1/rp2040 -km via`      |
