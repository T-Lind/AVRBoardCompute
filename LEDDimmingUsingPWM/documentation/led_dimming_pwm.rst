Introduction
============

This is the documentation for LED Brightness Control when PWM Duty Cycle value Incremented.

Example Description
===================

- The example demonstrates the basic functionality of the PWM peripheral.
- The output waveform is connected to the on-board LED. 
- The PWM duty cycle value is incremented continuously until it reaches the maximum value and then is reloaded to 0.
- This produces the dimming effect of the LED.


Related documents / Application notes
=====================================

The demo uses:
- AVR128DA28/32/48/64 Advanced Data Sheet
- Getting started with ADC on AVR-DA


Supported evaluation kit
========================

- Software: ATMEL Studio
- Hardware: AVR128DA48 Curiosity Nano 

Interface Settings
==================

- Digital Output Pin:
    - PC6 as LED0 pin

- TCA1:
    - Single-slope PWM Mode
    - Compare channel 2 enabled
    - Input clock 4Mhz

Running the demo
================

1. Select "EXPORT PROJECT" tab and click on "Download Pack" to save the .atzip file.
2. Import .atzip file into Atmel Studio 7, File->Import->Atmel Start Project.
3. Build a new Solution and make sure no compiler errors occur.
4. Press "Save" and "Start without debugging" or use "CTRL+ALT+F5" hotkeys to run the application.

