/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2018, 2022 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : r_cg_ostm.h
* Version          : 1.0.130
* Device(s)        : R7F701684
* Description      : General header file for OSTM peripheral.
***********************************************************************************************************************/

#ifndef OSTM_H
#define OSTM_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    OSTM Count Start Trigger Register (OSTMnTS)
*/
/* Starts the counter (OSTMnTS) */
#define _OSTM_COUNTER_START                       (0x01U) /* Starts the counter */

/*
    OSTM Count Stop Trigger Register (OSTMnTT)
*/
/* Stops the counter (OSTMnTT) */
#define _OSTM_COUNTER_STOP                        (0x01U) /* Stops the counter */

/*
    OSTM Control Register (OSTMnCTL)
*/
/* Specifies the operating mode for the counter (OSTMnMD1) */
#define _OSTM_MODE_INTERVAL_TIMER                 (0x00U) /* Interval timer mode */
#define _OSTM_MODE_FREE_RUNNING                   (0x02U) /* Free-running comparison mode */
/* Specifies the operating mode for the counter (OSTMnMD0) */
#define _OSTM_START_INTERRUPT_DISABLE             (0x00U) /* Disables the interrupts when counting starts */
#define _OSTM_START_INTERRUPT_ENABLE              (0x01U) /* Enables the interrupts when counting starts */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
