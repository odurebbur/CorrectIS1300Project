#include "traffic_functions.h"
#include "main.h"
#include "Traffic.h"
#include <stdint.h>
#include "FreeRTOS.h"
#include "oled_functions.h"
#include "ssd1306.h"
#include "ssd1306_fonts.h"

void startBar(uint8_t barIndex, TickType_t duration)
{
    xSemaphoreTake(oledMutex, portMAX_DELAY);
    oledBars[barIndex].startTick = xTaskGetTickCount();
    oledBars[barIndex].durationTick = duration;
    oledBars[barIndex].active = 1;
    xSemaphoreGive(oledMutex);
}

void stopBar(uint8_t barIndex)
{
    xSemaphoreTake(oledMutex, portMAX_DELAY);
    oledBars[barIndex].active = 0;
    oledBars[barIndex].durationTick = 0;
    oledBars[barIndex].startTick = 0;
    xSemaphoreGive(oledMutex);
}

void drawTitles() {
    ssd1306_SetCursor(2, TEXT_Y);
    ssd1306_WriteString("P1", Font_6x8, White);
    ssd1306_SetCursor(18, TEXT_Y);
    ssd1306_WriteString("W1", Font_6x8, White);
    ssd1306_SetCursor(34, TEXT_Y);
    ssd1306_WriteString("P2", Font_6x8, White);
    ssd1306_SetCursor(50, TEXT_Y);
    ssd1306_WriteString("W2", Font_6x8, White);
    ssd1306_SetCursor(66, TEXT_Y);
    ssd1306_WriteString("G1", Font_6x8, White);
    ssd1306_SetCursor(82, TEXT_Y);
    ssd1306_WriteString("R1", Font_6x8, White);
    ssd1306_SetCursor(98, TEXT_Y);
    ssd1306_WriteString("G2", Font_6x8, White);
    ssd1306_SetCursor(114, TEXT_Y);
    ssd1306_WriteString("R2", Font_6x8, White);
}

void drawBarOutlines() {
    uint8_t next_x1 = BAR_X1;
    uint8_t next_x2 = BAR_X2;
    uint8_t next_y1 = BAR_Y1;
    uint8_t next_y2 = BAR_Y2;
    for(int i = 0; i < NUM_BARS; i++) {
        ssd1306_DrawRectangle(next_x1, next_y2, next_x2, next_y1, White);
        next_x1 += BAR_X2 - BAR_X1 + BAR_PADDING;
        next_x2 += BAR_X2 - BAR_X1 + BAR_PADDING;
    }
}

void drawBars(uint8_t *screenArray) {
    ssd1306_Fill(Black);
    drawTitles();
    drawBarOutlines();
    uint8_t next_x1 = BAR_X1;
    uint8_t next_x2 = BAR_X2;
    for(int i = 0; i < NUM_BARS; i++) {
        uint8_t top = screenArray[i];
        uint8_t bottom = BAR_Y1;
        ssd1306_FillRectangle(next_x1, top, next_x2, bottom, White);
        next_x1 += BAR_X2 - BAR_X1 + BAR_PADDING;
        next_x2 += BAR_X2 - BAR_X1 + BAR_PADDING;
    }
    ssd1306_UpdateScreen();
}