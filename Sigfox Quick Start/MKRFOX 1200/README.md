# Getting Started with MKRFox1200  :satellite::earth_africa:

This repository contains simple examples to get started with Arduino MKRFox1200.

 # Prerequisite
- Activate your device and create an account (if you don't already have one) on the [Sigfox Backend](https://backend.sigfox.com/activate) platform

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

- Others
  - [ Event trigger](https://www.arduino.cc/en/Tutorial/SigFoxEventTrigger)
  
 
