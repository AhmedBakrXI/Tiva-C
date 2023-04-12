/*
 *
 *@ Author: Ahmed Bakr
 *  Date: 12/4/2023
 *	7 seconds counter (lecture bonus)
 *
 */
 
#include "SysTick.h"

/* Function: SysTick timer initialization
 * Parameters : void
 * Return type: void
 */
/******************************************/
void SysTick_Init(void){
	NVIC_ST_CTRL_R = 0;
	NVIC_ST_RELOAD_R = 800000-1;
	NVIC_ST_CURRENT_R = 0;
	NVIC_ST_CTRL_R = 5;
}

/******************************************/
/* Function: Delays 0.01 second
 * Parameters : void
 * Return type: void
 */
void Systick_Delay(void){
	while((NVIC_ST_CTRL_R&0x10000)==0){}
}

/******************************************/
/* Function: Delays one second
 * Parameters : void
 * Return type: void
 */
void DelaySeconds(int count){
	int i ;
	for( i = 0; i<(count*100); i++){
		Systick_Delay();
	}
}

