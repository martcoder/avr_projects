// first set fuses if you desire to: avrdude -C avrdude.conf -p t85 -c usbasp -U lfuse:w:0xE2:m
// compile using: avr-gcc -Os -mmcu=attiny85 main.c
// further compile for sending to attiny85 using: avr-objcopy -O ihex -j .text -j .data a.out a.hex

// then send to mcu using: avrdude -C avrdude.conf -p t85 -c usbasp -U flash:w:a.hex:i

//#include <stdio.h>
//#include <stdlib.h>

#define DDRB (*(volatile unsigned char*) 0x37)
#define PORTB (*(volatile unsigned char*) 0x38)



void delay(volatile long time){
	
	while(time > 0){
		time--;
	}
}

int main()
{
    DDRB |= (1 << 1); // sets portb to be an output pin...
    while(1)
    {	
	
		
		/*PORTB |= (1 << 1); // set PB1 to be HIGH
		delay(20000); // wait for human seeability
		
		PORTB &= ~(1 << 1); 
		delay(20000);*/
		
		PORTB ^= (1 << 1); // TOGGLE PORTB at position 1 (where positions start from 0). 
		delay(40000);
    }
}
