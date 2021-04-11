#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif	

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	unsigned char tmpB = 0x00; // Temporary variable to hold the value of B
	//unsigned char tmpA = 0x00; // Temp var to hold value of A
	unsigned char pa1 = 0x00; // garage door sensos (1 = door open)
	unsigned char pa0 = 0x00; // light sensor (1 = light sensed)
while(1) {
		// 1) Read input
		//tmpA = PINA & 0x01;
		pa0 = PINA & 0x01;
		pa1 = PINA & 0x02;

		// 2) Perform computation
		if (pa0 == 0x01 && pa1 == 0x00 ) {
			tmpB = 0x01;
		} else {
			tmpB = 0x00;
		}	

		// 3) Write output
		PORTB = tmpB;	
	}
	return 0;
}
