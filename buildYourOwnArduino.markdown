buildYourOwnArduino

To build your own Arduino on a solderless breadboard or perfboard you need only an Atmel328P microchip, a 16mHz crystal on pins 9 and 10, and two 22pf capatitors connecting those pins to ground.

A new Atmel chip does not contain the Arduino bootloader in order to accept the programs you write on your computer. This page describes the process of burning the bootloader and programming
+ Using an Arduino to burn a bootloader [Arduino - ArduinoToBreadboard] (https://www.arduino.cc/en/Tutorial/ArduinoToBreadboard)

I will summarize the process here. After your new chip is setup you will use your real Arduino as ISP (in circuit serial programmer). First load the ArduinoISP sketch into your real Arduino. Then connect the Arduino to your Atmel chip as shown. Then use the _Burn Bootloader_ tool in the Arduino software.

With the bootloader loaded you will need to use a USB chip to communicate with your computer and load your own programs into your homemade Arduino. You can buy a board with at FTDI chip or you can use the chip on your real Arduino. Follow the instructions on the page. Remember you must remove the chip on your real Arduino to use it as a programmer.

### Powering you homemade Arduino.

+ You can run power and ground from your real Arduino.
+ Use a 5v wall adapter and solder it directly to your perfboard
+ Use the 7805 Voltage regulator, .1uf cap, 22uf cap, and 9volt battery clip with a 9volt battery.

# Links

+ Using an Arduino to burn a bootloader [Arduino - ArduinoToBreadboard] (https://www.arduino.cc/en/Tutorial/ArduinoToBreadboard)
+ [Arduino bootloader-programmed chip (Atmega328P) ID: 123 - $5.95 : Adafruit Industries, Unique & fun DIY electronics and kits] (http://www.adafruit.com/products/123)
+ [Adafruit AVR Sticker for Breadboard Arduino-compatibles - 10 pcs ID: 554 - $2.95 : Adafruit Industries, Unique & fun DIY electronics and kits] (http://www.adafruit.com/products/554)
+ [How to Build an Arduino on a Breadboard - Open Home Automation] (https://www.openhomeautomation.net/arduino-breadboard/)
+ [Perfduino: Build Your Own Arduino Microcontroller! | Revolt Lab] (http://revoltlab.com/projects/perfduino/)
+ [Tutorial - build your own "breadboard Arduino" | Freetronics] (http://www.freetronics.com.au/pages/tutorial-build-your-own-breadboard-arduino#.Vi_Po4TphRC)
+ [How to Make Arduino Board: The Easy Way - DIY Hacking] (http://diyhacking.com/make-arduino-board-and-bootload/)
+ [Shrink Arduino Projects: The best way to shrink your Arduino] (http://diyhacking.com/shrink-arduino-projects/)
[Arduino - Setting up an Arduino on a breadboard] (https://www.arduino.cc/en/Main/Standalone)
[DIY Arduino] (http://www.theparsley.com/arduino/diy/)

# Parts list for perfboard Arduino

+ 10kΩ Resistor
+ 22pF ceramic capacitors (2)
+ ATmega328P microcontroller [ATMEGA328P-PU Atmel | ATMEGA328P-PU-ND | DigiKey] (http://www.digikey.com/scripts/DkSearch/dksus.dll?Detail&itemSeq=182726742&uq=635816429296231452)
+ 16MHz Crystal [9B-16.000MAAJ-B TXC CORPORATION | 887-1019-ND | DigiKey] (http://www.digikey.com/scripts/DkSearch/dksus.dll?Detail&itemSeq=182727373&uq=635816443822645350)
+ 28 Pin Socket [ED281DT On Shore Technology Inc. | ED3050-5-ND | DigiKey] (http://www.digikey.com/scripts/DkSearch/dksus.dll?Detail&itemSeq=182727499&uq=635816443822645350)
+ Perfboard [1609 Adafruit Industries LLC | 1528-1195-ND | DigiKey] (http://www.digikey.com/product-detail/en/1609/1528-1195-ND/5353655)
+ 22uF Aluminum Capacitor [ESK226M016AC3AA Kemet | 399-6604-ND | DigiKey] (https://www.digikey.com/product-detail/en/ESK226M016AC3AA/399-6604-ND/3083019)
+ .1uF Ceramic Cap [S103M47Z5UN63J7R Vishay BC Components | 1255PH-ND | DigiKey] (http://www.digikey.com/scripts/DkSearch/dksus.dll?Detail&itemSeq=182732145&uq=635816455541725739)
+ 7805 Voltage Regulator
+ 9Volt Battery clip

