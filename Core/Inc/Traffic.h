/*
 * Traffic.h
 *
 *  Created on: Nov 25, 2025
 *      Author: Malte Berg, Isabella LoPiano
 */

#ifndef INC_TRAFFIC_H_
#define INC_TRAFFIC_H_

#include <stdint.h>

typedef enum {
    TL_EW_Red = 0x800080,
    TL_EW_Yellow = 0x400040,
    TL_EW_Green = 0x200020,
    TL_NS_Red = 0x8010,
    TL_NS_Yellow = 0x4008,
    TL_NS_Green = 0x2004,
    PL1_Red = 0x100000,
    PL1_Green = 0x080000,
    PL1_Blue = 0x040000,
    PL2_Red = 0x1000,
    PL2_Green = 0x0800,
    PL2_Blue = 0x0400
} leds;

typedef enum {
    TL,
    PL,
    PLB
} ledType;

typedef enum {
    Event_PL1 = 0x1,
    Event_PL2 = 0x2,
    Event_TL1_Switch = 0x4,
    Event_TL2_Switch = 0x8,
    Event_TL3_Switch = 0x10,
    Event_TL4_Switch = 0x20,
	Event_NS_Safe_Walk = 0x40,
	Event_EW_Safe_Walk = 0x80, 
    Event_PL1_Pressed_Yellow = 0x100, 
    Event_PL2_Pressed_Yellow = 0x200
} groupSetBit;
 
typedef enum {
    NSG_EWR, // North / South green
    NSY_EWR, // North / South yellow
    NSR_EWY, // North / South red
    NSR_EWG // North / South red
} states;

typedef enum {
    // P1 = N/S P2 = E/W
    P1G, // Ped 1 Green, Ped 2 Red
    P2G // Ped 1 Red,Ped 2 Green
} pedStates;

typedef enum {
    yellowDelay = 2000,
    greenDelay = 10000,
    redDelayMax = 1000,
    pedestrianDelay = 7000,
    walkingDelay = 8000,
    toggleFreq = 500
} delays;

void Traffic(void);

//extern uint32_t current_instruction;

#endif /* INC_TRAFFIC_H_ */
