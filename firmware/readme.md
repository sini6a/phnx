# PHNX Firmware Files

![KLE](/firmware/assets/keyboard-layout.png)

## Introduction

This directory contains firmware files for the PHNX keyboard, which is compatible with [QMK](https://github.com/qmk/qmk_firmware).

## Getting Started

To get started, follow these steps:

### 1. Clone QMK Firmware Repository

Ensure you have the latest version of QMK firmware on your local computer. Clone the QMK repository using the following command:

```bash
git clone https://github.com/qmk/qmk_firmware
```

### 2. Create PHNX Directory

Create a new directory named `phnx` in the `keyboards` directory in your local QMK:

```bash
mkdir qmk_firmware/keyboards/phnx
```

### 3. Copy Firmware Files

Copy the contents of the `firmware` directory from this repository to the newly created `phnx` directory in your QMK firmware repository:

```bash
cp -r path/to/phnx/firmware qmk_firmware/keyboards/phnx/
```

_Replace `path/to/phnx` with the actual path to the firmware directory in this repository._

## Compilation

Compile the keyboard firmware using the default or via keymap. You can do this using either the `make` command or the QMK client for Linux.

### Using Make

```bash
make phnx:default
```

or using `via` keymap:

```bash
make phnx:via
```

### Using QMK Client

```bash
qmk compile -kb phnx -km default
```

alternatively:

```bash
qmk compile -kb phnx -km via
```

## Flashing the Keyboard

Once the compilation is successful, you can proceed to flash the firmware onto the keyboard.

### Using Make

```bash
make phnx:default:flash
```

alternatively:

```bash
make phnx:via:flash
```

### Using QMK Client

```bash
qmk flash -kb phnx -km default
```

alternatively:

```bash
qmk flash -kb phnx -km via
```

**Note:** Depending on your system configuration, you may need to use `sudo` to flash the keyboard.

## Troubleshooting

If you encounter any issues during the compilation or flashing process, feel free to open an issue in this repository for assistance or check the official QMK repository.

Happy typing!
