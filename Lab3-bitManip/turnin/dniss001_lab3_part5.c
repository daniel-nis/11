#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	//DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFE; PORTB = 0x01; // b0 as input, rest output
	//DDRC = 0xFF; PORTC = 0x00;
	//DDRD = 0x00; PORTD = 0xFF;

	
	//unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	//unsigned char tmpC = 0x00;
	unsigned char tmpD = 0x00;

	unsigned short weight = 0x00;

while(1) {
		// 1) Read input
		tmpD = PIND;
		tmpB = PINB & 0x01;


		// 2) Perform computation
		weight = (tmpD << 1) | tmpB;

		if (weight > 70){
		    PORTB = 0x01;
		}
		else if (weight > 5 && weight < 70){
		    PORTB = 0x02;
		}

		// 3) Write output
		//PORTB = PINA >> 4;
		//PORTC = PINA << 4;
	}
	return 0;
}
