#pragma once

#if defined(CANABLE2) //for CANable 2.0 board.
#define IO_LED_TX0    A, 15, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_LOW, NOAF
#define IO_LED_RX0    A, 0, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_LOW, NOAF
#else //for Non-standard CANable 2.0 board.
#define IO_LED_TX0    B, 6, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_LOW, NOAF
#define IO_LED_RX0    B, 7, MODE_OUTPUT_PP, NOPULL, SPEED_FREQ_LOW, NOAF
#endif //#ifdef CANABLE2

#define IO_LED_HI     PIN_HI
#define IO_LED_LOW    PIN_LOW

#define IO_HW_INIT()

