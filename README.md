# wordclock

Inspired by https://www.thingiverse.com/thing:3804052
Rewritten the Code from https://github.com/robotfreak/WordClock_Rainbow_de
Brass soldering copied from Mohit Bhoite

Scaled the original 3D-prints to ~7,8cm to fit the NeoPixel Matrix. Applied the same procentual resize to the diffusers, but lowered the heigth to 70%, printed with 100% infill.

Works with Arduino Nano, requires RTC DS3231, uses NeoPixel 8x8 RGBLED Matrix to display time

![wordclock front](/master/images/wordclock_front.jpg)
![wordclock back](https://raw.githubusercontent.com/itaddo/wordclock/master/images/wordclock_back.jpg)

RTC SDA -> Arduino A4
RTC SCL -> Arduino A5
Arduiono D5 -> NeoPixel DIN

Download Code, compile, flash to Arduino. If no time is set on the RTC, compiling-time will be set.
