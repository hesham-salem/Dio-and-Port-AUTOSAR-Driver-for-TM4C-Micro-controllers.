 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Hesham Salem
 ******************************************************************************/

#include "Port.h"
#include "port_registers.h"
#if (DIO_DEV_ERROR_DETECT == STD_ON)

#include "Det.h"
/* AUTOSAR Version checking between Det and Dio Modules */
#if ((DET_AR_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 || (DET_AR_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 || (DET_AR_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif
#endif
   
 volatile Port_ConfigType * g_ConfigPtr=NULL_PTR;
STATIC volatile uint8 Port_status = PORT_NOT_INITIALIZED;
/************************************************************************************
* Service Name: Port_init
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): g_ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the pin configuration:
*              - Setup the pin mode
*              - Setup the direction of the GPIO pin
*              - Provide initial value for o/p pin
*              - Setup the internal resistor for i/p pin
*              -determine if the pin mode is changable
*              -determine if the pin direction is changable

************************************************************************************/
void Port_init(const Port_pinConfigType * ConfigPtr)
{
    volatile uint32 delay = 0;
      volatile uint32 *PortGpio_Ptr=NULL_PTR;
    int pin_index;
    #if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* check if the input configuration pointer is not a NULL_PTR */
	if (NULL_PTR == ConfigPtr)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		     PORT_E_PARAM_CONFIG);
                return;
	}
	else
        {
          
          /*
		 * Set the module state to initialized and point to the PB configuration structure using a global pointer.
		 * This global pointer is global to be used by other functions to read the PB configuration structures
		 */
          g_ConfigPtr =(Port_ConfigType*)ConfigPtr;
        
            }
