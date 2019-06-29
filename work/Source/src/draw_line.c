/**
 * @file draw_line.c
 * @date 03-06-2019
 * @author Henrico Brom
 * @version 1.0
 * @cpu STM32F4
 * @ide Atollic Truestudio stm32 9.3
 * @module CMSIS_BOOT, M4_CMSIS_CORE
 * @brief This file contains an example function to draw a line on the VGA screen.
 */

#include "draw_figures.h"
#include "stm32_ub_vga_screen.h"

/**
* This method will be used to draw a line on the VGA screen
* @author Henrico Brom
* @param x1 		First point on x-axis
* @param y1 		First point on y-axis
* @param x2 		Second point on x-axis
* @param y2 		Second point on y-axis
* @param color 		Color of the line (0-255)
* @param weight 	Weight of the line (0-10)
* @param reserved 	Extra options (not implemented)
* @date 12-06-2019
*/
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
