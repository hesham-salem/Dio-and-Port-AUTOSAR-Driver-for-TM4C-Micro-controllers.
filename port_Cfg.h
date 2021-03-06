 /******************************************************************************
 *
 * Module: port
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
/* Pre-compile option for enable port set pin direction API */
#define PORT_SET_PIN_DIRECTION_API            (STD_ON)


/*******************************************************************************
 *                      Pin direction defination                                    *
 *******************************************************************************/
#define PORT_A_PIN_0_direction           (INPUT)
#define PORT_A_PIN_1_direction           (INPUT)
#define PORT_A_PIN_2_direction           (INPUT)
#define PORT_A_PIN_3_direction           (INPUT)
#define PORT_A_PIN_4_direction           (INPUT)
#define PORT_A_PIN_5_direction           (INPUT)
#define PORT_A_PIN_6_direction           (INPUT)
#define PORT_A_PIN_7_direction           (INPUT)

#define PORT_B_PIN_0_direction           (INPUT)
#define PORT_B_PIN_1_direction           (INPUT)
#define PORT_B_PIN_2_direction           (INPUT)
#define PORT_B_PIN_3_direction           (INPUT)
#define PORT_B_PIN_4_direction           (INPUT)
#define PORT_B_PIN_5_direction           (INPUT)
#define PORT_B_PIN_6_direction           (INPUT)
#define PORT_B_PIN_7_direction           (INPUT)

#define PORT_C_PIN_0_direction           (INPUT)
#define PORT_C_PIN_1_direction           (INPUT)
#define PORT_C_PIN_2_direction           (INPUT)
#define PORT_C_PIN_3_direction           (INPUT)
#define PORT_C_PIN_4_direction           (INPUT)
#define PORT_C_PIN_5_direction           (INPUT)
#define PORT_C_PIN_6_direction           (INPUT)
#define PORT_C_PIN_7_direction           (INPUT)

#define PORT_D_PIN_0_direction           (INPUT)
#define PORT_D_PIN_1_direction           (INPUT)
#define PORT_D_PIN_2_direction           (INPUT)
#define PORT_D_PIN_3_direction           (INPUT)
#define PORT_D_PIN_4_direction           (INPUT)
#define PORT_D_PIN_5_direction           (INPUT)
#define PORT_D_PIN_6_direction           (INPUT)
#define PORT_D_PIN_7_direction           (INPUT)

#define PORT_E_PIN_0_direction           (INPUT)
#define PORT_E_PIN_1_direction           (INPUT)
#define PORT_E_PIN_2_direction           (INPUT)
#define PORT_E_PIN_3_direction           (INPUT)
#define PORT_E_PIN_4_direction           (INPUT)
#define PORT_E_PIN_5_direction           (INPUT)

#define PORT_F_PIN_0_direction           (INPUT)
#define PORT_F_PIN_1_direction           (OUTPUT)
#define PORT_F_PIN_2_direction           (INPUT)
#define PORT_F_PIN_3_direction           (INPUT)
#define PORT_F_PIN_4_direction           (INPUT)
 
/*******************************************************************************
 *                      /* pins direction changable defination                                  *
 *******************************************************************************/
#define PORT_A_PIN_0_direction_changable         (STD_OFF)
#define PORT_A_PIN_1_direction_changable         (STD_OFF)
#define PORT_A_PIN_2_direction_changable         (STD_OFF)
#define PORT_A_PIN_3_direction_changable         (STD_OFF)
#define PORT_A_PIN_4_direction_changable         (STD_OFF)
#define PORT_A_PIN_5_direction_changable         (STD_OFF)
#define PORT_A_PIN_6_direction_changable         (STD_OFF)
#define PORT_A_PIN_7_direction_changable         (STD_OFF)

#define PORT_B_PIN_0_direction_changable         (STD_OFF)
#define PORT_B_PIN_1_direction_changable         (STD_OFF)
#define PORT_B_PIN_2_direction_changable         (STD_OFF)
#define PORT_B_PIN_3_direction_changable         (STD_OFF)
#define PORT_B_PIN_4_direction_changable         (STD_OFF)
#define PORT_B_PIN_5_direction_changable         (STD_OFF)
#define PORT_B_PIN_6_direction_changable         (STD_OFF)
#define PORT_B_PIN_7_direction_changable         (STD_OFF)

