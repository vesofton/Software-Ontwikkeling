//--------------------------------------------------------------
// File     : main.cpp
// Datum    : 03.06.2019
// Version  : 1.0
// Autor    : Henrico Brom
// CPU      : STM32F4
// IDE      : Atollic Truestudio stm32 9.3
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : Initialize googletest framework and run all tests
//--------------------------------------------------------------

#include <iostream>
using namespace std;

#include "gtest/gtest.h"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
