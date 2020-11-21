/****************************************************************************************************************************************************/
/*AUTHOR   : MOHAMED OSAMA                                                                                                                         */
/*DATE     : 13 FEB 2019                                                                                                                          */
/*VERSION  : V01                                                                                                                                 */
/************************************************************************************************************************************************/
/* DESCRIPTION                                                                                                                                 */
/*------------                                                                                                                                */
/* this filedefines the implementation of both private and public functions                                                                  */
/********************************************************************************************************************************************/
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "SWITCH_interface.h"
#include "SWITCH_config.h"



u8 SWITCH_u8GetSwitchState ( u8 Copy_u8SWITCH_ID , u8 * Copy_Pu8SWITCH)
{
	
  u8 Local_u8ErrorState =0;
  u8 Local_PinValue;
  if (   Copy_u8SWITCH_ID >= SWITCH_u8_MAX_SWITCH_NB)
  {
	  
	  Local_u8ErrorState = 1;
  }  else
  {
	 
   Local_u8ErrorState = 0;
	 
  }  
  
   DIO_u8GetPinValue ( SWITCH_u8SWITCH_Connected_Pin[  Copy_u8SWITCH_ID  ] , & Local_PinValue);
   
   if ( SWITCH_u8SWITCH_Types[Copy_u8SWITCH_ID] ==  SWITCH_u8_PULLDOWN )
   {
  
	         if  (   Local_PinValue ==  SWITCH_u8_PULLDOWN_PRESSED )
				     
					 {
						 * Copy_Pu8SWITCH = SWITCH_u8_PULLDOWN_PRESSED;
					 }
			else	

                    {
						 * Copy_Pu8SWITCH = SWITCH_u8_PULLDOWN_UNPRESSED;
					}				
	
   }
   
   else
	   
   {
		   
		   
		     if  (   Local_PinValue ==  SWITCH_u8_PULLUP_PRESSED )
				     
					 {
						 * Copy_Pu8SWITCH = SWITCH_u8_PULLUP_PRESSED;
					 }
			else	

                    {
						 * Copy_Pu8SWITCH = SWITCH_u8_PULLUP_UNPRESSED;
					}
		   
		   
		   
		   
		   
		   
	}  
	
	return Local_u8ErrorState ;
	
}	