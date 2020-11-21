
/***************************************************************************************************************************************************/
/*AUTHOR   : MOHAMED OSAMA                                                                                                                        */
/*DATE     : 14 FEB 2019                                                                                                                         */
/*VERSION  : V01                                                                                                                                */
/***********************************************************************************************************************************************/
/* DESCRIPTION                                                                                                                                */
/*------------                                                                                                                               */
/* this file defines the APIs corresponding to SWITCH                                                                                          */
/*******************************************************************************************************************************************/


#ifndef  SWITCH_interface_h
#define  SWITCH_interface_h


#define  SWITCH_u8_PULLUP                  0
#define  SWITCH_u8_PULLDOWN                1

#define  SWITCH_u8_PULLDOWN_PRESSED        1 
#define  SWITCH_u8_PULLDOWN_UNPRESSED      0   
                 
#define  SWITCH_u8_PULLUP_PRESSED          0
#define  SWITCH_u8_PULLUP_UNPRESSED        1  




u8 SWITCH_u8GetSwitchState ( u8 Copy_u8SWITCH_ID , u8 * Copy_Pu8SWITCH);

#endif