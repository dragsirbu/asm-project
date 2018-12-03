### Problem statement

Nowadays, most people own a car and a garage, where they keep it. In some of the cases, these garages are relatively small and narrow, making it hard for people to park their car. Moreover, because some cars are rather old, they lack parking censors to aid in the process of parking. To help overcome this problem and keep the cars in good condition, we came with the proposal to create a device that can be attached to the garage walls. Whenever the car gets too close to it, the device creates a strong buzz and a red LED lights up.

### Purpose of the project
The purpose of this assignment is to create a project in AVR assembler using sensors or actuators (our form of interface).The project itself intends to be a beginning of a “smart home” device , more exactly for a “smart garage”.Using the ultrasonic sensor we determine the distance between the back of car and wall. The buzzer emits a sound whenever the safety distance is breached. LCD display will light, along with the buzzer sound whenever the condition is met
### State machine diagram

![SMD](https://i.imgur.com/bHzlnTX.png)

### Test plan

The three main components of the device(Ultrasonic Sensor, Buzzer and LED) will be tested in 3 different cases with different inputs. The safety distance will always be 10cm.

1. Distance to nearest object: 6 cm
  * Distance printed to the monitor: 6 cm
  *	Buzzer State: Active    
  *	LED State : ON
2. Distance to nearest object: 10 cm
  * Distance printed to the monitor: 10 cm
  * Buzzer State: Inactive
  * LED State: OFF
3. Distance to nearest object: 15 cm
  * Distance printed to the monitor: 15 cm
  * Buzzer State: Inactive
  * LED State : OFF


