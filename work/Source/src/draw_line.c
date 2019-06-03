//--------------------------------------------------------------
// File     : draw_line.c
// Datum    : 03.06.2019
// Version  : 1.0
// Autor    : Henrico Brom
// CPU      : STM32F4
// IDE      : Atollic Truestudio stm32 9.3
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : Draw a line on the VGA screen
//--------------------------------------------------------------

#include "draw_figures.h"

int draw_line(int x1, int y1, int x2, int y2, int color, int weight, int reserverd)
{
	if ((x2 < x1) || (y2 > y1))
		return 1;

	int dx = x2 -x1;
	int dy = y2 - y1;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float xIncrement = dx / (float) steps;
	float yIncrement = dy / (float) steps;

	float x = x1;
	float y = y1;
	for (int i = 0; i < steps; i++)
	{
		for (int xw = 0; xw < weight; xw++)
		{
			for (int yw = 0; yw < weight; yw++)
			{
				UB_VGA_SetPixel(x + xw, y + yw, color);
			}
		}
		x += xIncrement;
		y += yIncrement;
	}

	return 0;
}