#endif
	
    
    
    for(pin_index=0;pin_index<PORT_PINS;pin_index++)
    {
      
    switch(g_ConfigPtr[pin_index].port_num)
    {
        case  0: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
    }
    
    /* Enable clock for PORT and allow time for clock to start*/
    SYSCTL_REGCGC2_REG |= (1<<g_ConfigPtr[pin_index].port_num);
    delay = SYSCTL_REGCGC2_REG;
    
    if( ((g_ConfigPtr[pin_index].port_num == 3) && (g_ConfigPtr[pin_index].pin_num == 7)) || ((g_ConfigPtr[pin_index].port_num == 5) && (g_ConfigPtr[pin_index].pin_num == 0)) ) /* PD7 or PF0 */
    {
        *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_LOCK_REG_OFFSET) = 0x4C4F434B;                     /* Unlock the GPIOCR register */   
        SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_COMMIT_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);  /* Set the corresponding bit in GPIOCR register to allow changes on this pin */
    }
    else if( (g_ConfigPtr[pin_index].port_num == 2) && (g_ConfigPtr[pin_index].pin_num <= 3) ) /* PC0 to PC3 */
    {
        /* Do Nothing ...  this is the JTAG pins */
        continue;
    }
    else
    {
        /* Do Nothing ... No need to unlock the commit register for this pin */
    }
    if(g_ConfigPtr[pin_index].analog_mode_selection ==STD_OFF)
    {
    CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);      /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
  
  if(g_ConfigPtr[pin_index].Port_PinMode ==DIO_mode)
  {
    CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);             /* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
    *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (g_ConfigPtr->pin_num * 4));     /* Clear*/
  }
  else 
  { 
        SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);             /* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
    *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (g_ConfigPtr[pin_index].pin_num * 4));     /* Clear*/
    *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) |= ( g_ConfigPtr[pin_index].Port_PinMode<< (g_ConfigPtr[pin_index].pin_num * 4));     /* SET the PMCx bits for this pin */
  }
    
    }
    else if(g_ConfigPtr[pin_index].analog_mode_selection ==STD_ON)
        {
    SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);      /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */

    SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);             /* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
        }
      else
      {
          
      }          
                
        
    if(g_ConfigPtr[pin_index].direction == OUTPUT)
    {
	SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);                /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
        
        if(g_ConfigPtr[pin_index].initial_level == STD_HIGH)
        {
            SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DATA_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);          /* Set the corresponding bit in the GPIODATA register to provide initial value 1 */
        }
        else
        {
            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DATA_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);        /* Clear the corresponding bit in the GPIODATA register to provide initial value 0 */
        }
    }
    else if(g_ConfigPtr[pin_index].direction == INPUT)
    {
        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);             /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
       
        
    }
        
        if(g_ConfigPtr[pin_index].internal_resistor == PULL_UP)
        {
            SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_UP_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);       /* Set the corresponding bit in the GPIOPUR register to enable the internal pull up pin */
        }
        else if(g_ConfigPtr[pin_index].internal_resistor == PULL_DOWN)
        {
            SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_DOWN_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);     /* Set the corresponding bit in the GPIOPDR register to enable the internal pull down pin */
        }
        else
        {
            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_UP_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);     /* Clear the corresponding bit in the GPIOPUR register to disable the internal pull up pin */
            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_PULL_DOWN_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);   /* Clear the corresponding bit in the GPIOPDR register to disable the internal pull down pin */
        }
    
   
        /* Do Nothing */
   
    if(g_ConfigPtr[pin_index].analog_mode_selection ==STD_OFF)
    SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);        /* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
else
{
}
      }
    
   Port_status = PORT_INITIALIZED;

}

/************************************************************************************
* Service Name: Port_SetPinDirection
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): port pin and its direction
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the pin direction during runtime:
*              - the pin shall be configurated as direction changable

************************************************************************************/
#if (PORT_SET_PIN_DIRECTION_API==STD_ON)
void Port_SetPinDirection(Port_PinType Pin_ID,Port_PinDirection Direction)
{
  uint8 ERROR=FALSE;
   #if (PORT_DEV_ERROR_DETECT == STD_ON)
  	/* Check if the Driver is initialized before using this function */

            if(Port_status == PORT_NOT_INITIALIZED)
            {	Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_DIRECTION_SID,PORT_E_UNINIT);

            ERROR=TRUE;
            }
            
	else if (Pin_ID >=PORT_PINS)
	{
          /*check if the entered pin number is invalid */
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_DIRECTION_SID,
		     PORT_E_PARAM_PIN);
                            ERROR=TRUE;

	}
        else if (g_ConfigPtr[Pin_ID].Direction_changable==STD_IDLE)
          /* check if the pin's direction is changable during runtime */
        { Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_DIRECTION_UNCHANGEABLE);
                                  ERROR=TRUE;
        }
	else
        {
          		/* No Action Required */

        }
#endif
        if(ERROR==FALSE)
        {
  volatile uint32 *PortGpio_Ptr=NULL_PTR;
  
   switch(g_ConfigPtr[Pin_ID].port_num)
    {
        case  0: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
    }
   if(Direction == OUTPUT)
    {
	SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , g_ConfigPtr[Pin_ID].pin_num);                /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
    }
    else 
    {
        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , g_ConfigPtr[Pin_ID].pin_num); 
    }

}
}
#endif
/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): non
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Refreshes port direction 
*              - exclude pins which configurated as direction changable 

************************************************************************************/
void Port_RefreshPortDirection(void)
{
  volatile uint32 *PortGpio_Ptr;
   #if (PORT_DEV_ERROR_DETECT == STD_ON)
            if(Port_status == PORT_NOT_INITIALIZED)
            {	Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_REFESH_PORT_DIRECTION_SID,PORT_E_UNINIT);
                        return;
            }

	else
        {
        		/* No Action Required */

        }