#define PORT_C_PIN_0_direction_changable         (STD_OFF)
#define PORT_C_PIN_1_direction_changable         (STD_OFF)
#define PORT_C_PIN_2_direction_changable         (STD_OFF)
#define PORT_C_PIN_3_direction_changable         (STD_OFF)
#define PORT_C_PIN_4_direction_changable         (STD_OFF)
#define PORT_C_PIN_5_direction_changable         (STD_OFF)
#define PORT_C_PIN_6_direction_changable         (STD_OFF)
#define PORT_C_PIN_7_direction_changable         (STD_OFF)

#define PORT_D_PIN_0_direction_changable         (STD_OFF)
#define PORT_D_PIN_1_direction_changable         (STD_OFF)
#define PORT_D_PIN_2_direction_changable         (STD_OFF)
#define PORT_D_PIN_3_direction_changable         (STD_OFF)
#define PORT_D_PIN_4_direction_changable         (STD_OFF)
#define PORT_D_PIN_5_direction_changable         (STD_OFF)
#define PORT_D_PIN_6_direction_changable         (STD_OFF)
#define PORT_D_PIN_7_direction_changable         (STD_OFF)

#define PORT_E_PIN_0_direction_changable         (STD_OFF)
#define PORT_E_PIN_1_direction_changable         (STD_OFF)
#define PORT_E_PIN_2_direction_changable         (STD_OFF)
#define PORT_E_PIN_3_direction_changable         (STD_OFF)
#define PORT_E_PIN_4_direction_changable         (STD_OFF)
#define PORT_E_PIN_5_direction_changable         (STD_OFF)

#define PORT_F_PIN_0_direction_changable         (STD_OFF)
#define PORT_F_PIN_1_direction_changable         (STD_OFF)
#define PORT_F_PIN_2_direction_changable         (STD_OFF)
#define PORT_F_PIN_3_direction_changable         (STD_OFF)
#define PORT_F_PIN_4_direction_changable         (STD_OFF)
 
/*******************************************************************************
 *                       pins mode defination                                  *
 *******************************************************************************/
#define PORT_A_PIN_0_mode           (0U)
#define PORT_A_PIN_1_mode           (0U)
#define PORT_A_PIN_2_mode           (0U)
#define PORT_A_PIN_3_mode           (0U)
#define PORT_A_PIN_4_mode           (0U)
#define PORT_A_PIN_5_mode           (0U)
#define PORT_A_PIN_6_mode           (0U)
#define PORT_A_PIN_7_mode           (0U)

#define PORT_B_PIN_0_mode           (0U)
#define PORT_B_PIN_1_mode           (0U)
#define PORT_B_PIN_2_mode           (0U)
#define PORT_B_PIN_3_mode           (0U)
#define PORT_B_PIN_4_mode           (0U)
#define PORT_B_PIN_5_mode           (0U)
#define PORT_B_PIN_6_mode           (0U)
#define PORT_B_PIN_7_mode           (0U)

#define PORT_C_PIN_0_mode           (0U)
#define PORT_C_PIN_1_mode           (0U)
#define PORT_C_PIN_2_mode           (0U)
#define PORT_C_PIN_3_mode           (0U)
#define PORT_C_PIN_4_mode           (0U)
#define PORT_C_PIN_5_mode           (0U)
#define PORT_C_PIN_6_mode           (0U)
#define PORT_C_PIN_7_mode           (0U)

#define PORT_D_PIN_0_mode           (0U)
#define PORT_D_PIN_1_mode           (0U)
#define PORT_D_PIN_2_mode           (0U)
#define PORT_D_PIN_3_mode           (0U)
#define PORT_D_PIN_4_mode           (0U)
#define PORT_D_PIN_5_mode           (0U)
#define PORT_D_PIN_6_mode           (0U)
#define PORT_D_PIN_7_mode           (0U)

#define PORT_E_PIN_0_mode           (0U)
#define PORT_E_PIN_1_mode           (0U)
#define PORT_E_PIN_2_mode           (0U)
#define PORT_E_PIN_3_mode           (0U)
#define PORT_E_PIN_4_mode           (0U)
#define PORT_E_PIN_5_mode           (0U)

