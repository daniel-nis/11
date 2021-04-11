#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00;
	//DDRD = 0xFF; PORTD = 0x00;

	
	//unsigned char tmpA = 0x00;
	//unsigned char tmpB = 0x00;
	//unsigned char tmpC = 0x00;
	//unsigned char tmpD = 0x00;

while(1) {
		// 1) Read input
		//tmpA = PINA;
		//tmpB = PINB;


		// 2) Perform computation


		// 3) Write output
		PORTB = PINA >> 4;
		PORTC = PINA <<	4;
	}
	return 0;
}
