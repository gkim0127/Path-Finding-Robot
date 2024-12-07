/*******************************************************************************
* File Name: ENCO3.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_ENCO3_H) /* Pins ENCO3_H */
#define CY_PINS_ENCO3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "ENCO3_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 ENCO3__PORT == 15 && ((ENCO3__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    ENCO3_Write(uint8 value);
void    ENCO3_SetDriveMode(uint8 mode);
uint8   ENCO3_ReadDataReg(void);
uint8   ENCO3_Read(void);
void    ENCO3_SetInterruptMode(uint16 position, uint16 mode);
uint8   ENCO3_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the ENCO3_SetDriveMode() function.
     *  @{
     */
        #define ENCO3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define ENCO3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define ENCO3_DM_RES_UP          PIN_DM_RES_UP
        #define ENCO3_DM_RES_DWN         PIN_DM_RES_DWN
        #define ENCO3_DM_OD_LO           PIN_DM_OD_LO
        #define ENCO3_DM_OD_HI           PIN_DM_OD_HI
        #define ENCO3_DM_STRONG          PIN_DM_STRONG
        #define ENCO3_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define ENCO3_MASK               ENCO3__MASK
#define ENCO3_SHIFT              ENCO3__SHIFT
#define ENCO3_WIDTH              1u

/* Interrupt constants */
#if defined(ENCO3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in ENCO3_SetInterruptMode() function.
     *  @{
     */
        #define ENCO3_INTR_NONE      (uint16)(0x0000u)
        #define ENCO3_INTR_RISING    (uint16)(0x0001u)
        #define ENCO3_INTR_FALLING   (uint16)(0x0002u)
        #define ENCO3_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define ENCO3_INTR_MASK      (0x01u) 
#endif /* (ENCO3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ENCO3_PS                     (* (reg8 *) ENCO3__PS)
/* Data Register */
#define ENCO3_DR                     (* (reg8 *) ENCO3__DR)
/* Port Number */
#define ENCO3_PRT_NUM                (* (reg8 *) ENCO3__PRT) 
/* Connect to Analog Globals */                                                  
#define ENCO3_AG                     (* (reg8 *) ENCO3__AG)                       
/* Analog MUX bux enable */
#define ENCO3_AMUX                   (* (reg8 *) ENCO3__AMUX) 
/* Bidirectional Enable */                                                        
#define ENCO3_BIE                    (* (reg8 *) ENCO3__BIE)
/* Bit-mask for Aliased Register Access */
#define ENCO3_BIT_MASK               (* (reg8 *) ENCO3__BIT_MASK)
/* Bypass Enable */
#define ENCO3_BYP                    (* (reg8 *) ENCO3__BYP)
/* Port wide control signals */                                                   
#define ENCO3_CTL                    (* (reg8 *) ENCO3__CTL)
/* Drive Modes */
#define ENCO3_DM0                    (* (reg8 *) ENCO3__DM0) 
#define ENCO3_DM1                    (* (reg8 *) ENCO3__DM1)
#define ENCO3_DM2                    (* (reg8 *) ENCO3__DM2) 
/* Input Buffer Disable Override */
#define ENCO3_INP_DIS                (* (reg8 *) ENCO3__INP_DIS)
/* LCD Common or Segment Drive */
#define ENCO3_LCD_COM_SEG            (* (reg8 *) ENCO3__LCD_COM_SEG)
/* Enable Segment LCD */
#define ENCO3_LCD_EN                 (* (reg8 *) ENCO3__LCD_EN)
/* Slew Rate Control */
#define ENCO3_SLW                    (* (reg8 *) ENCO3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define ENCO3_PRTDSI__CAPS_SEL       (* (reg8 *) ENCO3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define ENCO3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) ENCO3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define ENCO3_PRTDSI__OE_SEL0        (* (reg8 *) ENCO3__PRTDSI__OE_SEL0) 
#define ENCO3_PRTDSI__OE_SEL1        (* (reg8 *) ENCO3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define ENCO3_PRTDSI__OUT_SEL0       (* (reg8 *) ENCO3__PRTDSI__OUT_SEL0) 
#define ENCO3_PRTDSI__OUT_SEL1       (* (reg8 *) ENCO3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define ENCO3_PRTDSI__SYNC_OUT       (* (reg8 *) ENCO3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(ENCO3__SIO_CFG)
    #define ENCO3_SIO_HYST_EN        (* (reg8 *) ENCO3__SIO_HYST_EN)
    #define ENCO3_SIO_REG_HIFREQ     (* (reg8 *) ENCO3__SIO_REG_HIFREQ)
    #define ENCO3_SIO_CFG            (* (reg8 *) ENCO3__SIO_CFG)
    #define ENCO3_SIO_DIFF           (* (reg8 *) ENCO3__SIO_DIFF)
#endif /* (ENCO3__SIO_CFG) */

/* Interrupt Registers */
#if defined(ENCO3__INTSTAT)
    #define ENCO3_INTSTAT            (* (reg8 *) ENCO3__INTSTAT)
    #define ENCO3_SNAP               (* (reg8 *) ENCO3__SNAP)
    
	#define ENCO3_0_INTTYPE_REG 		(* (reg8 *) ENCO3__0__INTTYPE)
#endif /* (ENCO3__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_ENCO3_H */


/* [] END OF FILE */
