/******************************************************************************
 *
 * Module: LED
 *
 * File Name: led.c
 *
 * Description: Source file for the LED driver
 *
 * Author: carlos wagdy
 *
 *******************************************************************************/

#include "led.h"
#include"gpio.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

/*
 * Initializes all Leds (red, green, blue) pins direction.
 * and Turn off all the Leds
 */
void LEDS_init(void)
{
	GPIO_setupPinDirection(LED_RED_PORT_ID, LED_RED_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(LED_GRN_PORT_ID, LED_GRN_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(LED_BLU_PORT_ID, LED_BLU_PIN_ID, PIN_OUTPUT);

	GPIO_writePin(LED_RED_PORT_ID, LED_RED_PIN_ID, LED_ON);
	GPIO_writePin(LED_GRN_PORT_ID, LED_GRN_PIN_ID, LED_ON);
	GPIO_writePin(LED_BLU_PORT_ID, LED_BLU_PIN_ID, LED_ON);

#if(CONNECTION_TYPE == POSITIVE_LOGIC)
	GPIO_writePin(LED_RED_PORT_ID, LED_RED_PIN_ID,LOGIC_LOW);
	GPIO_writePin(LED_RED_PORT_ID, LED_GRN_PIN_ID,LOGIC_LOW);
	GPIO_writePin(LED_RED_PORT_ID, LED_BLU_PIN_ID,LOGIC_LOW);


#elif(CONNECTION_TYPE == NEGATIVE_LOGIC)
	GPIO_writePin(LED_RED_PORT_ID, LED_RED_PIN_ID,LOGIC_LOW);
	GPIO_writePin(LED_RED_PORT_ID, LED_GRN_PIN_ID,LOGIC_LOW);
	GPIO_writePin(LED_RED_PORT_ID, LED_BLU_PIN_ID,LOGIC_LOW);

#endif
}

/*
 * Turns on the specified LED.
 */
void LED_on(LED_ID id)
{
#if(CONNECTION_TYPE == POSITIVE_LOGIC)
	GPIO_writePin(LEDS_PORT_ID, id, LOGIC_HIGH);

#elif(CONNECTION_TYPE == NEGATIVE_LOGIC)
	GPIO_writePin(LEDS_PORT_ID, id, LOGIC_LOW);

#endif
}

/*
 * Turns off the specified LED.
 */
void LED_off(LED_ID id)
{
#if(CONNECTION_TYPE == POSITIVE_LOGIC)
	GPIO_writePin(LEDS_PORT_ID, id, LOGIC_LOW);

#elif(CONNECTION_TYPE == NEGATIVE_LOGIC)
	GPIO_writePin(LEDS_PORT_ID, id, LOGIC_HIGH);

#endif
}

