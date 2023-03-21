# Raspberry Pi Pico Base Sandbox

# VSCode Settings
## Template directory
Copy `_vscode` folder to `.vscode`.

## Settings
Set the following in your settings with the correct paths.
```
"cmake.cmakePath": "c:\\Program Files\\Raspberry Pi\\Pico SDK v1.5.0\\cmake\\bin\\cmake.exe",

"cortex-debug.openocdPath": "c:\\Program Files\\Raspberry Pi\\Pico SDK v1.5.0\\openocd\\openocd.exe",

"cortex-debug.gdbPath":"c:\\Program Files\\Raspberry Pi\\Pico SDK v1.5.0\\gcc-arm-none-eabi\\bin\\arm-none-eabi-gdb.exe",

"cortex-debug.armToolchainPath": "c:\\Program Files\\Raspberry Pi\\Pico SDK v1.5.0\\gcc-arm-none-eabi\\bin\\",

"cmake.configureEnvironment": {

"PICO_SDK_PATH": "c:\\Program Files\\Raspberry Pi\\Pico SDK v1.5.0\\pico-sdk\\"

},
```
## Open and Configure
Open the folder. Install the recommended extensions. 
Cmake is automatically configuring the project on open after the extension is installed.
If the Kit is not selected, select Pico ARM GCC (don't use builtin GCC).

