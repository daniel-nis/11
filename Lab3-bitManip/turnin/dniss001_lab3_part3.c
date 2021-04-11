#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	//DDRB = 0x00; PORTB = 0xFF; // port B as input
	DDRC = 0xFF; PORTC = 0x00;
	//DDRD = 0xFF; PORTD = 0x00; // port D as output

	
	unsigned char tmpA = 0x00;
	//unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;
	//unsigned char tmpD = 0x00;

	//unsigned char i = 0x00;
	//unsigned char total = 0x00;
	unsigned char pc6 = 0x00;
	unsigned char pa4 = 0x00;
        unsigned char pa5 = 0x00;
        unsigned char pa6 = 0x00;
        unsigned char pa7 = 0x00;

while(1) {
		// 1) Read input
		tmpA = PINA & 0x0F;
		//tmpB = PINB;
		//tmpC = PINC;
		
		pa4 = PINA & 0x10;
		pa5 = PINA & 0x20;
                pa6 = PINA & 0x40;


		// 2) Perform computation

		pa7 = pa4 | pa5 | pa6;
		if (pa7 != 0x70){
		    pa7 = 0x80;
		}

		if (tmpA == 0x01 || tmpA == 0x02) {
		    tmpC = tmpC & 0x20;
		    pc6 = 0x40;
		}
		else if (tmpA == 0x03 || tmpA == 0x04) {
                    tmpC = tmpC & 0x30;
		    pc6 = 0x40;
                }
		else if (tmpA == 0x05 || tmpA == 0x06){
		    tmpC = tmpC & 0x38;
                    pc6 = 0x00;

		}
		else if (tmpA == 0x07 || tmpA == 0x08 || tmpA == 0x09){
                    tmpC = tmpC & 0x3C;
                    pc6 = 0x00;

                }
		else if (tmpA == 0x0A || tmpA == 0x0B || tmpA == 0x0C){
                    tmpC = tmpC & 0x3E;
                    pc6 = 0x00;

                }
		else if (tmpA == 0x0D || tmpA == 0x0E || tmpA == 0x0F){
                    tmpC = tmpC & 0x3F;
                    pc6 = 0x00;

                }


		// 3) Write output
		PORTC = tmpC | pc6;
		PORTC = PORTC | pa7;	
	}
	return 0;
}
