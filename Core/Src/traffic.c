/**
 ******************************************************************************
 @brief The main code for the Traffic program
 @file traffic.c
 @author Malte Berg, Isabella LoPiano
 @version 1.0
 @date 25-November-2025
 @brief Functions and structures for program Traffic
 ******************************************************************************
 */
#include "Traffic.h"
#include "traffic_functions.h"
#include <stdbool.h>
#include <stdint.h>



//static states State, NextState;

//uint32_t current_instruction = 0x0;


//void Traffic(void) {
//    bool PedButtonPressed = false;
//    State = NSG_EWR;
//    NextState = NSG_EWR;
//    uint32_t instruction;
//    bool toGreen = false; // decide whether to go from yellow to red or yellow to green
//    while (1) {
//        State = NextState;
//        switch(State) {
//        case NSG_EWR:
//            instruction = TL4_Green | TL2_Green | PL2_Red;
//            update_instruction(instruction);
//            HAL_Delay(1000);
//            NextState = NSY_EWR;
//            toGreen = false;
//            break;
//        case NSY_EWR:
//            instruction = TL4_Yellow | TL2_Yellow | PL2_Red;
//            update_instruction(instruction);
//            HAL_Delay(orangeDelay);
//            if (toGreen) {
//                NextState = NSG_EWR;
//            } else {
//                NextState = NSR_EWG;
//            }
//            break;
//        case NSR_EWG:
//            instruction = TL4_Red | TL2_Red | PL2_Green;
//            update_instruction(instruction);
//            HAL_Delay(walkingDelay);
//            toGreen = true;
//            NextState = NSY_EWR;
//            break;
//        }
//    }
//}
