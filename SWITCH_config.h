/***************************************************************************************************************************************************/
/*AUTHOR   : MOHAMED OSAMA                                                                                                                        */
/*DATE     : 14 FEB 2019                                                                                                                         */
/*VERSION  : V01                                                                                                                                */
/***********************************************************************************************************************************************/
/* DESCRIPTION                                                                                                                                */
/*------------                                                                                                                               */
/* this file defines the APIs corresponding to SWITCH                                                                                       */
/*******************************************************************************************************************************************/


#ifndef  SWITCH_config_h
#define  SWITCH_config_h


#define  SWITCH_u8_MAX_SWITCH_NB                 1

u8 SWITCH_u8SWITCH_Types[SWITCH_u8_MAX_SWITCH_NB ]      =  { SWITCH_u8_PULLDOWN  };
u8 SWITCH_u8SWITCH_Connected_Pin[SWITCH_u8_MAX_SWITCH_NB  ] =  { DIO_u8_PIN_0  };




u8 SWITCH_u8GetSwitchState ( u8 Copy_u8SWITCH_ID , u8 * Copy_Pu8SWITCH);

#endif