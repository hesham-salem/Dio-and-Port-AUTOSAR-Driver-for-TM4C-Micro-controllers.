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

   
   
/* PB structure used with Dio_Init API */
const Port_ConfigType2 port_Configuration = {
  0,0,GPIO_mode,INPUT,OFF,0,
    0,1,GPIO_mode,INPUT,OFF,0,
  0,2,GPIO_mode,INPUT,OFF,0,
  0,3,GPIO_mode,INPUT,OFF,0,
  0,4,GPIO_mode,INPUT,OFF,0,
  0,5,GPIO_mode,INPUT,OFF,0,
  0,6,GPIO_mode,INPUT,OFF,0,
  0,7,GPIO_mode,INPUT,OFF,0,
  
   1,0,GPIO_mode,INPUT,OFF,0,
    1,1,GPIO_mode,INPUT,OFF,0,
  1,2,GPIO_mode,INPUT,OFF,0,
  1,3,GPIO_mode,INPUT,OFF,0,
  1,4,GPIO_mode,INPUT,OFF,0,
  1,5,GPIO_mode,INPUT,OFF,0,
  1,6,GPIO_mode,INPUT,OFF,0,
  1,7,GPIO_mode,INPUT,OFF,0,
  
                                           
				         };