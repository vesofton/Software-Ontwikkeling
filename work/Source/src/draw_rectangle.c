/**
 * @file draw_rectangle.c
 * @date 03-06-2019
 * @author Henrico Brom
 * @brief This file contains an example function to draw a rectangle on the VGA screen.
 */


#include "draw_figures.h"

/**
* This method will be used to draw a rectangle on the VGA screen
* @author Henrico Brom
* @param x 			Top left corner x-axis
* @param y 			Top left corner y-axis
* @param width 		Width of the rectangle
* @param height 	Height of the rectangle
* @param color 		Color of the line (0-255)
* @param style 		Filled or not (0-1)
* @param reserved 	Extra options (not implemented)
* @param reserved1 	Extra options (not implemented)
* @date 16-06-2019
*/
int draw_rectangle(int x, int y, int width, int height, int color, int style, int reserved, int reserved1)
{
	if ((color > 255) || (style > 1) || (reserved > 10))
		return 1;

	int weight = reserved;

	draw_line(x, y, x + width, y, color, weight, 0);					// Top
	draw_line(x, y, x, y + height, color, weight, 0);					// Left
	draw_line(x, y + height, x + width, y + height, color, weight, 0);	// Bottom
	draw_line(x + width, y, x + width, y + height, color, weight, 0);	// Right

	return 0;
}
