/*
 * main.c
 *
 *  Created on: 22 sty 2018
 *      Author: alf64
 */

/*
 * This program tests 8 LEDs on ATB board.
 * Connect them to port C.
 *
 * F_CPU shall be set in Eclipse or manually to 11,0592 MHz.
 * The target shall be set to Atmega32.
 */


#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include "LEDdrv/led.h"


#define LED_INTERVAL_MS 800
int main(void)
{
	LEDS_INIT;
	LEDS_OFF;

	for(;;)
	{
		_delay_ms(LED_INTERVAL_MS);
		LED_ON(LED1_PIN);
		_delay_ms(LED_INTERVAL_MS);
		LED_ON(LED2_PIN);
		_delay_ms(LED_INTERVAL_MS);
		LED_ON(LED3_PIN);
		_delay_ms(LED_INTERVAL_MS);
		LED_ON(LED4_PIN);
		_delay_ms(LED_INTERVAL_MS);
		LED_ON(LED5_PIN);
		_delay_ms(LED_INTERVAL_MS);
		LED_ON(LED6_PIN);
		_delay_ms(LED_INTERVAL_MS);
		LED_ON(LED7_PIN);
		_delay_ms(LED_INTERVAL_MS);
		LED_ON(LED8_PIN);

		_delay_ms(LED_INTERVAL_MS);
		LEDS_OFF;
	}

	return 0;
}
