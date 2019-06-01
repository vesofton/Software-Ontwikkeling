//--------------------------------------------------------------
// File     : main.c
// Datum    : 01.06.2019
// Version  : 1.0
// Autor    : UB
// mods by  : J.F. van der Bent, Henrico Brom
// CPU      : STM32F4
// IDE      : CooCox CoIDE 1.7.x
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : VGA_core DMA LIB 320x240, 8bit color
//--------------------------------------------------------------

#include <math.h>

#include "main.h"
#include "stm32_ub_vga_screen.h"

int main (void)
{
    //  uint32_t n;
    SystemInit(); // System speed to 168MHz

    UB_VGA_Screen_Init(); // Init VGA-Screen
    UB_VGA_FillScreen(VGA_COL_CYAN);
    UB_VGA_SetPixel(10,10,10);

    while(1)
    {
    }
}

