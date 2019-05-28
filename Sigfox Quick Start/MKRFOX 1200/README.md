## :earth_africa: Getting Started with [MKRFox1200](https://www.arduino.cc/en/Main.ArduinoBoardMKRFox1200) 

This repository contains simple examples and curated links to guide on how to get started with Arduino MKRFox1200.

 # Prerequisite
- Activate your device and create an account (if you don't already have one) on the [Sigfox Backend](https://backend.sigfox.com/activate) platform. Liquid Telecom will do this for you.

## Installations

1. Install the [Arduino IDE](https://www.arduino.cc/en/Main/Software)
2. Select the MKRFox1200 board
3. Install the following librairies:

    * Arduino SigFox for MKRFox1200
    * Arduino Low Power


The following sketches are available:

- **Sigfox_Initial_Config:** retrieves ID and PAC information to register the board on https://buy.sigfox.com

- **hello-sigfox:** sends multiple numerical values on Sigfox network

- **sigfox-downlink:** similar to hello world but with downlink message requested by the board. The downlink content is displayed in the Serial Monitor


## Issues

- MKRFOX 1200 losing ports
- Activation of devices
- MKRFOX not transmitting despite coverage in the area

## Links
  - [SigFox library](https://www.arduino.cc/en/Reference/SigFox) - This library allows you to use the ATMEL SigFox transceiver (ATAB8520E) on the Arduino MKRFOX1200 board.
  - [ Getting Started with the Arduino MKRFOX1200](https://www.arduino.cc/en/Guide/MKRFox1200)
  
 
