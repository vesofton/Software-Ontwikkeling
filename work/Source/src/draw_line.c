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
#include "stm32_ub_vga_screen.h"


int draw_line(int x1, int y1, int x2, int y2, int color, int weight, int reserved)
{
	if ((color > 255) || (weight > 10))
		return 1;

	int dx= x2 - x1;
	int dy = y2 - y1;

	int right = dx > 0;
	if (!right) dx = -dx;

	int down = dy > 0;
	if (down) dy = -dy;

	int err = dx + dy;
	int x = x1;
	int y = y1;

	for (;;)
	{
		UB_VGA_SetPixel(x, y, color);
		if (x == x2 && y == y2) break;

		int e2 = err << 1;
		if (e2 > dy)
		{
			err += dy;
			if (right) x++;
			else x--;
		}

		if (e2 < dx)
		{
			err += dx;
			if (down) y++;
			else y--;
		}
	}

	return 0;
}
