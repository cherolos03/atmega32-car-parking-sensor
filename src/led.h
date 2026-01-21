/******************************************************************************
 *
 * Module: LED
 *
 * File Name: led.h
 *
 * Description: Header file for the LED driver
 *
 * Author: carlos wagdy
 *
 *******************************************************************************/

#ifndef LED_H_
#define LED_H_
#include"std_types.h"

/*******************************************************************************
*                                Definitions                                  *
*******************************************************************************/

#define LED_RED_PORT_ID		(PORTC_ID)
#define LED_RED_PIN_ID		(PIN0_ID)

#define LED_GRN_PORT_ID		(PORTC_ID)
#define LED_GRN_PIN_ID		(PIN1_ID)

#define LED_BLU_PORT_ID		(PORTC_ID)
#define LED_BLU_PIN_ID		(PIN2_ID)

#define LEDS_PORT_ID        (PORTC_ID)

#define LED_ON				(LOGIC_HIGH)
#define LED_OFF				(LOGIC_LOW)

typedef enum
{
	LED_RED,	/* 0 */
	LED_GRN,	/* 1 */
	LED_BLU,	/* 2 */
	LED_NUM		/* # of LEDs */
} LED_ID;

/*******************************************************************************
*                      Functions Prototypes                                   *
*******************************************************************************/

/*
 * Initializes all Leds (red, green, blue) pins direction.
 * and Turn off all the Leds
 */
void LEDS_init(void);

/*
 * Turns on the specified LED.
 */
void LED_on(LED_ID id);

/*
 * Turns off the specified LED.
 */
void LED_off(LED_ID id);


#endif /* LED_H_ */
