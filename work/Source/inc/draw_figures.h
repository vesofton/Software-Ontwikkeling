//--------------------------------------------------------------
// File     : draw_figures.h
//--------------------------------------------------------------


//--------------------------------------------------------------
// Includes
//--------------------------------------------------------------
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "stm32_ub_vga_screen.h"


//--------------------------------------------------------------
// Prototypes
//--------------------------------------------------------------
int draw_line(int x_1, int y_1, int x_2, int y_2, int color, int wieght, int reserved);
int draw_rectangle(int x, int y, int width, int height, int color, int style, int reserved, int reserved1);
