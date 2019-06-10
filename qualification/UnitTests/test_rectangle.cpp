//--------------------------------------------------------------
// File     : test_line.cpp
// Datum    : 03.06.2019
// Version  : 1.0
// Autor    : Henrico Brom
// CPU      : STM32F4
// IDE      : Atollic Truestudio stm32 9.3
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : Test the draw rectangle functions
//--------------------------------------------------------------

#include "gtest/gtest.h"

#include "draw_rectangle.c"


TEST (Rectangle, draw)
{
	int error = 0;

	// Test draw_rectangle function
	error = draw_rectangle(0, 0, 0, 0, 0, 0, 0, 0);
	EXPECT_EQ(0, error);

	// Test size arguments
	error = draw_rectangle(100, 100, 100, 100, 0, 0, 0, 0);
	EXPECT_EQ(0, error);

	// Test size arguments
	error = draw_rectangle(1000, 1000, 1000, 1000, 0, 0, 0, 0);
	EXPECT_EQ(0, error);

	// Test extra arguments
	error = draw_rectangle(100, 100, 100, 100, 1, 1, 1, 1);
	EXPECT_EQ(0, error);

	// Test extra arguments max values
	error = draw_rectangle(100, 100, 100, 100, 255, 1, 10, 1);
	EXPECT_EQ(0, error);
}


TEST (Rectangle, error)
{
	int error = 0;

	// Test color argument
	error = draw_rectangle(0, 0, 0, 0, 256, 0, 0, 0);
	EXPECT_NE(0, error);

	// Test style argument
	error = draw_rectangle(0, 0, 0, 0, 0, 2, 0, 0);
	EXPECT_NE(0, error);

	// Test reserved argument
	error = draw_rectangle(0, 0, 0, 0, 0, 0, 11, 0);
	EXPECT_NE(0, error);
}
