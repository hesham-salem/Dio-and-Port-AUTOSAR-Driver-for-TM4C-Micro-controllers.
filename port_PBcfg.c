 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: Dio_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - port Driver
 *
 * Author: Hesham Salem
 ******************************************************************************/
#include "port_Cfg.h"
#include "port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Dio_PBcfg.c and Dio.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

   
   
/* PB structure used with PORT_Init API */
const Port_pinConfigType port_Configuration = {
  
 PORT_A,PORT_A_PIN_0,PORT_A_PIN_0_analog_mode_selection,PORT_A_PIN_0_mode,\
 PORT_A_PIN_0_mode_changable,PORT_A_PIN_0_direction,PORT_A_PIN_0_direction_changable,\
 PORT_A_PIN_0_internal_resistor,PORT_A_PIN_0_initial_level,\

 PORT_A,PORT_A_PIN_1,PORT_A_PIN_1_analog_mode_selection,PORT_A_PIN_1_mode,\
 PORT_A_PIN_1_mode_changable,PORT_A_PIN_1_direction,PORT_A_PIN_1_direction_changable,\
 PORT_A_PIN_1_internal_resistor,PORT_A_PIN_1_initial_level,\
 
 PORT_A,PORT_A_PIN_2,PORT_A_PIN_2_analog_mode_selection,PORT_A_PIN_2_mode,\
 PORT_A_PIN_2_mode_changable,PORT_A_PIN_2_direction,PORT_A_PIN_2_direction_changable,\
 PORT_A_PIN_2_internal_resistor,PORT_A_PIN_2_initial_level,\
 
 PORT_A,PORT_A_PIN_3,PORT_A_PIN_3_analog_mode_selection,PORT_A_PIN_3_mode,\
 PORT_A_PIN_3_mode_changable,PORT_A_PIN_3_direction,PORT_A_PIN_3_direction_changable,\
 PORT_A_PIN_3_internal_resistor,PORT_A_PIN_3_initial_level,\
 
                                           
PORT_A,PORT_A_PIN_4,PORT_A_PIN_4_analog_mode_selection,PORT_A_PIN_4_mode,\
 PORT_A_PIN_4_mode_changable,PORT_A_PIN_4_direction,PORT_A_PIN_4_direction_changable,\
 PORT_A_PIN_4_internal_resistor,PORT_A_PIN_4_initial_level,\

   
   PORT_A,PORT_A_PIN_5,PORT_A_PIN_5_analog_mode_selection,PORT_A_PIN_5_mode,\
 PORT_A_PIN_5_mode_changable,PORT_A_PIN_5_direction,PORT_A_PIN_5_direction_changable,\
 PORT_A_PIN_5_internal_resistor,PORT_A_PIN_5_initial_level,\

   PORT_A,PORT_A_PIN_6,PORT_A_PIN_6_analog_mode_selection,PORT_A_PIN_6_mode,\
 PORT_A_PIN_6_mode_changable,PORT_A_PIN_6_direction,PORT_A_PIN_6_direction_changable,\
 PORT_A_PIN_6_internal_resistor,PORT_A_PIN_6_initial_level,\

   PORT_A,PORT_A_PIN_7,PORT_A_PIN_7_analog_mode_selection,PORT_A_PIN_7_mode,\
 PORT_A_PIN_7_mode_changable,PORT_A_PIN_7_direction,PORT_A_PIN_7_direction_changable,\
 PORT_A_PIN_7_internal_resistor,PORT_A_PIN_7_initial_level,\

   
   /*port B*/
   PORT_B,PORT_B_PIN_0,PORT_B_PIN_0_analog_mode_selection,PORT_B_PIN_0_mode,\
 PORT_B_PIN_0_mode_changable,PORT_B_PIN_0_direction,PORT_B_PIN_0_direction_changable,\
 PORT_B_PIN_0_internal_resistor,PORT_B_PIN_0_initial_level,\

 PORT_B,PORT_B_PIN_1,PORT_B_PIN_1_analog_mode_selection,PORT_B_PIN_1_mode,\
 PORT_B_PIN_1_mode_changable,PORT_B_PIN_1_direction,PORT_B_PIN_1_direction_changable,\
 PORT_B_PIN_1_internal_resistor,PORT_B_PIN_1_initial_level,\
 
 PORT_B,PORT_B_PIN_2,PORT_B_PIN_2_analog_mode_selection,PORT_B_PIN_2_mode,\
 PORT_B_PIN_2_mode_changable,PORT_B_PIN_2_direction,PORT_B_PIN_2_direction_changable,\
 PORT_B_PIN_2_internal_resistor,PORT_B_PIN_2_initial_level,\
 
 PORT_B,PORT_B_PIN_3,PORT_B_PIN_3_analog_mode_selection,PORT_B_PIN_3_mode,\
 PORT_B_PIN_3_mode_changable,PORT_B_PIN_3_direction,PORT_B_PIN_3_direction_changable,\
 PORT_B_PIN_3_internal_resistor,PORT_B_PIN_3_initial_level,\
 
                                           
PORT_B,PORT_B_PIN_4,PORT_B_PIN_4_analog_mode_selection,PORT_B_PIN_4_mode,\
 PORT_B_PIN_4_mode_changable,PORT_B_PIN_4_direction,PORT_B_PIN_4_direction_changable,\
 PORT_B_PIN_4_internal_resistor,PORT_B_PIN_4_initial_level,\

   
   PORT_B,PORT_B_PIN_5,PORT_B_PIN_5_analog_mode_selection,PORT_B_PIN_5_mode,\
 PORT_B_PIN_5_mode_changable,PORT_B_PIN_5_direction,PORT_B_PIN_5_direction_changable,\
 PORT_B_PIN_5_internal_resistor,PORT_B_PIN_5_initial_level,\

   PORT_B,PORT_B_PIN_6,PORT_B_PIN_6_analog_mode_selection,PORT_B_PIN_6_mode,\
 PORT_B_PIN_6_mode_changable,PORT_B_PIN_6_direction,PORT_B_PIN_6_direction_changable,\
 PORT_B_PIN_6_internal_resistor,PORT_B_PIN_6_initial_level,\

   PORT_B,PORT_B_PIN_7,PORT_B_PIN_7_analog_mode_selection,PORT_B_PIN_7_mode,\
 PORT_B_PIN_7_mode_changable,PORT_B_PIN_7_direction,PORT_B_PIN_7_direction_changable,\
 PORT_B_PIN_7_internal_resistor,PORT_B_PIN_7_initial_level,\

  /*PORT C*/
   PORT_C,PORT_C_PIN_0,PORT_C_PIN_0_analog_mode_selection,PORT_C_PIN_0_mode,\
 PORT_C_PIN_0_mode_changable,PORT_C_PIN_0_direction,PORT_C_PIN_0_direction_changable,\
 PORT_C_PIN_0_internal_resistor,PORT_C_PIN_0_initial_level,\

 PORT_C,PORT_C_PIN_1,PORT_C_PIN_1_analog_mode_selection,PORT_C_PIN_1_mode,\
 PORT_C_PIN_1_mode_changable,PORT_C_PIN_1_direction,PORT_C_PIN_1_direction_changable,\
 PORT_C_PIN_1_internal_resistor,PORT_C_PIN_1_initial_level,\
 
 PORT_C,PORT_C_PIN_2,PORT_C_PIN_2_analog_mode_selection,PORT_C_PIN_2_mode,\
 PORT_C_PIN_2_mode_changable,PORT_C_PIN_2_direction,PORT_C_PIN_2_direction_changable,\
 PORT_C_PIN_2_internal_resistor,PORT_C_PIN_2_initial_level,\
 
 PORT_C,PORT_C_PIN_3,PORT_C_PIN_3_analog_mode_selection,PORT_C_PIN_3_mode,\
 PORT_C_PIN_3_mode_changable,PORT_C_PIN_3_direction,PORT_C_PIN_3_direction_changable,\
 PORT_C_PIN_3_internal_resistor,PORT_C_PIN_3_initial_level,\
 
                                           
PORT_C,PORT_C_PIN_4,PORT_C_PIN_4_analog_mode_selection,PORT_C_PIN_4_mode,\
 PORT_C_PIN_4_mode_changable,PORT_C_PIN_4_direction,PORT_C_PIN_4_direction_changable,\
 PORT_C_PIN_4_internal_resistor,PORT_C_PIN_4_initial_level,\

   
   PORT_C,PORT_C_PIN_5,PORT_C_PIN_5_analog_mode_selection,PORT_C_PIN_5_mode,\
 PORT_C_PIN_5_mode_changable,PORT_C_PIN_5_direction,PORT_C_PIN_5_direction_changable,\
 PORT_C_PIN_5_internal_resistor,PORT_C_PIN_5_initial_level,\

   PORT_C,PORT_C_PIN_6,PORT_C_PIN_6_analog_mode_selection,PORT_C_PIN_6_mode,\
 PORT_C_PIN_6_mode_changable,PORT_C_PIN_6_direction,PORT_C_PIN_6_direction_changable,\
 PORT_C_PIN_6_internal_resistor,PORT_C_PIN_6_initial_level,\

   PORT_C,PORT_C_PIN_7,PORT_C_PIN_7_analog_mode_selection,PORT_C_PIN_7_mode,\
 PORT_C_PIN_7_mode_changable,PORT_C_PIN_7_direction,PORT_C_PIN_7_direction_changable,\
 PORT_C_PIN_7_internal_resistor,PORT_C_PIN_7_initial_level,\

   /*PORT D*/
   PORT_D,PORT_D_PIN_0,PORT_D_PIN_0_analog_mode_selection,PORT_D_PIN_0_mode,\
 PORT_D_PIN_0_mode_changable,PORT_D_PIN_0_direction,PORT_D_PIN_0_direction_changable,\
 PORT_D_PIN_0_internal_resistor,PORT_D_PIN_0_initial_level,\

 PORT_D,PORT_D_PIN_1,PORT_D_PIN_1_analog_mode_selection,PORT_D_PIN_1_mode,\
 PORT_D_PIN_1_mode_changable,PORT_D_PIN_1_direction,PORT_D_PIN_1_direction_changable,\
 PORT_D_PIN_1_internal_resistor,PORT_D_PIN_1_initial_level,\
 
 PORT_D,PORT_D_PIN_2,PORT_D_PIN_2_analog_mode_selection,PORT_D_PIN_2_mode,\
 PORT_D_PIN_2_mode_changable,PORT_D_PIN_2_direction,PORT_D_PIN_2_direction_changable,\
 PORT_D_PIN_2_internal_resistor,PORT_D_PIN_2_initial_level,\
 
 PORT_D,PORT_D_PIN_3,PORT_D_PIN_3_analog_mode_selection,PORT_D_PIN_3_mode,\
 PORT_D_PIN_3_mode_changable,PORT_D_PIN_3_direction,PORT_D_PIN_3_direction_changable,\
 PORT_D_PIN_3_internal_resistor,PORT_D_PIN_3_initial_level,\
 
                                           
PORT_D,PORT_D_PIN_4,PORT_D_PIN_4_analog_mode_selection,PORT_D_PIN_4_mode,\
 PORT_D_PIN_4_mode_changable,PORT_D_PIN_4_direction,PORT_D_PIN_4_direction_changable,\
 PORT_D_PIN_4_internal_resistor,PORT_D_PIN_4_initial_level,\

   
   PORT_D,PORT_D_PIN_5,PORT_D_PIN_5_analog_mode_selection,PORT_D_PIN_5_mode,\
 PORT_D_PIN_5_mode_changable,PORT_D_PIN_5_direction,PORT_D_PIN_5_direction_changable,\
 PORT_D_PIN_5_internal_resistor,PORT_D_PIN_5_initial_level,\

   PORT_D,PORT_D_PIN_6,PORT_D_PIN_6_analog_mode_selection,PORT_D_PIN_6_mode,\
 PORT_D_PIN_6_mode_changable,PORT_D_PIN_6_direction,PORT_D_PIN_6_direction_changable,\
 PORT_D_PIN_6_internal_resistor,PORT_D_PIN_6_initial_level,\

   PORT_D,PORT_D_PIN_7,PORT_D_PIN_7_analog_mode_selection,PORT_D_PIN_7_mode,\
 PORT_D_PIN_7_mode_changable,PORT_D_PIN_7_direction,PORT_D_PIN_7_direction_changable,\
 PORT_D_PIN_7_internal_resistor,PORT_D_PIN_7_initial_level,\

   /*PORT E*/
   PORT_E,PORT_E_PIN_0,PORT_E_PIN_0_analog_mode_selection,PORT_E_PIN_0_mode,\
 PORT_E_PIN_0_mode_changable,PORT_E_PIN_0_direction,PORT_E_PIN_0_direction_changable,\
 PORT_E_PIN_0_internal_resistor,PORT_E_PIN_0_initial_level,\

 PORT_E,PORT_E_PIN_1,PORT_E_PIN_1_analog_mode_selection,PORT_E_PIN_1_mode,\
 PORT_E_PIN_1_mode_changable,PORT_E_PIN_1_direction,PORT_E_PIN_1_direction_changable,\
 PORT_E_PIN_1_internal_resistor,PORT_E_PIN_1_initial_level,\
 
 PORT_E,PORT_E_PIN_2,PORT_E_PIN_2_analog_mode_selection,PORT_E_PIN_2_mode,\
 PORT_E_PIN_2_mode_changable,PORT_E_PIN_2_direction,PORT_E_PIN_2_direction_changable,\
 PORT_E_PIN_2_internal_resistor,PORT_E_PIN_2_initial_level,\
 
 PORT_E,PORT_E_PIN_3,PORT_E_PIN_3_analog_mode_selection,PORT_E_PIN_3_mode,\
 PORT_E_PIN_3_mode_changable,PORT_E_PIN_3_direction,PORT_E_PIN_3_direction_changable,\
 PORT_E_PIN_3_internal_resistor,PORT_E_PIN_3_initial_level,\
 
                                           
PORT_E,PORT_E_PIN_4,PORT_E_PIN_4_analog_mode_selection,PORT_E_PIN_4_mode,\
 PORT_E_PIN_4_mode_changable,PORT_E_PIN_4_direction,PORT_E_PIN_4_direction_changable,\
 PORT_E_PIN_4_internal_resistor,PORT_E_PIN_4_initial_level,\

   
   PORT_E,PORT_E_PIN_5,PORT_E_PIN_5_analog_mode_selection,PORT_E_PIN_5_mode,\
 PORT_E_PIN_5_mode_changable,PORT_E_PIN_5_direction,PORT_E_PIN_5_direction_changable,\
 PORT_E_PIN_5_internal_resistor,PORT_E_PIN_5_initial_level,\


 
   /*PORT F */
   PORT_F,PORT_F_PIN_0,PORT_F_PIN_0_analog_mode_selection,PORT_F_PIN_0_mode,\
 PORT_F_PIN_0_mode_changable,PORT_F_PIN_0_direction,PORT_F_PIN_0_direction_changable,\
 PORT_F_PIN_0_internal_resistor,PORT_F_PIN_0_initial_level,\

 PORT_F,PORT_F_PIN_1,PORT_F_PIN_1_analog_mode_selection,PORT_F_PIN_1_mode,\
 PORT_F_PIN_1_mode_changable,PORT_F_PIN_1_direction,PORT_F_PIN_1_direction_changable,\
 PORT_F_PIN_1_internal_resistor,PORT_F_PIN_1_initial_level,\
 
 PORT_F,PORT_F_PIN_2,PORT_F_PIN_2_analog_mode_selection,PORT_F_PIN_2_mode,\
 PORT_F_PIN_2_mode_changable,PORT_F_PIN_2_direction,PORT_F_PIN_2_direction_changable,\
 PORT_F_PIN_2_internal_resistor,PORT_F_PIN_2_initial_level,\
 
 PORT_F,PORT_F_PIN_3,PORT_F_PIN_3_analog_mode_selection,PORT_F_PIN_3_mode,\
 PORT_F_PIN_3_mode_changable,PORT_F_PIN_3_direction,PORT_F_PIN_3_direction_changable,\
 PORT_F_PIN_3_internal_resistor,PORT_F_PIN_3_initial_level,\
 
   PORT_F,PORT_F_PIN_4,PORT_F_PIN_4_analog_mode_selection,PORT_F_PIN_4_mode,\
 PORT_F_PIN_4_mode_changable,PORT_F_PIN_4_direction,PORT_F_PIN_4_direction_changable,\
 PORT_F_PIN_4_internal_resistor,PORT_F_PIN_4_initial_level,\
 
                                           

};