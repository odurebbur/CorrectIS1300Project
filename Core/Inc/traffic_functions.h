#ifndef INC_TRAFFIC_FUNCTIONS_H_
#define INC_TRAFFIC_FUNCTIONS_H_

#include <stdint.h>
#include <stdbool.h>
#include "Traffic.h"

void Send_Instruction(uint32_t instruction);
uint32_t update_instruction(uint32_t current_instruction, uint32_t instruction, ledType led);

#endif /* INC_TRAFFIC_FUNCTIONS_H_ */
