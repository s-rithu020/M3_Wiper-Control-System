# Wiper Control System

## Introduction

### Description:
The Wiper Control System is an automated system present in an automotive vehicle, such as a car, which keeps the windshield of the vehicle clear from rain water, dust, snow and road spray. The Wiper Control System controls the windshield wipers of the vehicle. Previous vehicle designs had wipers that had to be operated manually by moving a lever inside a car. Nowadays, almost all vehicles utilize an electric motor and are activated and controlled by a knob beside the steering wheel. The wiper blade speed can be adjusted by the driver. The automotive wipers are controlled by a microcontroller. In this project, we attempt to simulate the working of a Wiper Control System using the ARM STM32 microcontroller.


### Objective
* When the pushbutton is long-pressed for two seconds, the car will start and the Red LED on the microcontroller will turn ON and stays in that state.
* When the pushbutton is pressed next, the Blue, Green and Orange LEDs turn on, one at a time, at slow speed.
* When the pushbutton is pressed for the second time, the speed of the three LEDs increases to medium speed.
* When the pushbutton is pressed for the third time, the speed of the three LEDs increases to fast speed.
* At the fourth press of the pushbutton, all three LEDs turn off.
* To turn off the car, the pushbutton is pressed again, which turns off the Red LED.


## Continuous Integration and Code Quality
| Build on Linux | Build on Windows | Code Quality | Codacy | Codiga |
| --- | --- | --- | --- | --- |
| [![Linux CI](https://github.com/s-rithu020/M3_Wiper-Control-System/actions/workflows/linux-CI.yml/badge.svg)](https://github.com/s-rithu020/M3_Wiper-Control-System/actions/workflows/linux-CI.yml) | [![Windows CI](https://github.com/s-rithu020/M3_Wiper-Control-System/actions/workflows/windows.yml/badge.svg)](https://github.com/s-rithu020/M3_Wiper-Control-System/actions/workflows/windows.yml) | [![Code Quality - Static Code - Cppcheck](https://github.com/s-rithu020/M3_Wiper-Control-System/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/s-rithu020/M3_Wiper-Control-System/actions/workflows/cppcheck.yml) | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/2bd7a015f0964808aa8cb887c5d294f1)](https://www.codacy.com/gh/s-rithu020/M3_Wiper-Control-System/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=s-rithu020/M3_Wiper-Control-System&amp;utm_campaign=Badge_Grade) | ![Code Quality Score](https://api.codiga.io/project/33534/score/svg) ![Code Grade](https://api.codiga.io/project/33534/status/svg)  |


## Folder Structure
Folders                | Description
----------------------| -----------------------------------------
`0_Abstract`          | Brief about the project and title
`1_Requirements`      | Documents detailing requirements and research
`2_Design`            | Documents specifying design details
`3_Implementation`    | All code and documentation
`4_TestCases`         | Documents with test plans and procedures
`5_Report`            | Report document
`6_ImagesAndOutput`   | Images related to the project
