/*
 *
 *@ Author: Ahmed Bakr
 *  Date: 12/4/2023
 *	7 seconds counter (lecture bonus)
 *
 */

#include "tm.h"

void PortF_Init(void){ 
  volatile unsigned long delay;
  SYSCTL_RCGC2_R |= 0x00000020;     // Enable port F clock
  delay = SYSCTL_RCGC2_R;           // Reading register adds a delay   
  GPIO_PORTF_LOCK_R = 0x4C4F434B;   // Unlock PortF PF0  
  GPIO_PORTF_CR_R = 0x1F;           // Allow changes to PF4-0       
  GPIO_PORTF_AMSEL_R = 0x00;        // Disable analog function
  GPIO_PORTF_PCTL_R = 0x00000000;   // GPIO clear bit PCTL  
  GPIO_PORTF_DIR_R = 0x0E;          // PF4,PF0 input, PF3,PF2,PF1 output   
  GPIO_PORTF_AFSEL_R = 0x00;        // No alternate function
  GPIO_PORTF_PUR_R = 0x11;          // Enable pullup resistors on PF4,PF0       
  GPIO_PORTF_DEN_R = 0x1F;          // Enable digital pins PF4-PF0        
}

void RGB(unsigned char colour){
	GPIO_PORTF_DATA_R = colour;				// Set LED colour
}	

