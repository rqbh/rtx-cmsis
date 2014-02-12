/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : INT_PendableSrvReq.h
**     Project     : ProcessorExpert
**     Processor   : MK20DX128VLH5
**     Component   : InterruptVector
**     Version     : Component 02.023, Driver 01.00, CPU db: 3.00.000
**     Compiler    : IAR ARM C Compiler
**     Date/Time   : 2014-01-22, 16:49, # CodeGen: 2
**     Abstract    :
**         This component "InterruptVector" gives an access to interrupt vector.
**         The purpose of this component is to allocate the interrupt vector
**         in the vector table. Additionally it can provide settings of
**         the interrupt priority register.
**         The interrupt handling routines must be implemented by the user.
**     Settings    :
**         Interrupt vector            : INT_PendableSrvReq
**         Handle name                 : PendSV_Handler
**     Contents    :
**         No public methods
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file INT_PendableSrvReq.h
** @version 01.00
** @brief
**         This component "InterruptVector" gives an access to interrupt vector.
**         The purpose of this component is to allocate the interrupt vector
**         in the vector table. Additionally it can provide settings of
**         the interrupt priority register.
**         The interrupt handling routines must be implemented by the user.
*/         
/*!
**  @addtogroup INT_PendableSrvReq_module INT_PendableSrvReq module documentation
**  @{
*/         

#ifndef __INT_PendableSrvReq
#define __INT_PendableSrvReq

/* MODULE INT_PendableSrvReq. */

#include "PE_Types.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
** The interrupt service routine must be implemented by user in one
** of the user modules (see INT_PendableSrvReq.c file for more information).
** ===================================================================
*/

PE_ISR(PendSV_Handler);

/* END INT_PendableSrvReq. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __INT_PendableSrvReq */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/