 /******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Dio Driver
 *
 * Author: Mohamed Tarek
 ******************************************************************************/

#ifndef DIO_CFG_H
#define DIO_CFG_H

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

#define PORT_A                  (0U)
#define PORT_A_PIN_0            (0u)
#define PORT_A_PIN_1            (1u)
#define PORT_A_PIN_2            (2u)
#define PORT_A_PIN_3            (1u)
#define PORT_A_PIN_4            (1u)
#define PORT_A_PIN_5            (1u)
#define PORT_A_PIN_6            (1u)
#define PORT_A_PIN_7            (1u)


#define PORT_B                  (1U)
#define PORT_B_PIN_0            (0u)
#define PORT_B_PIN_1            (1u)
#define PORT_B_PIN_2            (2u)
#define PORT_B_PIN_3            (1u)
#define PORT_B_PIN_4            (1u)
#define PORT_B_PIN_5            (1u)
#define PORT_B_PIN_6            (1u)
#define PORT_B_PIN_7            (1u)

/* Number of the configured Dio Channels */
#define PORT_CHANNLES              (42U)

/* Channel Index in the array of structures in Dio_PBcfg.c */
#define DioConf_LED1_CHANNEL_ID_INDEX        (uint8)0x09
#define DioConf_SW1_CHANNEL_ID_INDEX         (uint8)0x09

/* DIO Configured Port ID's  */
#define DioConf_LED1_PORT_NUM                (Dio_PortType)5 /* PORTF */
#define DioConf_SW1_PORT_NUM                 (Dio_PortType)5 /* PORTF */

/* DIO Configured Channel ID's */
#define DioConf_LED1_CHANNEL_NUM             (Dio_ChannelType)1 /* Pin 1 in PORTF */
#define DioConf_SW1_CHANNEL_NUM              (Dio_ChannelType)4 /* Pin 4 in PORTF */

#endif /* DIO_CFG_H */
