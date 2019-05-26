# Edge: Embedded Electronics 

> A curated list of resources for building Embedded Electronics

Electronic engineering (EE) is the practice of understanding, designing and building electronic circuits. 



## Contents

<!-- toc -->

- [ Awesome Electronics ](https://github.com/kitspace/awesome-electronics)
- [Learning](#learning)
   * [Power Calculations](#power-calculations)
   * [Technical Tutorials](#technical-tutorials)

<!-- tocstop -->

## Learning

### Power Calculations

Guide on power budget calculation for your embedded IoT protoype (Arduino + all the electronics connected to it.)

 * [Arduino MKR FOX 1200](https://store.arduino.cc/arduino-mkrfox1200)
 * [Arduino Uno Rev3](https://store.arduino.cc/arduino-uno-rev3)
 

   - Pins & Operating Voltage

Arduino Uno has an operating voltage of 5V, It's recommended input voltage is between 7-12V and the limit is at 20V. It has 14 (of which 6 provide PWM output) digital I/O Pins.	

   - Current

Arduino Uno has a 20 mA DC Current per I/O Pin and 50 mA DC Current for 3.3V Pin. If you have 5 LEDs at 20mA each I/O Pin then that is 100mA making a total of ( 100 + 50 = 150 ) mA.
 
 To calculate how long your battery last, you need to consider its capacity. For a 5000mA/h battery this will last (very approximately)

5000 / 150 = 33.33 hours or 1.388 days

    - Using a multimeter 
 
If you have a multimeter with a mA selection you could also measure the current draw and get a good idea of how much you are using as well. You will need to be able to insert your probes in series with the power source and the 'Vin' pin if using the regular or VCC/+5V pin if you are running off batteries directly (say from 3 AAs for example).

You are bypassing the reverse protection diode this way, so make sure you have ground connected to ground, or ground to battery-.

You can measure between the 5.5V and ground if you are measuring voltage using the DV Volts setting on your meter.
If you want to measure current, to need to insert your meter between the 5V source and the 5V connection of your circuit so you can see  how much current is going into your circuit, you would do that with the mA setting on your meter.


### Technical Tutorials
- [Beginning Eembedded Eelectronics](https://www.sparkfun.com/tutorials/category/1) - A wide variety of technical tutorials on various EE related skills.

## Other Lists
- [PwnKitteh/InsanelyCheapElectronics](https://github.com/PwnKitteh/InsanelyCheapElectronics) - A list of cheap electronics from China, that you can use in your projects
