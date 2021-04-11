#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0x00; PORTB = 0xFF; // port B as input
	DDRC = 0xFF; PORTC = 0x00;
	//DDRD = 0xFF; PORTD = 0x00; // port D as output

	
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	//unsigned char tmpC = 0x00;
	//unsigned char tmpD = 0x00;

	unsigned char i = 0x00;
	unsigned char total = 0x00;
while(1) {
		// 1) Read input
		tmpA = PINA;
		tmpB = PINB;
		//tmpC = PINC;
		
		// 2) Perform computation
		while (i < 8) {
		    if (((tmpA >> i) & 0x01) == 0x01) {
			total = total + 1;
		    }
		    if (((tmpB >> i) & 0x01) == 0x01) {
                        total = total + 1;
                    }
		    i++;
		}	


		// 3) Write output
		PORTC = total;	
	}
	return 0;
}