#define PORT_F_PIN_0_mode           (0U)
#define PORT_F_PIN_1_mode           (0U)
#define PORT_F_PIN_2_mode           (0U)
#define PORT_F_PIN_3_mode           (0U)
#define PORT_F_PIN_4_mode           (0U)
 
/*******************************************************************************
 *                       pins mode changable defination                                  *
 *******************************************************************************/
#define PORT_A_PIN_0_mode_changable         (STD_OFF)
#define PORT_A_PIN_1_mode_changable         (STD_OFF)
#define PORT_A_PIN_2_mode_changable         (STD_OFF)
#define PORT_A_PIN_3_mode_changable         (STD_OFF)
#define PORT_A_PIN_4_mode_changable         (STD_OFF)
#define PORT_A_PIN_5_mode_changable         (STD_OFF)
#define PORT_A_PIN_6_mode_changable         (STD_OFF)
#define PORT_A_PIN_7_mode_changable         (STD_OFF)

#define PORT_B_PIN_0_mode_changable         (STD_OFF)
#define PORT_B_PIN_1_mode_changable         (STD_OFF)
#define PORT_B_PIN_2_mode_changable         (STD_OFF)
#define PORT_B_PIN_3_mode_changable         (STD_OFF)
#define PORT_B_PIN_4_mode_changable         (STD_OFF)
#define PORT_B_PIN_5_mode_changable         (STD_OFF)
#define PORT_B_PIN_6_mode_changable         (STD_OFF)
#define PORT_B_PIN_7_mode_changable         (STD_OFF)

#define PORT_C_PIN_0_mode_changable         (STD_OFF)
#define PORT_C_PIN_1_mode_changable         (STD_OFF)
#define PORT_C_PIN_2_mode_changable         (STD_OFF)
#define PORT_C_PIN_3_mode_changable         (STD_OFF)
#define PORT_C_PIN_4_mode_changable         (STD_OFF)
#define PORT_C_PIN_5_mode_changable         (STD_OFF)
#define PORT_C_PIN_6_mode_changable         (STD_OFF)
#define PORT_C_PIN_7_mode_changable         (STD_OFF)

#define PORT_D_PIN_0_mode_changable         (STD_OFF)
#define PORT_D_PIN_1_mode_changable         (STD_OFF)
#define PORT_D_PIN_2_mode_changable         (STD_OFF)
#define PORT_D_PIN_3_mode_changable         (STD_OFF)
#define PORT_D_PIN_4_mode_changable         (STD_OFF)
#define PORT_D_PIN_5_mode_changable         (STD_OFF)
#define PORT_D_PIN_6_mode_changable         (STD_OFF)
#define PORT_D_PIN_7_mode_changable         (STD_OFF)

#define PORT_E_PIN_0_mode_changable         (STD_OFF)
#define PORT_E_PIN_1_mode_changable         (STD_OFF)
#define PORT_E_PIN_2_mode_changable         (STD_OFF)
#define PORT_E_PIN_3_mode_changable         (STD_OFF)
#define PORT_E_PIN_4_mode_changable         (STD_OFF)
#define PORT_E_PIN_5_mode_changable         (STD_OFF)

#define PORT_F_PIN_0_mode_changable         (STD_OFF)
#define PORT_F_PIN_1_mode_changable         (STD_OFF)
#define PORT_F_PIN_2_mode_changable         (STD_OFF)
#define PORT_F_PIN_3_mode_changable         (STD_OFF)
#define PORT_F_PIN_4_mode_changable         (STD_OFF)
 /*******************************************************************************
 *                       pins initial level defination                                  *
 *******************************************************************************/
#define PORT_A_PIN_0_initial_level           (LOW)
#define PORT_A_PIN_1_initial_level           (LOW)
#define PORT_A_PIN_2_initial_level           (LOW)
#define PORT_A_PIN_3_initial_level           (LOW)
#define PORT_A_PIN_4_initial_level           (LOW)
#define PORT_A_PIN_5_initial_level           (LOW)
#define PORT_A_PIN_6_initial_level           (LOW)
#define PORT_A_PIN_7_initial_level           (LOW)

#define PORT_B_PIN_0_initial_level           (LOW)
#define PORT_B_PIN_1_initial_level           (LOW)
#define PORT_B_PIN_2_initial_level           (LOW)
#define PORT_B_PIN_3_initial_level           (LOW)
#define PORT_B_PIN_4_initial_level           (LOW)
#define PORT_B_PIN_5_initial_level           (LOW)
#define PORT_B_PIN_6_initial_level           (LOW)
#define PORT_B_PIN_7_initial_level           (LOW)

