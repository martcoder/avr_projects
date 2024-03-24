REM avrdude -C avrdude.conf -p t85 -c usbasp -U lfuse:w:0xE2:m
REM P.S. the above fuse prevents prescaler of 8Mhz to 1Mhz, thereby keeping 8MHz as clock. 
REM ... but 1MHz is fine.... so don't really need to send that fuse line..... right? 
avr-gcc -Os -mmcu=attiny85 main.c

avr-objcopy -O ihex -j .text -j .data a.out a.hex

avrdude -C avrdude.conf -p t85 -c usbasp -U flash:w:a.hex:i