 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H


/* Id for the company in the AUTOSAR */
#define PORT_VENDOR_ID    (1500U)

/* Dio Module Id */
#define PORT_MODULE_ID    (120U)

/* Dio Instance Id */
#define PORT_INSTANCE_ID  (0U)

/*module version */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)


/* AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)

/*
 * Macros for PORT Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and Dio Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* port Pre-Compile Configuration Header file */
#include "port_Cfg.h"

/* AUTOSAR Version checking between Dio_Cfg.h and Dio.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
 // #error "The AR version of Dio_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Dio_Cfg.h and Dio.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
//  #error "The SW version of Dio_Cfg.h does not match the expected version"
#endif

/* Non AUTOSAR files */
#include "Common_Macros.h"

/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/

#define PORT_INIT_SID                            (uint8)0x00
#define PORT_REFESH_PORT_DIRECTION_SID           (uint8)0x02
#define PORT_SET_PIN_MODE_SID                    (uint8)0x04
#define PORT_SET_PIN_DIRECTION_SID               (uint8)0x01
#define PORT_GET_VERSION_INFO_STD                (uint8)0x03

/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
#define PORT_E_PARAM_PIN  (uint8) 0x0A
#define PORT_E_DIRECTION_UNCHANGEABLE (uint8) 0x0B
#define PORT_E_PARAM_CONFIG (uint8) 0x0C
#define PORT_E_PARAM_INVALID_MODE (uint8) 0x0D
#define PORT_E_MODE_UNCHANGEABLE (uint8) 0x0E
#define PORT_E_UNINIT (uint8) 0x0F
#define PORT_E_PARAM_POINTER (uint8) 0x10
/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
#define Port_PinModeType            uint8  
#define Port_PinType                uint8
#define Port_PinDirectionType       uint8
#define Port_type                   uint8  
#define initial_valueType           uint8 
#define Direction_changableType     uint8
#define mode_changableType          uint8        

typedef enum
{
    INPUT,OUTPUT
}Port_PinDirection;

/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    OFF,PULL_UP,PULL_DOWN
}Port_InternalResistor;
typedef enum
{
  LOW,HIGH
}Intial_value;

/* Description: Structure to configure each individual PIN:
 *	1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *	2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 */
typedef struct 
{
    Port_type port_num; 
    Port_PinType pin_num; 
    Port_PinModeType Port_PinMode;
    Port_PinDirection direction;
    Port_InternalResistor resistor;
    initial_valueType initial_value;
    Direction_changableType Direction_changable;
    mode_changableType mode_changable;
}Port_ConfigType;

typedef struct
{
  Port_ConfigType port_pins[PORT_PINS];
}Port_pinConfigType;



/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

void Port_init(const Port_pinConfigType * ConfigPtr );

void Port_RefreshPortDirection(void);

void Port_SetPinMode(Port_PinType Pin_ID,Port_PinModeType Mode);


#if (PORT_SET_PIN_DIRECTION_API==STD_ON)

void Port_SetPinDirection(Port_PinType Pin_ID,Port_PinDirectionType Direction);
#endif
#if (PORT_VERSION_INFO_API == STD_ON)
void PORT_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif
/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

const extern Port_pinConfigType port_Configuration;
#endif /* PORT_H */