#define PORT_C_PIN_0_initial_level           (LOW)
#define PORT_C_PIN_1_initial_level           (LOW)
#define PORT_C_PIN_2_initial_level           (LOW)
#define PORT_C_PIN_3_initial_level           (LOW)
#define PORT_C_PIN_4_initial_level           (LOW)
#define PORT_C_PIN_5_initial_level           (LOW)
#define PORT_C_PIN_6_initial_level           (LOW)
#define PORT_C_PIN_7_initial_level           (LOW)

#define PORT_D_PIN_0_initial_level           (LOW)
#define PORT_D_PIN_1_initial_level           (LOW)
#define PORT_D_PIN_2_initial_level           (LOW)
#define PORT_D_PIN_3_initial_level           (LOW)
#define PORT_D_PIN_4_initial_level           (LOW)
#define PORT_D_PIN_5_initial_level           (LOW)
#define PORT_D_PIN_6_initial_level           (LOW)
#define PORT_D_PIN_7_initial_level           (LOW)

#define PORT_E_PIN_0_initial_level           (LOW)
#define PORT_E_PIN_1_initial_level           (LOW)
#define PORT_E_PIN_2_initial_level           (LOW)
#define PORT_E_PIN_3_initial_level           (LOW)
#define PORT_E_PIN_4_initial_level           (LOW)
#define PORT_E_PIN_5_initial_level           (LOW)

#define PORT_F_PIN_0_initial_level           (LOW)
#define PORT_F_PIN_1_initial_level           (LOW)
#define PORT_F_PIN_2_initial_level           (LOW)
#define PORT_F_PIN_3_initial_level           (LOW)
#define PORT_F_PIN_4_initial_level           (LOW)
/*******************************************************************************
 *                      pins analog mode selection defination                                  *
 *******************************************************************************/
#define PORT_A_PIN_0_analog_mode_selection         (STD_OFF)
#define PORT_A_PIN_1_analog_mode_selection         (STD_OFF)
#define PORT_A_PIN_2_analog_mode_selection         (STD_OFF)
#define PORT_A_PIN_3_analog_mode_selection         (STD_OFF)
#define PORT_A_PIN_4_analog_mode_selection         (STD_OFF)
#define PORT_A_PIN_5_analog_mode_selection         (STD_OFF)
#define PORT_A_PIN_6_analog_mode_selection         (STD_OFF)
#define PORT_A_PIN_7_analog_mode_selection         (STD_OFF)

#define PORT_B_PIN_0_analog_mode_selection         (STD_OFF)
#define PORT_B_PIN_1_analog_mode_selection         (STD_OFF)
#define PORT_B_PIN_2_analog_mode_selection         (STD_OFF)
#define PORT_B_PIN_3_analog_mode_selection         (STD_OFF)
#define PORT_B_PIN_4_analog_mode_selection         (STD_OFF)
#define PORT_B_PIN_5_analog_mode_selection         (STD_OFF)
#define PORT_B_PIN_6_analog_mode_selection         (STD_OFF)
#define PORT_B_PIN_7_analog_mode_selection         (STD_OFF)

#define PORT_C_PIN_0_analog_mode_selection         (STD_OFF)
#define PORT_C_PIN_1_analog_mode_selection         (STD_OFF)
#define PORT_C_PIN_2_analog_mode_selection         (STD_OFF)
#define PORT_C_PIN_3_analog_mode_selection         (STD_OFF)
#define PORT_C_PIN_4_analog_mode_selection         (STD_OFF)
#define PORT_C_PIN_5_analog_mode_selection         (STD_OFF)
#define PORT_C_PIN_6_analog_mode_selection         (STD_OFF)
#define PORT_C_PIN_7_analog_mode_selection         (STD_OFF)

#define PORT_D_PIN_0_analog_mode_selection         (STD_OFF)
#define PORT_D_PIN_1_analog_mode_selection         (STD_OFF)
#define PORT_D_PIN_2_analog_mode_selection         (STD_OFF)
#define PORT_D_PIN_3_analog_mode_selection         (STD_OFF)
#define PORT_D_PIN_4_analog_mode_selection         (STD_OFF)
#define PORT_D_PIN_5_analog_mode_selection         (STD_OFF)
#define PORT_D_PIN_6_analog_mode_selection         (STD_OFF)
#define PORT_D_PIN_7_analog_mode_selection         (STD_OFF)

