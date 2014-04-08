## library path:
See documentation: http://arduino.cc/de/Guide/Libraries#.UzBULcf7QnU

* cd ~/Documents/Arduino/libraries/
* ln -s ~/Documents/Arduino/software/b-robot-rwe17/libraries/OSCmini .
* ln -s ~/Documents/Arduino/software/b-robot-rwe17/libraries/OSCmini .

## upload via command line

$ cd /Users/ralfwehner/Documents/Arduino/software/b-robot-rwe17/B_ROBOT
$ # press reset button
$ /Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avrdude -C /Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/etc/avrdude.conf -patmega32u4 -cavr109 -b57600 -Uflash:w:B_ROBOT/Release/B_ROBOT.hex:a -P/dev/cu.usbmodemfd1231


