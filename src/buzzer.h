/******************************************************************************
 *
 * Module: Buzzer
 *
 * File Name: buzzer.h
 *
 * Description: Header file for the Buzzer driver
 *
 * Author: carlos wagdy
 *
 *******************************************************************************/


#ifndef BUZZER_H_
#define BUZZER_H_

/*******************************************************************************
*                                Definitions                                  *
*******************************************************************************/

#define BUZZER_PORT_ID		(PORTC_ID)
#define BUZZER_PIN_ID		(PIN5_ID)

#define BUZZER_ON			(LOGIC_HIGH)
#define BUZZER_OFF			(LOGIC_LOW)

/*******************************************************************************
*                      Functions Prototypes                                   *
*******************************************************************************/

/*
 * Description :
 * Initialize the Buzzer:
 * 1. Setup the Buzzer pins directions by use the GPIO driver.
 * 2. Turn off the buzzer.
 */
void Buzzer_Init(void);

/*
 * Description :
 * Activates The Buzzer
 */
void Buzzer_ON(void);

/*
 * Description :
 * Deactivates The Buzzer
 */
void Buzzer_OFF(void);


#endif /* BUZZER_H_ */
