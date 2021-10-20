/*
 * File Name: ultrasonic.h
 *
 * Created on: Oct 13, 2021
 *
 * Author: Nadeen Magdy
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

void Ultrasonic_init (void);

void Ultrasonic_Trigger(void);

uint16 Ultrasonic_readDistance(void);

void Ultrasonic_edgeProcessing (void);

#endif /* ULTRASONIC_H_ */
