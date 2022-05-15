# Output Video

https://user-images.githubusercontent.com/70939522/168465680-df0564a6-cb67-4556-a6de-fc043fc42670.mp4


### Explanation:

The project is written and built on STM32CubeIDE and is simulated using Qemu. The project is also run on Linux CLI using WSL.

When the pushbutton on the board is first pressed, the Red LED turns on. This signifies that the ignition of the car is in ACC mode. 

The pushbutton is pressed again, which leads to the wiper being turned ON. The wiper blade is assumed as the three other LEDs on the board i.e. Blue, Green and Orange. The Blue LED is the left-most position of the wiper, Green LED is the middle position and the Orange LED is the right-most position. The LEDs switch on and off from left to right and then right to left to simulate the wiper movement. Here, the LEDs function at a slow speed of 1Hz frequency.

Subsequently, the pushbutton is long-pressed to change the wiper speed. Now the LEDs work at a medium speed of 4Hz frequency. 

Another press (long-press) of the pushbutton changes the speed of the wiper to fast. The LEDs turn on and off at the frequency of 8Hz.

At the next press of the pushbutton, the wiper moves back to its original position, meaning the LEDs turn on and off in anti-clockwise. The wiper has stopped at this stage.

To turn off the car, the pushbutton is pressed again. The Red LED turns off to signify this.
