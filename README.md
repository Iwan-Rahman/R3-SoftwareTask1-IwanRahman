# R3-SoftwareTask1-IwanRahman

## Circuit

### Potentiometer
The potentiometer is a variable resistor. This means that its the only component in the project that is able to give a variable input and thus is used to control everything in the project. The specific number displays on the 7-segment displays occur depending on where the wiper of the potentiometer is situated. Most components will require power(+) and ground(-) for electricity to flow. 

### Arduino Circuit Board
The Arduino Circuit board supplies power and ground to the potentiometer and breadboard(which further connects everything). The analog pins serve as inputs and analog pin 0, A0 is used as the input for the potentiometer. Pins 2-13 can be used as output pins. I used the output pins 2-5 to feed the information coming from the analog pin, A0 to the 1st 7-Segment Decoder. I used pins 8-11 for the 2nd 7-Segment Decoder 

### 7-Segment Decoder
The 7-Segment Decoder only has 4 inputs and 8 outputs. How this would function took me the longest to figure out. The 8 outputs(a-g) connect to their respective inputs in the 7-segement display. Still a bit hazy on what the Latch Enable, Blanking and Lamp Test does/is and which one required a positive or negative connection and/or if this was necassary. I wasn't sure if resistors were needed or not and often times got errors(too much voltage) for the 7-segment decoder depending on its placement. I was able to fix this through trial and error

## Code

### Potentiometer
I used the map function which takes the input range(0-1023) and trimmed it down to an output range(1-10) because there are 10 different digits that is needed to be displayed on the 1st 7-segment display. This would also split the intial range of 1023 into 10 even ratios. For the second display I needed to have a range of 100, because there needs to be about 100 different digits accounted for(from 0 to 99). Now since the 7-segment digit can show numbers from 0-9, only the ones number place needs to be shown. We can get that by making the number equal to the remainder after the range number is divided by 10. This results in numbers from 0-9 being shown for every number of the 1st 7-segment display.

### Arduino Circuit Board
I defined the output pins for the 1st 7-Segment Display, (D0-D3) and the 2nd 7-segment Display (E0-E3).

### 7-Segment Decoder
Since there is only 4 inputs, the input would have to come in a 4 digit binary format that would then be converted to the display number. The function digitalWrite is used to determine the output, "HIGH" equaling to 1 and "Low" equaling to 0.   

## Links and Snapshots
https://www.tinkercad.com/things/2LKZ9qwZ5pH


![Tinkercad Snapshot](https://github.com/Okay-E1/R3-SoftwareTask1-IwanRahman/blob/main/Copy%20of%20R3%20ORIGINAL.png)
