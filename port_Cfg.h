 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - port Driver
 *
 * Author: Hesham Salem
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                (STD_OFF)
/* Pre-compile option for ------------- API */

#define PORT_SET_PIN_DIRECTION_API            (STD_ON)
#define PORT_PINS              (43U)
#define CONFIGURATED_MODES      (10U)



#define PORT_A                  (0U)
#define PORT_A_PIN_0            (0u)
#define PORT_A_PIN_1            (1u)
#define PORT_A_PIN_2            (2u)
#define PORT_A_PIN_3            (3u)
#define PORT_A_PIN_4            (4u)
#define PORT_A_PIN_5            (5u)
#define PORT_A_PIN_6            (6u)
#define PORT_A_PIN_7            (7u)

#define PORT_B                  (1U)
#define PORT_B_PIN_0            (0u)
#define PORT_B_PIN_1            (1u)
#define PORT_B_PIN_2            (2u)
#define PORT_B_PIN_3            (3u)
#define PORT_B_PIN_4            (4u)
#define PORT_B_PIN_5            (5u)
#define PORT_B_PIN_6            (6u)
#define PORT_B_PIN_7            (7u)

#define PORT_C                  (2U)
#define PORT_C_PIN_0            (0u)
#define PORT_C_PIN_1            (1u)
#define PORT_C_PIN_2            (2u)
#define PORT_C_PIN_3            (3u)
#define PORT_C_PIN_4            (4u)
#define PORT_C_PIN_5            (5u)
#define PORT_C_PIN_6            (6u)
#define PORT_C_PIN_7            (7u)

#define PORT_D                  (3U)
#define PORT_D_PIN_0            (0u)
#define PORT_D_PIN_1            (1u)
#define PORT_D_PIN_2            (2u)
#define PORT_D_PIN_3            (3u)
#define PORT_D_PIN_4            (4u)
#define PORT_D_PIN_5            (5u)
#define PORT_D_PIN_6            (6u)
#define PORT_C_PIN_7            (7u)

#define PORT_E                  (4U)
#define PORT_E_PIN_0            (0u)
#define PORT_E_PIN_1            (1u)
#define PORT_E_PIN_2            (2u)
#define PORT_E_PIN_3            (3u)
#define PORT_E_PIN_4            (4u)
#define PORT_E_PIN_5            (5u)

#define PORT_F                  (5U)
#define PORT_F_PIN_0            (0u)
#define PORT_F_PIN_1            (1u)
#define PORT_F_PIN_2            (2u)
#define PORT_F_PIN_3            (3u)
#define PORT_F_PIN_4            (4u)


/* port pins ID */
#define PORT_A_PIN_0            (0u)
#define PORT_A_PIN_1            (1u)
#define PORT_A_PIN_2            (2u)
#define PORT_A_PIN_3            (3u)
#define PORT_A_PIN_4            (4u)
#define PORT_A_PIN_5            (5u)
#define PORT_A_PIN_6            (6u)
#define PORT_A_PIN_7            (7u)

#define PORT_B_PIN_0            (8u)
#define PORT_B_PIN_1            (9u)
#define PORT_B_PIN_2            (10u)
#define PORT_B_PIN_3            (11u)
#define PORT_B_PIN_4            (12u)
#define PORT_B_PIN_5            (13u)
#define PORT_B_PIN_6            (14u)
#define PORT_B_PIN_7            (15u)

#define PORT_C_PIN_0            (16u)
#define PORT_C_PIN_1            (17u)
#define PORT_C_PIN_2            (18u)
#define PORT_C_PIN_3            (19u)
#define PORT_C_PIN_4            (20u)
#define PORT_C_PIN_5            (21u)
#define PORT_C_PIN_6            (22u)
#define PORT_C_PIN_7            (23u)

#define PORT_D_PIN_0            (24u)
#define PORT_D_PIN_1            (25u)
#define PORT_D_PIN_2            (26u)
#define PORT_D_PIN_3            (27u)
#define PORT_D_PIN_4            (28u)
#define PORT_D_PIN_5            (29u)
#define PORT_D_PIN_6            (30u)
#define PORT_C_PIN_7            (31u)

#define PORT_E_PIN_0            (32u)
#define PORT_E_PIN_1            (33u)
#define PORT_E_PIN_2            (34u)
#define PORT_E_PIN_3            (35u)
#define PORT_E_PIN_4            (36u)
#define PORT_E_PIN_5            (37u)

#define PORT_F_PIN_0            (38u)
#define PORT_F_PIN_1            (39u)
#define PORT_F_PIN_2            (40u)
#define PORT_F_PIN_3            (41u)
#define PORT_F_PIN_4            (42u)

/*modes */
#define GPIO_mode 0
#define PORT_A_PIN_0_MODE_U0Rx  1

#endif /* PORT_CFG_H */
