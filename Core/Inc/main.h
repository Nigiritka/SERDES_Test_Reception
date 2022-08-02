/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DATA_IN_2_Pin GPIO_PIN_2
#define DATA_IN_2_GPIO_Port GPIOE
#define DATA_IN_3_Pin GPIO_PIN_3
#define DATA_IN_3_GPIO_Port GPIOE
#define DATA_IN_4_Pin GPIO_PIN_4
#define DATA_IN_4_GPIO_Port GPIOE
#define DATA_IN_5_Pin GPIO_PIN_5
#define DATA_IN_5_GPIO_Port GPIOE
#define DATA_IN_6_Pin GPIO_PIN_6
#define DATA_IN_6_GPIO_Port GPIOE
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define TEST_Pin GPIO_PIN_0
#define TEST_GPIO_Port GPIOG
#define LOCK_L_Pin GPIO_PIN_1
#define LOCK_L_GPIO_Port GPIOG
#define LOCK_L_EXTI_IRQn EXTI1_IRQn
#define DATA_IN_7_Pin GPIO_PIN_7
#define DATA_IN_7_GPIO_Port GPIOE
#define START_TRANSACTION_Pin GPIO_PIN_8
#define START_TRANSACTION_GPIO_Port GPIOE
#define START_TRANSACTION_EXTI_IRQn EXTI9_5_IRQn
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define STLINK_RX_Pin GPIO_PIN_8
#define STLINK_RX_GPIO_Port GPIOD
#define STLINK_TX_Pin GPIO_PIN_9
#define STLINK_TX_GPIO_Port GPIOD
#define USB_OTG_FS_PWR_EN_Pin GPIO_PIN_10
#define USB_OTG_FS_PWR_EN_GPIO_Port GPIOD
#define USB_OTG_FS_OVCR_Pin GPIO_PIN_7
#define USB_OTG_FS_OVCR_GPIO_Port GPIOG
#define USB_OTG_FS_OVCR_EXTI_IRQn EXTI9_5_IRQn
#define DATA_IN_0_Pin GPIO_PIN_0
#define DATA_IN_0_GPIO_Port GPIOE
#define DATA_IN_1_Pin GPIO_PIN_1
#define DATA_IN_1_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
