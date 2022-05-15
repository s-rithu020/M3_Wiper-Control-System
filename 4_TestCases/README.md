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
