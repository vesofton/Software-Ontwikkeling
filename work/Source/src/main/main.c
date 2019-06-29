//--------------------------------------------------------------
// File     : main.c
// Datum    : 01.06.2019
// Version  : 1.0
// Autor    : UB
// mods by  : J.F. van der Bent, Henrico Brom
// CPU      : STM32F4
// IDE      : Atollic Truestudio stm32 9.3
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : VGA_core DMA LIB 320x240, 8bit color
//--------------------------------------------------------------


#include "main.h"

int main (void)
{
    SystemInit(); // System speed to 168MHz

    UB_VGA_Screen_Init(); 				// Init VGA-Screen
    UB_VGA_FillScreen(VGA_COL_CYAN);	// Set screen color to cyan
    UB_VGA_SetPixel(10,10,10);			// Set a pixel on the screen

    draw_line(100, 100, 150, 150, 200, 1, 0);		// (x1, y1, x2, y2, color, weight, <reserved>)
    draw_line(100, 150, 150, 100, 200, 1, 0);		// (x1, y1, x2, y2, color, weight, <reserved>)

    draw_rectangle(100, 100, 50, 50, 5, 0, 1, 0);   // (x, y, width, height, color, style, <weight>, <reserverd1>)

    while(1)
    {
        // Main loop
    }
}

