# Wiper Control System

## Introduction
The Wiper Control System is an automated system present in an automotive vehicle, such as a car, which keeps the windshield of the vehicle clear from rain water, dust, snow and road spray. The Wiper Control System controls the windshield wipers of the vehicle. Previous vehicle designs had wipers that had to be operated manually by moving a lever inside a car. Nowadays, almost all vehicles utilize an electric motor and are activated and controlled by a knob beside the steering wheel. The wiper blade speed can be adjusted by the driver. The automotive wipers are controlled by a microcontroller. In this project, we attempt to simulate the working of a Wiper Control System using the ARM STM32 microcontroller.


## Research
### Assumptions:
* The wiper blades are assumed as LEDs.
* The motion of the wiper blades are demonstrated by three LEDs i.e. Blue, Green and Orange LEDs.
* The wiper knob, which controls the speed of the wiper blades, is assumed to be the pushbutton.
* The ignition point is taken as the pushbutton as well.
* The car starts when the key is inserted into the ignition and turned to ACC. This operation is assumed as the press of the pushbutton.
* Subsquent presses of the pushbutton will be used for controlling the speed on the wiper blades.
* The car is considered turned off when the pushbutton is pressed again.

### Objectives:
* When the pushbutton is pressed, the car will start and the Red LED on the microcontroller will turn ON and stays in that state.
* When the pushbutton is pressed next, the Blue, Green and Orange LEDs turn on, one at a time, at slow speed.
* When the pushbutton is pressed for the second time, the speed of the three LEDs increases to medium speed.
* When the pushbutton is pressed for the third time, the speed of the three LEDs increases to fast speed.
* At the fourth press of the pushbutton, the three LEDs light up anti-clockwise and turn off.
* To turn off the car, the pushbutton is pressed again, which turns off the Red LED.

### Features:
* The speed of the wipers can be controlled with the push of a button.
* It has different speeds, such as slow, medium or fast, and can be varied accordingly.
* The wiper always comes back to rest at its original position even when switched off during operation.
* It functions automatically.


## SWOT Analysis
![swot_analysis](https://user-images.githubusercontent.com/70939522/168444678-63f457e0-040f-4ea2-be6f-16d8056aad18.png)


## 4W's and 1'H
### Who:
The system is employed in all automotive vehicles to provide safety and clear visibilty to the passengers of the vehicle.

### What:
A Wiper Control System is an automated system which controls the speed of the windshield wiper blades.

### When:
It is used to automatically clean the windscreen of the vehicle during rain or snow and to prevent the driver from distractions.

### Where:
A Wiper Control System can be used in almost all motor vehicles, including cars, trucks, buses, trains, watercraft and some aircrafts, which are equipped with one or more windshield wipers.

### How:
The speeds of the wiper blades can be controlled using a knob by the steering wheel.


## Detail Requirements
### High Level Requirements:

| ID | Description | Status |
| ---- | ------------------- | ---- |
| HLR01 | Status of the car at ignition ACC | Implemented |
| HLR02 | The wipers should start | Implemented |
| HLR03 | The speed of the wipers can be varied | Implemented |
| HLR04 | The wipers should stop | Implemented |


### Low Level Requirements:

| ID | Description | HLR_ID |
| ---- | -------------- | ----- |
| LR01 | The car should start by pressing the pushbutton  | HLR01 |
| LR02 | The Red LED should turn ON indicating the start of the car  | HLR01 |
| LR03 | The car should turn off by pressing the pushbutton  | HLR01 |
| LR04 | The Red LED should turn OFF indicating the stop of the car  | HLR01 |
| LR05 | When pushbutton is pressed all three LEDs (Blue, Green, Orange) turn ON one at a time | HLR02 |
| LR06 | When the pushbutton is pressed for first time, the speed of LEDs is slow | HLR03 |
| LR07 | When the pushbutton is pressed for second time (long-press), the speed of LEDs is medium | HLR03 |
| LR08 | When the pushbutton is pressed for third time (long-press), the speed of LEDs is fast | HLR03 |
| LR09 | All three LEDs should light up anti-clockwise when the pushbutton is pressed for fourth time | HLR04 |
| LR10 | All three LEDs should turn off when the pushbutton is pressed for fourth time | HLR04 |


# Architecture

### Block diagram
![block_diagram](https://user-images.githubusercontent.com/70939522/168444709-a7700298-cd24-46c6-be2e-fe828fa9bec2.png)


### Flow chart
![flowchart](https://user-images.githubusercontent.com/70939522/168444713-3777d63c-e01f-4832-a1ee-6af23d53f011.png)


# Test Cases

### High Level Test Case
|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| HL01 | Car is started | Press of pushbutton | Ignition at ACC | PASS |
| HL02 | Car is stopped | Press of pushbutton | Ignition is locked | PASS |
| HL03 | Wiper is turned on | Long press of pushbutton | Wiper speed varies | PASS |
| HL03 | Wiper is turned off | Press of pushbutton | Wiper is OFF | PASS |


### Low Level Test Case
|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| LL01 | Car is started | Press of pushbutton | Red LED is ON | PASS |
| LL02 | Car is stopped | Press of pushbutton | Red LED is OFF | PASS |
| LL03 | Slow speed of wiper | First press of pushbutton | All three LEDs are ON at low frequency | PASS |
| LL04 | Medium speed of wiper | Second press of pushbutton | All three LEDs are ON at medium frequency | PASS |
| LL05 | Fast speed of wiper | Third press of pushbutton | All three LEDs are ON at fast frequency | PASS |
| LL04 | Wiper is turned off | Fourth press of pushbutton | All three LEDs are OFF | PASS |



