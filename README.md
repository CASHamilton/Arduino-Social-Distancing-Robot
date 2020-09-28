# Arduino-Social-Distancing-Robot
## Building Instructions
You will need the following parts

1 Arduino (Uno or Mega works best for this project)

1 Piezo (I used a buzzer but feel free to use whichever type of Piezo you want)

1 Red LED

1 Green LED

2 220Ω Resistors

1 HC-SR04 Ultrasonic Distance Sensor

### Once you have gathered these components we are ready to begin!
Navigate to the README Pictures file in the repository. There is a schematic inside for the circuit.
When you stand within 2 Meters (6 Feet) the red LED will turn on and the buzzer will activate.
Here are the connections:

Red LED - Pin 4

Green LED - Pin 3

Trigger - 5

Echo - 6

VCC - 5V

Piezo - 10 (PWM)

You can open the .ino file in the editor then verify and upload the code to your Arduino. 
If you have hooked everything up correctly you should have a fully functioning Social Distancing Robot.

#### Stay safe out there!
