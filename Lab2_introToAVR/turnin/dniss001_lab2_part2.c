#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRC = 0xFF; PORTC = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	//unsigned char tmpB = 0x00; // Temporary variable to hold the value of B
	unsigned char tmpA = 0x00; // Temp var to hold value of A
	//unsigned char pa3 = 0x00; // garage door sensos (1 = door open)
        //unsigned char pa2 = 0x00; // light sensor (1 = light sensed)
	//unsigned char pa1 = 0x00; // garage door sensos (1 = door open)
	//unsigned char pa0 = 0x00; // light sensor (1 = light sensed)

	unsigned char cnt;
while(1) {
		// 1) Read input
		tmpA = PINA;
		/*pa0 = PINA  & 0x01;
		pa1 = (PINA >> 1) & 0x01;
		pa2 = (PINA >> 2) & 0x01;
		pa3 = (PINA >> 3) & 0x01;*/

		// 2) Perform computation
		if (tmpA == 0x00 ) {
			cnt = 0x04;
		}
		else if (tmpA == 0x01 || tmpA == 0x02 || tmpA == 0x04 || tmpA == 0x08 ) {
                        cnt = 0x03;
                }	
		else if (tmpA == 0x03 || tmpA == 0x05 || tmpA == 0x06 || tmpA == 0x09 || tmpA == 0x0A || tmpA == 0x0C) {
			cnt = 0x02;
		}
		else if (tmpA == 0x07 || tmpA == 0x0B || tmpA == 0x0D || tmpA == 0x0E) {
                	cnt = 0x01;
        	}
		else {
			cnt = 0x00;
		}
		// 3) Write output
		PORTC = cnt;	
	}
	return 0;
}
