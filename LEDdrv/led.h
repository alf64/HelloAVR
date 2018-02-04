/*
 * led.h
 *
 *  Created on: 28 sty 2018
 *      Author: alf64
 */

#ifndef LEDDRV_LED_H_
#define LEDDRV_LED_H_

#define LED1_PIN PC7
#define LED2_PIN PC6
#define LED3_PIN PC5
#define LED4_PIN PC4
#define LED5_PIN PC3
#define LED6_PIN PC2
#define LED7_PIN PC1
#define LED8_PIN PC0

#define LEDS_PORT PORTC
#define LEDS_DDR DDRC

// functions
#define LEDS_INIT (LEDS_DDR = 0xFF)
#define LEDS_OFF (LEDS_PORT = 0xFF)
#define LEDS_ON (LEDS_PORT = 0x00)

#define LED_ON(x) (LEDS_PORT &= ~(1<<x))
#define LED_OFF(x) (LEDS_PORT |= (1<<x))


#endif /* LEDDRV_LED_H_ */
