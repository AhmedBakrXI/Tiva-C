/*
 *
 *@ Author: Ahmed Bakr
 *  Date: 12/4/2023
 *	7 seconds counter (lecture bonus)
 *
 */
 
 
/******************************************/
 
// include headers

#include "tm.h"
#include "SysTick.h"
/******************************************/
// Entry point

int main(){
	// initializing port F & SysTick Timer
	PortF_Init();
	SysTick_Init();
/******************************************/
	// looping the 7 seconds counter
	while(1){
		RGB(0x02);				// turn Red LED 
		DelaySeconds(1);	// Delay 1 second
		RGB(0x04);				// turn Blue LED 
		DelaySeconds(1);	// Delay 1 second
		RGB(0x08);				// turn Green LED 
		DelaySeconds(1);	// Delay 1 second
		RGB(0x06);				// turn Red & Blue LEDs 
		DelaySeconds(1);	// Delay 1 second
		RGB(0x0A);				// turn Red & Green LEDs 
		DelaySeconds(1);	// Delay 1 second
		RGB(0x0C);				// turn Blue & Green LED 
		DelaySeconds(1);	// Delay 1 second
		RGB(0x0E);				// turn White light 
		DelaySeconds(1);	// Delay 1 second
		}
}

/************** END OF FILE *****************/
