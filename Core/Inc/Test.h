#ifndef INC_TEST_H_
#define INC_TEST_H_

#include "FreeRTOS.h"
#include "event_groups.h"


void Test_program(void);

void Test_Leds(void);

void Test_EventGroup(EventGroupHandle_t eventGroup);

#endif /* INC_TEST_H_ */

