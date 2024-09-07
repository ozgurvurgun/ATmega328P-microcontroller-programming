
#include <avr/io.h>
#ifndef F_CPU
#define F_CPU 16000000UL //cpu frequency
#endif
#include <util/delay.h>


int main(void)
{
	/*
	*	DDRD --> pinMode
	*	0b11111111 --> 0b PD7 PD6 PD5 PD4 PD3 PD2 PD1 PD0
	*/
	DDRD  = 0b00000001;
	
    while (1) 
    {
		/*
		*	PORTD --> HIGH or LOW
		*	0b11111111 --> 0b PD7 PD6 PD5 PD4 PD3 PD2 PD1 PD0
		*/
		PORTD = 0b00000001;
		_delay_ms(500);
		PORTD = 0b00000000; // or PORTD = 0x00;
		_delay_ms(500);
    }
}

