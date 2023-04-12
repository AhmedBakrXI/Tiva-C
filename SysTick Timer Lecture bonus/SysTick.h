/*
 *
 *@ Author: Ahmed Bakr
 *  Date: 12/4/2023
 *	7 seconds counter (lecture bonus)
 *
 */
 
//*****************************************************************************
//
// NVIC used registers (NVIC)
//
//*****************************************************************************
#define NVIC_ST_CTRL_R          (*((volatile unsigned long *)0xE000E010))
#define NVIC_ST_RELOAD_R        (*((volatile unsigned long *)0xE000E014))
#define NVIC_ST_CURRENT_R       (*((volatile unsigned long *)0xE000E018))

// Prototypes
void SysTick_Init(void);
void Systick_Delay(void);
void DelaySeconds(int count);

