/*
 * File name: miniproject4.c
 *
 * Created on: Oct 13, 2021
 *
 * Author: Nadeen Magdy
 */


#include "lcd.h"
#include "icu.h"
#include "ultrasonic.h"
#include <avr/io.h>

int main(void)
{
	uint16 distance = 0;

	LCD_init();

	LCD_displayStringRowColumn(0, 1, "Distance=    cm");

	Ultrasonic_init();

	SREG   |= (1<<7);

	while(1)
	{
		distance = Ultrasonic_readDistance();
		LCD_moveCursor(0,11);

		if(distance >= 100)
		{
			LCD_intgerToString(distance);
		}

		else
		{
			LCD_intgerToString(distance);
			LCD_displayCharacter(' ');

		}
	}
}