#define PORT_E_PIN_0_analog_mode_selection         (STD_OFF)
#define PORT_E_PIN_1_analog_mode_selection         (STD_OFF)
#define PORT_E_PIN_2_analog_mode_selection         (STD_OFF)
#define PORT_E_PIN_3_analog_mode_selection         (STD_OFF)
#define PORT_E_PIN_4_analog_mode_selection         (STD_OFF)
#define PORT_E_PIN_5_analog_mode_selection         (STD_OFF)

#define PORT_F_PIN_0_analog_mode_selection         (STD_OFF)
#define PORT_F_PIN_1_analog_mode_selection         (STD_OFF)
#define PORT_F_PIN_2_analog_mode_selection         (STD_OFF)
#define PORT_F_PIN_3_analog_mode_selection         (STD_OFF)
#define PORT_F_PIN_4_analog_mode_selection         (STD_OFF)
 
/*******************************************************************************
 *                       pins internal resistor defination                                  *
 *******************************************************************************/
/*internal resistor */
#define PORT_A_PIN_0_internal_resistor           (OFF)
#define PORT_A_PIN_1_internal_resistor           (OFF)
#define PORT_A_PIN_2_internal_resistor           (OFF)
#define PORT_A_PIN_3_internal_resistor           (OFF)
#define PORT_A_PIN_4_internal_resistor           (OFF)
#define PORT_A_PIN_5_internal_resistor           (OFF)
#define PORT_A_PIN_6_internal_resistor           (OFF)
#define PORT_A_PIN_7_internal_resistor           (OFF)

#define PORT_B_PIN_0_internal_resistor           (OFF)
#define PORT_B_PIN_1_internal_resistor           (OFF)
#define PORT_B_PIN_2_internal_resistor           (OFF)
#define PORT_B_PIN_3_internal_resistor           (OFF)
#define PORT_B_PIN_4_internal_resistor           (OFF)
#define PORT_B_PIN_5_internal_resistor           (OFF)
#define PORT_B_PIN_6_internal_resistor           (OFF)
#define PORT_B_PIN_7_internal_resistor           (OFF)

#define PORT_C_PIN_0_internal_resistor           (OFF)
#define PORT_C_PIN_1_internal_resistor           (OFF)
#define PORT_C_PIN_2_internal_resistor           (OFF)
#define PORT_C_PIN_3_internal_resistor           (OFF)
#define PORT_C_PIN_4_internal_resistor           (OFF)
#define PORT_C_PIN_5_internal_resistor           (OFF)
#define PORT_C_PIN_6_internal_resistor           (OFF)
#define PORT_C_PIN_7_internal_resistor           (OFF)

#define PORT_D_PIN_0_internal_resistor           (OFF)
#define PORT_D_PIN_1_internal_resistor           (OFF)
#define PORT_D_PIN_2_internal_resistor           (OFF)
#define PORT_D_PIN_3_internal_resistor           (OFF)
#define PORT_D_PIN_4_internal_resistor           (OFF)
#define PORT_D_PIN_5_internal_resistor           (OFF)
#define PORT_D_PIN_6_internal_resistor           (OFF)
#define PORT_D_PIN_7_internal_resistor           (OFF)

#define PORT_E_PIN_0_internal_resistor           (OFF)
#define PORT_E_PIN_1_internal_resistor           (OFF)
#define PORT_E_PIN_2_internal_resistor           (OFF)
#define PORT_E_PIN_3_internal_resistor           (OFF)
#define PORT_E_PIN_4_internal_resistor           (OFF)
#define PORT_E_PIN_5_internal_resistor           (OFF)

#define PORT_F_PIN_0_internal_resistor           (OFF)
#define PORT_F_PIN_1_internal_resistor           (PULL_UP)
#define PORT_F_PIN_2_internal_resistor           (OFF)
#define PORT_F_PIN_3_internal_resistor           (OFF)
#define PORT_F_PIN_4_internal_resistor           (OFF)
 

#endif /* PORT_CFG_H */
