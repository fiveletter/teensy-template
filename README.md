Teensy Project Template (Slighty modified version of Teensy 3.X Project Template)
===========================

Purpose
-------

An all purpose Teensy project template to develop outside of the Arduino IDE.


Using
-----

1. Put your code in `src/main.cpp`
2. Put any libraries you need in `libraries`
3. Set the TEENSY variable in `Makefile` according to your teensy version
4. Build your code ```make```
5. Upload your code ```make upload```


Directory Structure
-------------------

src/
|_ main.cpp
|_ module_dir/
    |_ module_header.hpp
    |_ src/
        |_ module_header.cpp
|_ module_dir_2/
    |_ module_header_2.hpp
    |_ src/
        |_ module_header_2.cpp


Make Targets
------------

- `make` alias for `make hex`
- `make build` compiles everything and produces a .elf
- `make hex` converts the elf to an intel hex file
- `make post_compile` opens the launcher with the correct file
- `make upload` uploads the hex file to a teensy board
- `make reboot` reboots the teensy
- `make sniff` communicates on serial /dev/cu.usbmodem2905331


Where everything came from
--------------------------

- The `teensy3` sub-folder is taken from [The Teensy 3 Cores](https://github.com/PaulStoffregen/cores/tree/master/teensy3)
- The `tools` sub-folder is taken from [Teensyduino](http://www.pjrc.com/teensy/td_download.html)
- The `src/main.cpp` file is moved, unmodified from `teensy3/main.cpp`
- The `Makefile` file is moved, modified from `teensy3/Makefile`
- The `49-teensy.rules` file is taken from [PJRC's udev rules](http://www.pjrc.com/teensy/49-teensy.rules)

Modifications to `Makefile` include
- Add support for arduino libraries
- Change tools directory
- Calculate target name from current directory
- Prettify rule output
- Do not upload by default, only build
- Added support for multi-directory level organization