# Urchin ZMK Firmware

Firmware for: [Urchin Keyboard](https://github.com/duckyb/urchin)

## Getting started

**Are you trying to make your own ZMK firmware?**
[Here are the steps you need to take.](./GETTING_STARTED.md)

**Do you want to download my keymap?**

> [!IMPORTANT]
> My firmware is optimized for German keyboard layout and macOS usage.
> Set your operating system to "German" keyboard input for best results.

[Download the firmware zip from the latest action run.](https://github.com/duckyb/zmk-urchin/actions/workflows/build.yml?query=is%3Asuccess+branch%3Amaster)
Check [the ZMK docs](https://zmk.dev/docs/user-setup#installing-the-firmware)
for instructions on how to flash it.

## Keymap Editor

I've added the `info.json` for the [online keymap editor from nickcoutsos](https://nickcoutsos.github.io/keymap-editor/).
It's not perfect, but it works and does it's thing.

## Keymap Layout

This layout is optimized for German programmers working on macOS. It's inspired by [Urchin by duckyb](https://github.com/duckyb/urchin-zmk-firmware).

### Layer 0: Base (QWERTZ)

```
┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
│  Q  │  W  │  E  │  R  │  T  │   │  Y  │  U  │  I  │  O  │  P  │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│  A  │  S  │  D  │  F  │  G  │   │  H  │  J  │  K  │  L  │  #  │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│  Z  │  X  │  C  │  V  │  B  │   │  N  │  M  │  ,  │  .  │  -  │
└─────┴─────┴─────┼─────┼─────┤   ├─────┼─────┼─────┴─────┴─────┘
                  │ EXT │SHIFT│   │SPACE│ SYM │
                  └─────┴─────┘   └─────┴─────┘
```

### Layer 1: Symbols (SYM)

```
┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
│  1  │  2  │  3  │  4  │  5  │   │  6  │  7  │  8  │  9  │  0  │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│  <  │  %  │  (  │  {  │  [  │   │  =  │  ?  │  '  │  +  │  *  │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│  >  │  $  │  )  │  }  │  ]  │   │  @  │  !  │  "  │  -  │  /  │
└─────┴─────┴─────┼─────┼─────┤   ├─────┼─────┼─────┴─────┴─────┘
                  │ FNC │SYM2 │   │     │     │
                  └─────┴─────┘   └─────┴─────┘
```

### Layer 2: Extended/Navigation (EXT)

```
┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
│ ESC │ ⏮  │ ⏯  │ ⏭  │PAUSE│   │PG UP│HOME │  ↑  │ END │CAPS │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│ ALT │ CMD │SHIFT│CTRL │RALT │   │PG DN│  ←  │  ↓  │  →  │ DEL │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│⌘+Z  │⌘+X  │⌘+C  │ TAB │⌘+V  │   │⌥+⌫  │ ⌫  │     │     │     │
└─────┴─────┴─────┼─────┼─────┤   ├─────┼─────┼─────┴─────┴─────┘
                  │     │CTRL │   │ENTER│ FNC │
                  └─────┴─────┘   └─────┴─────┘
```

### Layer 3: Function Keys (FNC)

```
┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
│ F1  │ F2  │ F3  │ F4  │ F5  │   │ F6  │ F7  │ F8  │ F9  │ F10 │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│ ALT │ CMD │SHIFT│CTRL │RALT │   │ F11 │ F12 │PRTSC│     │     │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │   │     │     │     │     │     │
└─────┴─────┴─────┼─────┼─────┤   ├─────┼─────┼─────┴─────┴─────┘
                  │     │     │   │     │     │
                  └─────┴─────┘   └─────┴─────┘
```

### Layer 4: Extended Symbols (SYM2)

```
┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
│     │     │  €  │  ^  │  #  │   │  ´  │  `  │     │     │     │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│  °  │  ~  │  \  │  |  │  &  │   │  _  │  -  │     │     │     │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│     │     │  §  │  µ  │     │   │     │     │     │     │     │
└─────┴─────┴─────┼─────┼─────┤   ├─────┼─────┼─────┴─────┴─────┘
                  │     │     │   │     │     │
                  └─────┴─────┘   └─────┴─────┘
```

### Layer 5: Accents & Umlauts (ACCENT)

```
┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
│     │     │     │     │     │   │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│     │  ß  │  ü  │  ä  │  ö  │   │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │   │     │     │     │     │     │
└─────┴─────┴─────┼─────┼─────┤   ├─────┼─────┼─────┴─────┴─────┘
                  │     │     │   │     │     │
                  └─────┴─────┘   └─────┴─────┘
```

### Layer 6: Settings (SETTINGS)

```
┌─────┬─────┬─────┬─────┬─────┐   ┌─────┬─────┬─────┬─────┬─────┐
│BTLDR│     │     │BTCLR│ BT0 │   │ BT3 │     │UNSTK│     │BTLDR│
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │ BT1 │   │ BT4 │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┤   ├─────┼─────┼─────┼─────┼─────┤
│RESET│     │     │     │ BT2 │   │ BT5 │     │     │     │RESET│
└─────┴─────┴─────┼─────┼─────┤   ├─────┼─────┼─────┴─────┴─────┘
                  │     │     │   │     │     │
                  └─────┴─────┘   └─────┴─────┘
```

## Layer Access

- **SYM**: Sticky layer (tap thumb key)
- **EXT**: Hold while using (left thumb)
- **FNC**: Hold from SYM or EXT layer
- **SYM2**: Combo (left inner + right outer thumbs)
- **ACCENT**: Combo (both right thumbs)
- **SETTINGS**: Combo (both left thumbs)

## Combos

- **Ctrl+Space**: Left index + middle finger (D+F) - Adobe workflow
- **Layer combos**: See layer access above

## Key Features

- **German QWERTZ layout** with proper umlauts (ä, ö, ü, ß)
- **macOS optimized** (Cmd instead of Ctrl for cut/copy/paste)
- **Programming focused** with easy access to brackets, operators
- **34-key layout** suitable for split keyboards
- **Proper German symbols** (€, §, µ, °, etc.)

## Notes

- Requires German keyboard layout in OS settings
- Optimized for macOS (uses Cmd key shortcuts)
- Uses proper German character codes for symbols like & (ampersand)
- Quick-tap behavior optimized to avoid macOS accent conflicts
