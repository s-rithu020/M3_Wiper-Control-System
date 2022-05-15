/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */


/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */
/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
	  /* USER CODE BEGIN 1 */

	  /* USER CODE END 1 */

	  /* MCU Configuration--------------------------------------------------------*/

	  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */
  uint8_t press = 0;
  uint8_t press2 = 0;
  uint8_t value = 0;
  while (1)
  {
	  value = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
	  if(value == 1)
	  {
		  HAL_Delay(500);
		  press++;
		  value = 0;
	  }

	if(press == 1)
	{
		while(value == 1 && press == 1)
					{
						press2++;
						if(press2 == 2000)
						{
							break;
						}
					}
					if(press == 1)
					{
						HAL_GPIO_WritePin(LED_RED_GPIO_Port,GPIO_PIN_14,SET);
					}
	}

	else if(press>1 && press<5)
	  {
		if(press == 2)
		{
		  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, GPIO_PIN_15,SET);
		  HAL_Delay(1000);

		  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, GPIO_PIN_15,RESET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,SET);
		  HAL_Delay(1000);

		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,RESET);
		  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port,GPIO_PIN_13,SET);
		  HAL_Delay(1000);

		  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port,GPIO_PIN_13,RESET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,SET);
		  HAL_Delay(1000);

		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,RESET);
		}

	  else if(press == 3)
	  {
		  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, GPIO_PIN_15,SET);
		  HAL_Delay(250);

		  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, GPIO_PIN_15,RESET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,SET);
		  HAL_Delay(250);

		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,RESET);
		  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port,GPIO_PIN_13,SET);
		  HAL_Delay(250);

		  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port,GPIO_PIN_13,RESET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,SET);
		  HAL_Delay(250);

		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,RESET);
	  }

	  else if(press == 4)
	  {
		  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, GPIO_PIN_15,SET);
		  HAL_Delay(125);

		  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, GPIO_PIN_15,RESET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,SET);
		  HAL_Delay(125);

		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,RESET);
		  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port,GPIO_PIN_13,SET);
		  HAL_Delay(125);

		  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port,GPIO_PIN_13,RESET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,SET);
		  HAL_Delay(125);

		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,RESET);
	  }
	 }

	  else if(press == 5)
	  {
		  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port,GPIO_PIN_13,SET);
		  HAL_Delay(250);

		  HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port,GPIO_PIN_13,RESET);
		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,SET);
		  HAL_Delay(250);

		  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,GPIO_PIN_12,RESET);
		  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, GPIO_PIN_15,SET);
		  HAL_Delay(250);

		  HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, GPIO_PIN_15,RESET);
		  press = 6;
	  }

	  else if(press == 6)
	  {
			while(value == 1 && press == 6)
			{
				press2++;
				if(press2 == 2000)
				{
					break;
				}
			}
			if(press == 6)
			{
				HAL_GPIO_WritePin(LED_RED_GPIO_Port,GPIO_PIN_14,SET);
			}
	  }

	  else if(press == 7)
	  {
			while(value == 1 && press == 7)
			{
				press2++;
				if(press2 == 2000)
				{
					break;
				}
			}
			if(press == 7)
			{
				HAL_GPIO_WritePin(LED_RED_GPIO_Port,GPIO_PIN_14,RESET);
				press = 0;
			}
	  }
  }
}


/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }


  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
}


/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |Audio_RST_Pin, GPIO_PIN_RESET);


  /*Configure GPIO pin : BUTTON_Pin */
  GPIO_InitStruct.Pin = BUTTON_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(BUTTON_GPIO_Port, &GPIO_InitStruct);


  /*Configure GPIO pins : GPIO_PIN_12 GPIO_PIN_13 GPIO_PIN_14 GPIO_PIN_15
                           Audio_RST_Pin */
  GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |Audio_RST_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);


}
void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
