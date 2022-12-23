#ifndef  SETUP_H_
#define  SETUP_H_

#include<33EP512MC806.h>

#use DELAY(INTERNAL = 16MHz)

#pin_select U1TX=PIN_D7
#pin_select U1RX=PIN_D8
#use rs232 (UART1, baud=9600, parity=N,STREAM=RS_232_1, stop=1)

#define MAIN_LED_1         PIN_G9
#define MAIN_LED_2         PIN_E4
#define MAIN_LED_3         PIN_E5

#endif   //SETUP
