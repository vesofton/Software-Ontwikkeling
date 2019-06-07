//--------------------------------------------------------------
// File     : draw_rectangle.c
// Datum    : 03.06.2019
// Version  : 1.0
// Autor    : Henrico Brom
// CPU      : STM32F4
// IDE      : Atollic Truestudio stm32 9.3
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : Draw a rectangle on the VGA screen
//--------------------------------------------------------------

#include "draw_figures.h"


int draw_rectangle(int x, int y, int width, int height, int color, int style, int reserved, int reserved1)
{
	if ((color > 255) || (style > 1) || (reserved > 10))
		return 1;

	int filled = style;
	int weight = reserved;

	if (filled)
	{
		int xi, xy;
		for (xi = x; xi < width; xi++)
		{
			for (yi = y; yi < height; yi++)
			{
				UB_VGA_SetPixel(xi, yi, color);
			}
		}
	} else
	{
		draw_line(x, y, x + width, y, color, weight, 0);					// Top
		draw_line(x, y, x, y + height, color, weight, 0);					// Left
		draw_line(x, y + height, x + width, y + height, color, weight, 0);	// Bottom
		draw_line(x + width, y, x + width, y + height, color, weight, 0);	// Right
	}

	return 0;
}
