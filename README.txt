Getting this code up and running was possible thanks to this youtube video and series: 
https://www.youtube.com/watch?v=N591sLGYWnM

This uses avrdude through a cmd line, no IDE. 


IMPORTANT NOTE FOR CODING:
There is a strange change needed regarding register addresses:

The DDRB and PORTB memory addresses are different from expected, 
as noted in the afore-mentioned video at 13min 10sec ....
DDRB needs changing from 0x17 to 0x37
PORTB needs changing from 0x18 to 0x38
Once these changes are implemented then everything works fine!!!!

As an aside, in the MicrochipStudio version of such code, DDRB and PORTB are
already defined as 0x17 and 0x18 and work fine as such there..... weird! 
