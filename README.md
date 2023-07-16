# pet-feeder
A pratical DIY Pet Feeder, suitable for feeding your pet once a day while you are at work

## Circuit Diagram

Although the image shows the servo motor powered by the 5V pin of the arduino nano, the ideal is to use its own 5V source, due to current limitations of the microcontroller.

In my case, I used a 12V source to power the Arduino, pulling in parallel this voltage to a 7805 voltage regulator IC (https://www.sparkfun.com/datasheets/Components/LM7805.pdf), to maintain a stable voltage of 5V for the motor.

Also, even though it is a simple circuit, remember to keep a common GND between the source, the IC, the Servo motor, the RTC, and the Arduino.

<img
  src="https://i.imgur.com/wSGXE20.png"
  width="500" height="500"
  style="display: inline-block; margin: 0 auto; max-width: 500px">

As I needed something practical to feed my dog during lunch for only 1 week, I made a simple interface just to release a single portion, as the other meals I could give normally.

So, I used a PVC pipe and a thin plastic lid, glued on the Servo motor, in order to open and close this lid at a certain time, once a day, as shown in the image below.
<img
  src="https://i.imgur.com/q5mxehA.png"
  width="500" height="500"
  style="display: inline-block; margin: 0 auto; max-width: 500px">