#endif

    for(int pin_index=0;pin_index<PORT_PINS;pin_index++)
    {
               if (g_ConfigPtr[pin_index].Direction_changable==STD_OFF)
               {
                 continue;
               }
               else
               {
                 		/* No Action Required */

               }
    switch(g_ConfigPtr[pin_index].port_num)
    {
        case  0: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
    }
    if(g_ConfigPtr[pin_index].direction == OUTPUT)
    {
	SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);                /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
        
      
      
    }
    else if(g_ConfigPtr[pin_index].direction == INPUT)
    {
        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_DIR_REG_OFFSET) , g_ConfigPtr[pin_index].pin_num);             /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
    
    } else
     {
       		/* No Action Required */

     }
        
}
}
  /************************************************************************************
* Service Name: Port_SetPinMode
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): pin ID and its mode
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the pin mode during runtime:
*              - the pin shall be configurated as mode changable
*              

************************************************************************************/  

void Port_SetPinMode(Port_PinType Pin_ID,Port_PinModeType Mode)
{
  uint8 ERROR=FALSE;
   #if (PORT_DEV_ERROR_DETECT == STD_ON)
            if(Port_status == PORT_NOT_INITIALIZED)
            {
              		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_MODE_SID,PORT_E_UNINIT);
                        ERROR=TRUE;
            }
	else if (Pin_ID >=PORT_PINS)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_SET_PIN_MODE_SID,
		     PORT_E_PARAM_PIN);
                                        ERROR=TRUE;

	}
        else if (g_ConfigPtr[Pin_ID].mode_changable==STD_IDLE)
        { Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_MODE_SID,PORT_E_MODE_UNCHANGEABLE);
                      
                                ERROR=TRUE;
        }
               else if (CONFIGURATED_MODES<Mode)
               {        Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_MODE_SID,PORT_E_PARAM_INVALID_MODE);
                        ERROR=TRUE;
               }

	else
        {
        		/* No Action Required */
}
#endif
        if(ERROR==FALSE)
        {
  volatile uint32 *PortGpio_Ptr=NULL_PTR;
  
   switch(g_ConfigPtr[Pin_ID].port_num)
    {
        case  0: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: PortGpio_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
    }
  
  
  
      if(Mode ==DIO_mode)
        {
    CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , g_ConfigPtr[Pin_ID].pin_num);             /* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
    *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (g_ConfigPtr[Pin_ID].pin_num * 4));     /* Clear the PMCx bits for this pin */
        }
      else
      {
    SET_BIT(*(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_ALT_FUNC_REG_OFFSET) , g_ConfigPtr[Pin_ID].pin_num);             /* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
    *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) &= ~(0x0000000F << (g_ConfigPtr[Pin_ID].pin_num * 4));     /* Clear*/
    *(volatile uint32 *)((volatile uint8 *)PortGpio_Ptr + PORT_CTL_REG_OFFSET) |= ( g_ConfigPtr[Pin_ID].Port_PinMode<< (g_ConfigPtr[Pin_ID].pin_num * 4));     /* SET the PMCx bits for this pin */
  }
      } 
        }


/************************************************************************************
* Service Name: PORT_GetVersionInfo
* Service ID[hex]: 0x03
* Sync/Async: Synchronous
* Reentrancy: non Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): VersionInfo - Pointer to where to store the version information of this module.
* Return value: None
* Description: Function to get the version information of this module.
************************************************************************************/
#if (PORT_VERSION_INFO_API == STD_ON)
void PORT_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* Check if input pointer is not Null pointer */
	if(NULL_PTR == versioninfo)
	{
		/* Report to DET  */
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_GET_VERSION_INFO_SID, PORT_E_PARAM_POINTER);
	}
	else
#endif 
	{
		/* Copy the vendor Id */
		versioninfo->vendorID = (uint16)PORT_VENDOR_ID;
		/* Copy the module Id */
		versioninfo->moduleID = (uint16)PORT_MODULE_ID;
		/* Copy Software Major Version */
		versioninfo->sw_major_version = (uint8)PORT_SW_MAJOR_VERSION;
		/* Copy Software Minor Version */
		versioninfo->sw_minor_version = (uint8)PORT_SW_MINOR_VERSION;
		/* Copy Software Patch Version */
		versioninfo->sw_patch_version = (uint8)PORT_SW_PATCH_VERSION;
	}
}
#endif