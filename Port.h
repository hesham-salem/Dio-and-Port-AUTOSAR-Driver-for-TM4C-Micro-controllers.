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

#include "Common_Macros.h"
#include "Std_Types.h"
#include "port_Cfg.h"

/* Id for the company in the AUTOSAR
 * for example Mohamed Tarek's ID = 1000 :) */
#define PORT_VENDOR_ID    (1500U)

/* Dio Module Id */
#define PORT_MODULE_ID    (120U)

/* Dio Instance Id */
#define PORT_INSTANCE_ID  (0U)

/*
* Service ID for DIO read Channel */
#define PORT_INIT_SID                            (uint8)0x00
#define PORT_REFESH_PORT_DIRECTION_SID           (uint8)0x02
#define PORT_SET_PIN_MODE_SID                    (uint8)0x04
#define PORT_SET_PIN_DIRECTION_SID               (uint8)0x01
#define PORT_GET_VERSION_INFO_STD                (uint8)0x03


#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)


/* AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)


/*******************************************************************************
 *                              Module Definitions                             *
 *******************************************************************************/

/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

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

   


/*
 * Macros for PORT Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)



#define Pin_numbers (43U)   
/* Description: Enum to hold PIN direction */
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
  Port_ConfigType port_pins[Pin_numbers];
}Port_pinConfigType;
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

/*modes */
#define GPIO_mode 0
#define ADC_mode 1


/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/************************************************************************************
* Service Name: Port_SetupGpioPin
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the pin configuration:
*              - Setup the pin as Digital GPIO pin
*              - Setup the direction of the GPIO pin
*              - Setup the internal resistor for i/p pin
************************************************************************************/
void Port_init(const Port_pinConfigType * ConfigPtr );
/* Extern PB structures to be used by PORT and other modules */
void Port_RefreshPortDirection(void);
void Port_SetPinMode(Port_PinType Pin_ID,Port_PinModeType Mode);
void Port_SetPinDirection(Port_PinType Pin_ID,Port_PinDirectionType Direction);
void PORT_GetVersionInfo(Std_VersionInfoType *versioninfo);


const extern Port_pinConfigType port_Configuration;
#endif /* PORT_H */
