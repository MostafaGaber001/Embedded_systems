/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
#include "GPIO_header.h"
#include "stm32f103xx.h"
#include "Keypad.h"
#include "LCD.h"
int main(void)
{
	RCC_GPIOA_CLK_EN();
	RCC_GPIOB_CLK_EN();
	HAL_LCD_Init(GPIOA, 11,10);
	MCAL_GPIO_PinConfig(GPIOB, 0, GPIO_PIN_INPUT, GPIO_PIN_INPUT_F);
	HAL_LCD_CursorPosition(0x40);
	HAL_LCD_WriteString("Karim");
	HAL_Keypad_Init();
	while(1)
	{
		HAL_Keypad_Get_Char();
	}
}
