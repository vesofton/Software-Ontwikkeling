//--------------------------------------------------------------
// File     : test_line.cpp
// Datum    : 03.06.2019
// Version  : 1.0
// Autor    : Henrico Brom
// CPU      : STM32F4
// IDE      : Atollic Truestudio stm32 9.3
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : Test the draw line functions
//--------------------------------------------------------------

#include "gtest/gtest.h"

#include "stm32_ub_vga_screen.c"
#include "draw_line.c"

TEST (Line, draw)
{
	int error = 0;

	// Test draw_line function
	error = draw_line(0, 0, 0, 0, 0, 0, 0);
	EXPECT_EQ(0, error);

	// Test position arguments
	error = draw_line(100, 100, 200, 200, 0, 0, 0);
	EXPECT_EQ(0, error);

	// Test size arguments
	error = draw_line(500, 500, 1500, 1500, 0, 0, 0);
	EXPECT_EQ(0, error);

	// Test extra arguments
	error = draw_line(100, 100, 200, 200, 1, 1, 1);
	EXPECT_EQ(0, error);

	// Test extra arguments max values
	error = draw_line(100, 100, 200, 200, 255, 10, 0);
	EXPECT_EQ(0, error);
}


TEST (Line, error)
{
	int error = 0;

	// Test color argument
	error = draw_line(0, 0, 0, 0, 256, 0, 0);
	EXPECT_NE(0, error);

	// Test weight argument
	error = draw_line(0, 0, 0, 0, 0, 11, 0);
	EXPECT_NE(0, error);
}
