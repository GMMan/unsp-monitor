//*****************************************************************************************
//Topic: The assembler header file to be included for GPL951XXUA and GPL951XXUB Series V1.0 
//Plateform: GPL95100UA
//Description: 1.This inc file defines the control register available for user to use GPL951.
//               The control regsiter setting constants is also included for users' convenience.
//             2.Naming rule:
//               C : define constant
//               P : define I/O port
//             3.Goal:
//               a) include file for GPL.asm
//               b) include file for user source code in assembly language	
//Version: V1.4  
//                     .V1.0 First edit 
//					   .V1.1 Add more bit define
//					   .V1.2 Add GPL951XXUB Body
//					   .V1.3 Modify P_USBD_INTF:								.VDEF	P_USBDevice_Base+0x0A to
//									P_USBD_INT:									.VDEF	P_USBDevice_Base+0x0A
//					   .V1.4 Add P_MICAGC_Ctrl, P_MICAGC_Time, P_MICAGC_Enable, P_MICAGC_Status and P_MICAGC_UpThres control register 		
//**************************************************************************************
.define GPL95100UA	0
.define GPL95101UA	0

.define GPL95100UB	0
.define GPL95101UB	1
//////////////////////////////////////////////////////////////////
//  Definitions for Peripheral Control Register
//////////////////////////////////////////////////////////////////
P_PPU_Ctrl_Base:							.VDEF			0x7000
P_TFT_Base:									.VDEF			0x7050
P_STN_Ctrl_Base:							.VDEF			0x7080
P_System_Ctrl_Base:      					.VDEF  			0x7800
P_NANDFlash_Base:							.VDEF			0x7850
P_IOPort_Ctrl_Base:       					.VDEF  			0x7860
P_Interrupt_Ctrl_Base:    					.VDEF 			0x78A0
P_TimeBase_Ctrl_Base:						.VDEF			0x78B0
P_I2C_Ctrl_Base:							.VDEF			0x78C0
P_Audio_Ctrl_Base:							.VDEF			0x78F0
P_UART_Ctrl_Base:							.VDEF			0x7900
P_SPI_Ctrl_Base:         					.VDEF			0x7920
P_Analog_Ctrl_Base:							.VDEF			0x79A0
P_RTC_Ctrl_Base:							.VDEF			0x79F0
P_Timer_Ctrl_Base:							.VDEF 			0x7A00
P_USBDevice_Base:							.VDEF			0x7A40 
P_DMA_Base:									.VDEF			0x7A80 
P_CTS_Ctrl_Base:							.VDEF			0x7AC0
P_MISC_Base:								.VDEF			0x7AF0
P_KeyScan_Base:								.VDEF			0x7B20
P_SPIF_Ctrl_Base:							.VDEF			0x7B40 
P_SPU_Base:									.VDEF			0x7B80		


//////////////////////////////////////////////////
//  Picture Process Unit(PPU) Control Registers
//  Base Address Start from 0x7000
//////////////////////////////////////////////////	
P_Tx3_X_Position:							.VDEF	P_PPU_Ctrl_Base+0x00	
P_Tx3_Y_Position:							.VDEF	P_PPU_Ctrl_Base+0x01	
P_Tx3_X_Offset:								.VDEF	P_PPU_Ctrl_Base+0x02	
P_Tx3_Y_Offset:								.VDEF	P_PPU_Ctrl_Base+0x03
P_Tx3_Attribute:							.VDEF	P_PPU_Ctrl_Base+0x04
P_Tx3_Control:								.VDEF	P_PPU_Ctrl_Base+0x05
P_Tx3_N_PTR:								.VDEF	P_PPU_Ctrl_Base+0x06
P_Tx3_A_PTR:								.VDEF	P_PPU_Ctrl_Base+0x07
P_Tx1_X_Position:							.VDEF	P_PPU_Ctrl_Base+0x10	
P_Tx1_Y_Position:							.VDEF	P_PPU_Ctrl_Base+0x11	
P_Tx1_Attribute:							.VDEF	P_PPU_Ctrl_Base+0x12
P_Tx1_Control:								.VDEF	P_PPU_Ctrl_Base+0x13
P_Tx1_N_PTR:								.VDEF	P_PPU_Ctrl_Base+0x14
P_Tx1_A_PTR:								.VDEF	P_PPU_Ctrl_Base+0x15
P_Tx2_X_Position:							.VDEF	P_PPU_Ctrl_Base+0x16	
P_Tx2_Y_Position:							.VDEF	P_PPU_Ctrl_Base+0x17	
P_Tx2_Attribute:							.VDEF	P_PPU_Ctrl_Base+0x18
P_Tx2_Control:								.VDEF	P_PPU_Ctrl_Base+0x19
P_Tx2_N_PTR:								.VDEF	P_PPU_Ctrl_Base+0x1A
P_Tx2_A_PTR:								.VDEF	P_PPU_Ctrl_Base+0x1B
P_V_Comp_Value:								.VDEF	P_PPU_Ctrl_Base+0x1C
P_V_Comp_Offset:							.VDEF	P_PPU_Ctrl_Base+0x1D
P_V_Comp_Step:								.VDEF	P_PPU_Ctrl_Base+0x1E
P_Segment_Tx1:								.VDEF	P_PPU_Ctrl_Base+0x20
P_Segment_Tx2:								.VDEF	P_PPU_Ctrl_Base+0x21
P_Segment_Sp:								.VDEF	P_PPU_Ctrl_Base+0x22
P_Segment_Tx3:								.VDEF	P_PPU_Ctrl_Base+0x23
P_Blending:									.VDEF	P_PPU_Ctrl_Base+0x2A
P_Segment_Tx1H:								.VDEF	P_PPU_Ctrl_Base+0x2B
P_Segment_Tx2H:								.VDEF	P_PPU_Ctrl_Base+0x2C
P_Segment_SpH:								.VDEF	P_PPU_Ctrl_Base+0x2D
P_Segment_Tx3H:								.VDEF	P_PPU_Ctrl_Base+0x2E
P_Fade_Control:								.VDEF	P_PPU_Ctrl_Base+0x30
P_Palette_Control:							.VDEF	P_PPU_Ctrl_Base+0x3A
P_Sp_Control:								.VDEF	P_PPU_Ctrl_Base+0x42
P_PPU_IRQ_Control:							.VDEF	P_PPU_Ctrl_Base+0x62	
P_PPU_IRQ_Status:							.VDEF	P_PPU_Ctrl_Base+0x63	
P_SPDMA_Source:								.VDEF	P_PPU_Ctrl_Base+0x70
P_SPDMA_Target:								.VDEF	P_PPU_Ctrl_Base+0x71
P_SPDMA_Number:								.VDEF	P_PPU_Ctrl_Base+0x72
P_HB_Ctrl:									.VDEF	P_PPU_Ctrl_Base+0x73	
P_HB_GO:									.VDEF	P_PPU_Ctrl_Base+0x74	
P_BLD_Color:								.VDEF	P_PPU_Ctrl_Base+0x7D
P_BLD_Color_En:								.VDEF	P_PPU_Ctrl_Base+0xD8		
P_PPU_RAM_Bank:								.VDEF	P_PPU_Ctrl_Base+0x7E	
P_PPU_Enable:								.VDEF	P_PPU_Ctrl_Base+0x7F	
P_Tx1_N_PTRH:								.VDEF	P_PPU_Ctrl_Base+0xB4	
P_Tx1_A_PTRH:								.VDEF	P_PPU_Ctrl_Base+0xB5	
P_Tx2_N_PTRH:								.VDEF	P_PPU_Ctrl_Base+0xB6
P_Tx2_A_PTRH:								.VDEF	P_PPU_Ctrl_Base+0xB7
P_Tx3_N_PTRH:								.VDEF	P_PPU_Ctrl_Base+0xB8	
P_Tx3_A_PTRH:								.VDEF	P_PPU_Ctrl_Base+0xB9
P_PPU_Free_Height:							.VDEF	P_PPU_Ctrl_Base+0xDB
P_PPU_Free_Width:							.VDEF	P_PPU_Ctrl_Base+0xDC	
P_RANDOM0:									.VDEF	P_PPU_Ctrl_Base+0xE0
P_RANDOM1:									.VDEF	P_PPU_Ctrl_Base+0xE1	
//PPU RAM
P_Tx_HVoffsetN:								.VDEF	0x7100
P_Tx3_CosineN:								.VDEF	0x7100
P_Tx3_SineN:								.VDEF	0x7101
P_HComp_ValueN:								.VDEF	0x7200
P_PaletteN:									.VDEF	0x7300
P_SpriteN_CharNum:							.VDEF	0x7400
P_SpriteN_X:								.VDEF	0x7401
P_SpriteN_Y:								.VDEF	0x7402
P_SpriteN_Attribute0:						.VDEF	0x7403
P_SpriteN_Attribute1:						.VDEF	0x7400
P_SpriteN_X1:								.VDEF 	0x7401
P_SpriteN_X2:								.VDEF 	0x7402
P_SpriteN_X3:								.VDEF 	0x7403


//////////////////////////////////////////////////
//  TFT Control Registers
//  Base Address Start from 0x7050
//////////////////////////////////////////////////
P_TFT_Ctrl:									.VDEF	P_TFT_Base+0x00
P_TFT_V_Width:								.VDEF	P_TFT_Base+0x01
P_TFT_VSync_Setup:							.VDEF	P_TFT_Base+0x02
P_TFT_V_Start:								.VDEF	P_TFT_Base+0x03
P_TFT_V_End:								.VDEF	P_TFT_Base+0x04
P_TFT_H_Width:								.VDEF	P_TFT_Base+0x05
P_TFT_HSync_Setup:							.VDEF	P_TFT_Base+0x06
P_TFT_H_Start:								.VDEF	P_TFT_Base+0x07
P_TFT_H_End:								.VDEF	P_TFT_Base+0x08
P_TFT_RGB_Ctrl:								.VDEF	P_TFT_Base+0x09
P_TFT_Status:								.VDEF	P_TFT_Base+0x0A
P_TFT_MemMode_WCmd:							.VDEF	P_TFT_Base+0x0B
P_TFT_MemMode_RCmd:							.VDEF	P_TFT_Base+0x0C	
P_TFT_INT_EN:								.VDEF	P_TFT_Base+0x12
P_TFT_INT_CLR:								.VDEF	P_TFT_Base+0x13

P_US_Ctrl:									.VDEF	P_TFT_Base+0x14
		.DEFINE		C_US_En			0x0001
		.DEFINE		C_US_LastPixel	0x0000
		.DEFINE		C_US_LastBlack	0x0002
P_US_Hscaling:								.VDEF	P_TFT_Base+0x15
P_US_Vscaling:								.VDEF	P_TFT_Base+0x16
P_US_Width:									.VDEF	P_TFT_Base+0x17
P_US_Height:								.VDEF	P_TFT_Base+0x18
P_US_Hoffset:								.VDEF	P_TFT_Base+0x19
P_US_Voffset:								.VDEF	P_TFT_Base+0x1A

P_TFT_V_Show_Start:							.VDEF	P_TFT_Base+0x1C
P_TFT_V_Show_End:							.VDEF	P_TFT_Base+0x1D
P_TFT_H_Show_Start:							.VDEF	P_TFT_Base+0x1E
P_TFT_H_Show_End:							.VDEF	P_TFT_Base+0x1F


////////////////////////////////////////
//  STN Control Registers
//  Base Address Start from 0x7080
////////////////////////////////////////
P_STN_Ctrl1:            					.VDEF	0x705F
P_STN_SEG:									.VDEF	P_STN_Ctrl_Base+0x00
P_STN_COM:									.VDEF	P_STN_Ctrl_Base+0x01
P_STN_PIC_SEG:								.VDEF	0x705E
P_STN_PIC_COM:								.VDEF	P_STN_Ctrl_Base+0x02
P_STN_CPWait:								.VDEF	P_STN_Ctrl_Base+0x03
P_STN_Ctrl2:								.VDEF	P_STN_Ctrl_Base+0x04
P_STN_GTG_SEG:   							.VDEF	P_STN_Ctrl_Base+0x05
P_STN_GTG_COM:   							.VDEF	P_STN_Ctrl_Base+0x06	


////////////////////////////////////////////////
//  System Control Registers
//  Base Address Start from 0x7800
////////////////////////////////////////////////
P_BodyID:                   				.VDEF	P_System_Ctrl_Base+0x00
P_PwrKey_State:								.VDEF	P_System_Ctrl_Base+0x02
		.DEFINE		C_PWR_High				0x0001
		.DEFINE 	C_PWR_Low				0x0000
P_SYS_Ctrl:									.VDEF	P_System_Ctrl_Base+0x03
		.DEFINE		C_SYSPW_ON				0x8000
		.DEFINE 	C_UEXCE_INT_Dis			0x0000
		.DEFINE 	C_UEXCE_INT_En			0x0200
.if (GPL95100UB + GPL95101UB)
		.DEFINE		C_ExtendScanTime_1		0x0000
		.DEFINE		C_ExtendScanTime_2		0x0080
		.DEFINE		C_ExtendScanTime_4		0x0180		
		.DEFINE		C_SPI_Improve1_En		0x0020	
.endif					
		.DEFINE 	C_ADC_Power_En			0x0008		
		.DEFINE 	C_ADC_LDO_En			0x0004		
		.DEFINE 	C_Halt_Wakeup_Reset		0x0000
		.DEFINE 	C_Halt_Wakeup_NextINS	0x0002
		.DEFINE 	C_CLK32K_Internal		0x0000
		.DEFINE 	C_CLK32K_External		0x0001
P_CLK_Ctrl0:								.VDEF	P_System_Ctrl_Base+0x04
P_CLK_Ctrl1:								.VDEF	P_System_Ctrl_Base+0x05
P_Reset_Flag:            					.VDEF	P_System_Ctrl_Base+0x06
		.DEFINE		C_PWRKEY_Flag			0x8000
		.DEFINE		C_WDT_Reset_Flag		0x0010
		.DEFINE		C_WDT_Error_Flag		0x0008
		.DEFINE		C_MPE_Error_Flag		0x0004
		.DEFINE		C_LVR_Reset_Flag		0x0001	
P_Clock_Ctrl:        						.VDEF	P_System_Ctrl_Base+0x07
		.DEFINE 	C_SYSCLK_SRC_Div1		0x0000
		.DEFINE 	C_SYSCLK_SRC_Div2		0x0001
		.DEFINE 	C_SYSCLK_SRC_Div4		0x0002
		.DEFINE 	C_SYSCLK_SRC_Div8		0x0003
		.DEFINE	 	C_SYSCLK_SRC_Div16		0x0004
		.DEFINE 	C_SYSCLK_SRC_Div32		0x0005
		.DEFINE 	C_SYSCLK_SRC_Div64		0x0006	
		.DEFINE 	C_SYSCLK_SRC_Div128		0x0007
		.DEFINE 	C_CLK96M_En				0x0008
		.DEFINE 	C_KeyChange_En			0x0200
		.DEFINE 	C_USB_CLK_Dis			0x2000
		.DEFINE 	C_CUP_Sel_CLK32K		0x4000
		.DEFINE 	C_PLL_Fast_En			0x8000			
P_LVR_Ctrl:                					.VDEF	P_System_Ctrl_Base+0x08
		.DEFINE		C_LVD_Ctrl				0x8000
		.DEFINE		C_LVR_OFF				0x0002
		.DEFINE		C_LVR_ON				0x0000
P_PM_Ctrl:                					.VDEF	P_System_Ctrl_Base+0x09
		.DEFINE		C_PWON_Hold200ms_En		0x0000
		.DEFINE		C_PWON_Hold200ms_Dis	0x4000	
		.DEFINE		C_LVR_Sel_2v1			0x3000
		.DEFINE		C_LVR_Sel_2v2			0x2000			
		.DEFINE		C_LVR_Sel_2v3			0x1000
		.DEFINE		C_LVR_Sel_2v4			0x0000
		.DEFINE		C_OVTEMP_Sel_95C		0x0000
		.DEFINE		C_OVTEMP_Sel_105C		0x0400
		.DEFINE		C_OVTEMP_Sel_115C		0x0800
		.DEFINE		C_OVTEMP_Sel_125C		0x0c00
		.DEFINE		C_ADC_LDO_3v0			0x0000
		.DEFINE		C_ADC_LDO_3v1			0x0040
		.DEFINE		C_ADC_LDO_3v2			0x0080
		.DEFINE		C_ADC_LDO_3v3			0x00c0
		.DEFINE		C_CTS_LDO_2v4			0x0000		
		.DEFINE		C_CTS_LDO_2v6			0x0010	
		.DEFINE		C_CTS_LDO_2v8			0x0020	
		.DEFINE		C_CTS_LDO_3v0			0x0030	
		.DEFINE		C_SYS3v3_LDO_3v0		0x0000
		.DEFINE		C_SYS3v3_LDO_3v1		0x0004
		.DEFINE		C_SYS3v3_LDO_3v2		0x0008
		.DEFINE		C_SYS3v3_LDO_3v3		0x000c
		.DEFINE		C_SYS1v8_LDO_1v8		0x0000
		.DEFINE		C_SYS1v8_LDO_2v0		0x0001
		.DEFINE		C_SYS1v8_LDO_1v6		0x0002
		.DEFINE		C_SYS1v8_LDO_1v4		0x0003				
P_WatchDog_Ctrl:        					.VDEF	P_System_Ctrl_Base+0x0A
		.DEFINE 	C_WatchDog_Dis			0x0000
		.DEFINE 	C_WatchDog_En			0x8000
		.DEFINE 	C_WDT_Reset_CPU_only	0x4000
		.DEFINE 	C_WDT_Reset_SYS			0x0000		
		.DEFINE 	C_WatchDog_Period_2S 	0x0000
		.DEFINE 	C_WatchDog_Period_1S 	0x0001	
		.DEFINE 	C_WatchDog_Period_0s5 	0x0002
		.DEFINE 	C_WatchDog_Period_0S25 	0x0003
		.DEFINE 	C_WatchDog_Period_0S125 0x0004	
		.DEFINE 	C_WatchDog_Period_62S5 	0x0005				
P_WatchDog_Clear:  							.VDEF	P_System_Ctrl_Base+0x0B
		.DEFINE		C_WDT_Clear				0xA005
P_WAIT:               						.VDEF	P_System_Ctrl_Base+0x0C
		.DEFINE		C_Enter_Wait			0x5005
P_HALT:             						.VDEF	P_System_Ctrl_Base+0x0D
		.DEFINE		C_Enter_Halt			0x500A
P_Power_State:								.VDEF	P_System_Ctrl_Base+0x0F
P_BankSwitch:								.VDEF	P_System_Ctrl_Base+0x10
P_PLL_Sel:									.VDEF	P_System_Ctrl_Base+0x17
		.DEFINE 	C_SPIF_CLK_Sel_Mask		0x3e00
		.DEFINE		C_PLL_Sel_Mask			0x001f	
P_PLLWaitCLK:								.VDEF	P_System_Ctrl_Base+0x18
		.DEFINE		C_X32K_WaitCLK			0x000a
		.DEFINE		C_Int32K_WaitCLK		0x04b0
P_Cache_Ctrl:               				.VDEF	P_System_Ctrl_Base+0x19
		.DEFINE		C_Cache_burst_En		0x0010
		.DEFINE		C_Cache_burst_Dis		0x0000
		.DEFINE		C_Cache_8words			0x0000
		.DEFINE		C_Cache_1kbytes			0x0004
		.DEFINE		C_Cache_2kbytes			0x0008
		.DEFINE		C_Cache_4kbytes			0x000c
		.DEFINE		C_Cache_Clear			0x0002
		.DEFINE		C_Cache_Clear_Flag		0x0002
		.DEFINE		C_Cache_En				0x0001
		.DEFINE		C_Cache_Dis				0x0000
P_Cache_HitRate:							.VDEF	P_System_Ctrl_Base+0x1A
P_SYS_Misc:									.VDEF	P_System_Ctrl_Base+0x1F
		.DEFINE		C_PWRKEY_Change_Flag	0x0080
		.DEFINE		C_Halt_LDO_1v8			0x0000
		.DEFINE		C_Halt_LDO_1v9			0x0010
		.DEFINE		C_Halt_LDO_1v4			0x0020
		.DEFINE		C_Halt_LDO_1v1			0x0030
		.DEFINE		C_OVTEMP_INT_En			0x0004
		.DEFINE		C_OVTEMP_INT_Dis		0x0000		
		.DEFINE		C_PWRKEY_ChangeINT_En	0x0002		
		.DEFINE		C_PWRKEY_ChangeINT_Dis	0x0000
P_Unexpect_Flag:							.VDEF	P_System_Ctrl_Base+0x25
.if (GPL95100UB + GPL95101UB)
P_SPI_Improve:								.VDEF	P_System_Ctrl_Base+0x40
		.DEFINE		C_SPI_Improve2_En		0x0020	
.endif

////////////////////////////////////////////////
//  I/O Port Control Registers
//  Base Address Start from 0x7860
////////////////////////////////////////////////
P_IOA_Data:                 				.VDEF	P_IOPort_Ctrl_Base+0x00
P_IOA_Buffer:                				.VDEF	P_IOPort_Ctrl_Base+0x01
P_IOA_Dir:                   				.VDEF	P_IOPort_Ctrl_Base+0x02
P_IOA_Attrib:                				.VDEF	P_IOPort_Ctrl_Base+0x03
P_IOA_Drv:									.VDEF	P_IOPort_Ctrl_Base+0x04
		.DEFINE		C_IOA_Power_5v0			0x0004
		.DEFINE		C_IOA_Power_3v3			0x0000
		.DEFINE		C_IOA_Driving_Mask		0x0003
P_IOA_Mux:									.VDEF	P_IOPort_Ctrl_Base+0x05
		.DEFINE		C_IOA_SPI1CS_GPIO		0x0040
		.DEFINE		C_IOA_SPI1CS_CSB		0x0000
		.DEFINE		C_IOA_SPI1_En			0x0020
		.DEFINE		C_IOA_SPI1_Dis			0x0000
		
.if (GPL95100UB+GPL95101UB)		
		.DEFINE		C_IOA_CCIROutput_Dis	0x0010
		.DEFINE		C_IOA_CCIROutput_En		0x0000
.endif		
		
		.DEFINE		C_IOA_Keyout_En			0x0008
		.DEFINE		C_IOA_Keyout_Dis		0x0000
		.DEFINE		C_IOA_EXTI0_En			0x0004
		.DEFINE		C_IOA_EXTI0_Dis			0x0000		
		.DEFINE		C_IOA_TFT_En			0x0002
		.DEFINE		C_IOA_TFT_Dis			0x0000			
		.DEFINE		C_IOA_SMT_En			0x0001		
		.DEFINE		C_IOA_SMT_Dis			0x0000	
P_IOA_Latch:								.VDEF	P_IOPort_Ctrl_Base+0x06
P_IOA_KeyChange_En:							.VDEF	P_IOPort_Ctrl_Base+0x07
P_IOB_Data:                  				.VDEF	P_IOPort_Ctrl_Base+0x08
P_IOB_Buffer:                				.VDEF	P_IOPort_Ctrl_Base+0x09
P_IOB_Dir:                  				.VDEF	P_IOPort_Ctrl_Base+0x0A
P_IOB_Attrib:                				.VDEF	P_IOPort_Ctrl_Base+0x0B
P_IOB_Drv:									.VDEF	P_IOPort_Ctrl_Base+0x0C
		.DEFINE		C_IOB_Power_5v0			0x0004
		.DEFINE		C_IOB_Power_3v3			0x0000
		.DEFINE		C_IOB_Driving_Mask		0x0003
P_IOB_Mux:                    				.VDEF	P_IOPort_Ctrl_Base+0x0D
		.DEFINE		C_IOB_SPI1CS_GPIO		0x0020
		.DEFINE		C_IOB_SPI1CS_CSB		0x0000
		.DEFINE		C_IOB_SPI1_En			0x0010
		.DEFINE		C_IOB_SPI1_Dis			0x0000
		.DEFINE		C_IOB_CCPB_En			0x0008
		.DEFINE		C_IOB_CCPB_Dis			0x0000		
		.DEFINE		C_IOB_TFT_En			0x0002
		.DEFINE		C_IOB_TFT_Dis			0x0000			
		.DEFINE		C_IOB_SMT_En			0x0001		
		.DEFINE		C_IOB_SMT_Dis			0x0000	
P_IOB_Latch:                 				.VDEF	P_IOPort_Ctrl_Base+0x0E
P_IOB_KeyChange_En:							.VDEF	P_IOPort_Ctrl_Base+0x0F

.if (GPL95100UA + GPL95100UB)
P_IOC_Data:                   				.VDEF	P_IOPort_Ctrl_Base+0x10
P_IOC_Buffer:                 				.VDEF	P_IOPort_Ctrl_Base+0x11
P_IOC_Dir:                    				.VDEF	P_IOPort_Ctrl_Base+0x12
P_IOC_Attrib:                				.VDEF	P_IOPort_Ctrl_Base+0x13
P_IOC_Drv:									.VDEF	P_IOPort_Ctrl_Base+0x14
		.DEFINE		C_IOC_NANDWP_High		0x0040
		.DEFINE		C_IOC_NANDWP_Low		0x0000
		.DEFINE		C_IOC_Driving_Mask		0x003f	
P_IOC_Mux:									.VDEF	P_IOPort_Ctrl_Base+0x15
.if (GPL95100UB+GPL95101UB)		
		.DEFINE		C_IOC_CCIROutput_Dis	0x2000
		.DEFINE		C_IOC_CCIROutput_En		0x0000
.endif	

		.DEFINE		C_IOC_I2C_En			0x1000
		.DEFINE		C_IOC_I2C_Dis			0x0000
		.DEFINE		C_IOC_Keyscan_En		0x0800
		.DEFINE		C_IOC_Keyscan_Dis		0x0000
		.DEFINE		C_IOC_NFCS_GPIO			0x0400
		.DEFINE		C_IOC_NFCS_CSB			0x0000
		.DEFINE		C_IOC_NFWP_GPIO			0x0200
		.DEFINE		C_IOC_NFWP_WPB			0x0000
		.DEFINE		C_IOC_TFT_Control_En	0x0100		
		.DEFINE		C_IOC_TFT_Control_Dis	0x0000
		.DEFINE		C_IOC_SPI0CS_GPIO		0x0080
		.DEFINE		C_IOC_SPI0CS_CSB		0x0000
		.DEFINE		C_IOC_NAND_En			0x0040
		.DEFINE		C_IOC_NAND_Dis			0x0000	
		.DEFINE		C_IOC_EXTI1_En			0x0020
		.DEFINE		C_IOC_EXTI1_Dis			0x0000
		.DEFINE		C_IOC_SPI0_En			0x0008
		.DEFINE		C_IOC_SPI0_Dis			0x0000
		.DEFINE		C_IOC_UART_En			0x0004
		.DEFINE		C_IOC_UART_Dis			0x0000	
		.DEFINE		C_IOC_TFT_En			0x0002
		.DEFINE		C_IOC_TFT_Dis			0x0000
		.DEFINE		C_IOC_SMT_En			0x0001		
		.DEFINE		C_IOC_SMT_Dis			0x0000
P_IOC_Latch:                  				.VDEF	P_IOPort_Ctrl_Base+0x16
P_IOC_KeyChange_En:							.VDEF	P_IOPort_Ctrl_Base+0x17
.endif 

P_IOD_Data:                   				.VDEF	P_IOPort_Ctrl_Base+0x18
P_IOD_Buffer:                	 			.VDEF	P_IOPort_Ctrl_Base+0x19
P_IOD_Dir:                    				.VDEF	P_IOPort_Ctrl_Base+0x1A
P_IOD_Attrib:                 				.VDEF	P_IOPort_Ctrl_Base+0x1B
P_IOD_Drv:									.VDEF	P_IOPort_Ctrl_Base+0x1C
P_IOD_Mux:									.VDEF	P_IOPort_Ctrl_Base+0x1D
P_IOE_Data:                   				.VDEF	P_IOPort_Ctrl_Base+0x20
P_IOE_Buffer:                 				.VDEF	P_IOPort_Ctrl_Base+0x21
P_IOE_Dir:                    				.VDEF	P_IOPort_Ctrl_Base+0x22
P_IOE_Attrib:                 				.VDEF	P_IOPort_Ctrl_Base+0x23
P_IOE_Drv:									.VDEF	P_IOPort_Ctrl_Base+0x24
		.DEFINE		C_IOE_Driving_Mask		0x0003
P_IOE_Mux:									.VDEF	P_IOPort_Ctrl_Base+0x25
		.DEFINE		C_IOE_UART_En			0x0008
		.DEFINE		C_IOE_UART_Dis			0x0000	
		.DEFINE		C_IOE_EXTI0_En			0x0004
		.DEFINE		C_IOE_EXTI0_Dis			0x0000
		.DEFINE		C_IOE_SMT_En			0x0001		
		.DEFINE		C_IOE_SMT_Dis			0x0000
P_IOE_Latch:								.VDEF	P_IOPort_Ctrl_Base+0x26
P_IOE_KeyChange_En:							.VDEF	P_IOPort_Ctrl_Base+0x27
P_IOF_Data:                   				.VDEF	P_IOPort_Ctrl_Base+0x28
P_IOF_Buffer:                 				.VDEF	P_IOPort_Ctrl_Base+0x29
P_IOF_Dir:                    				.VDEF	P_IOPort_Ctrl_Base+0x2A
P_IOF_Attrib:                 				.VDEF	P_IOPort_Ctrl_Base+0x2B
P_IOF_Drv:									.VDEF	P_IOPort_Ctrl_Base+0x2C
		.DEFINE		C_IOF_Driving_Mask		0x000f	
P_IOF_Mux:									.VDEF	P_IOPort_Ctrl_Base+0x2D
.if (GPL95100UB+GPL95101UB)		
		.DEFINE		C_IOF_CCIROutput_Dis	0x1000
		.DEFINE		C_IOF_CCIROutput_En		0x0000
.endif
		.DEFINE		C_IOF_SPI0_En			0x0800
		.DEFINE		C_IOF_SPI0_Dis			0x0000
		.DEFINE		C_IOF_Keyout_En			0x0400
		.DEFINE		C_IOF_Keyout_Dis		0x0000	
		.DEFINE		C_IOF_Keyscan_En		0x0200
		.DEFINE		C_IOF_Keyscan_Dis		0x0000
		.DEFINE		C_IOF_TFT_Control_En	0x0100		
		.DEFINE		C_IOF_TFT_Control_Dis	0x0000
		.DEFINE		C_IOF_SPICS_GPIO		0x0080
		.DEFINE		C_IOF_SPICS_CSB			0x0000
		.DEFINE		C_IOF_I2C_En			0x0040
		.DEFINE		C_IOF_I2C_Dis			0x0000
		.DEFINE		C_IOF_CTS_En			0x0020
		.DEFINE		C_IOF_CTS_Dis			0x0000
		.DEFINE		C_IOF_EXTI1_En			0x0010
		.DEFINE		C_IOF_EXTI1_Dis			0x0000				
		.DEFINE		C_IOF_UART_En			0x0008
		.DEFINE		C_IOF_UART_Dis			0x0000
		.DEFINE		C_IOF_SPI1_En			0x0004
		.DEFINE		C_IOF_SPI1_Dis			0x0000
		.DEFINE		C_IOF_TFT_En			0x0002
		.DEFINE		C_IOF_TFT_Dis			0x0000
		.DEFINE		C_IOF_SMT_En			0x0001		
		.DEFINE		C_IOF_SMT_Dis			0x0000
P_IOF_Latch:								.VDEF	P_IOPort_Ctrl_Base+0x2E
P_IOF_KeyChange_En:							.VDEF	P_IOPort_Ctrl_Base+0x2F


////////////////////////////////////////////////
//  NAND Flash Control Registers
//  Base Address Start from 0x7850
////////////////////////////////////////////////
P_NF_Ctrl:									.VDEF	P_NANDFlash_Base+0x00
P_NF_CMD:									.VDEF	P_NANDFlash_Base+0x01	
P_NF_AddrL:									.VDEF	P_NANDFlash_Base+0x02
P_NF_AddrH:									.VDEF	P_NANDFlash_Base+0x03
P_NF_Data:									.VDEF	P_NANDFlash_Base+0x04
P_NF_INT_Ctrl:								.VDEF	P_NANDFlash_Base+0x05
P_ECC_Ctrl:									.VDEF	P_NANDFlash_Base+0x07
P_ECC_LPRL_LB:								.VDEF	P_NANDFlash_Base+0x08
P_ECC_LPRH_LB:								.VDEF	P_NANDFlash_Base+0x09
P_ECC_CPR_LB:								.VDEF	P_NANDFlash_Base+0x0A
P_ECC_LPR_CKL_LB:							.VDEF	P_NANDFlash_Base+0x0B
P_ECC_LPR_CKH_LB:							.VDEF	P_NANDFlash_Base+0x0C
P_ECC_CPCKR_LB:								.VDEF	P_NANDFlash_Base+0x0D
P_ECC_ERR0_LB:								.VDEF	P_NANDFlash_Base+0x0E
P_ECC_ERR1_LB:								.VDEF	P_NANDFlash_Base+0x0F

P_CheckSUM0_LB:								.VDEF	0x7830
P_CheckSUM1_LB:								.VDEF	0x7831
P_CheckSUM0_HB:								.VDEF	0x7832
P_CheckSUM1_HB:								.VDEF	0x7833
P_ECC_LPRL_HB:								.VDEF	0x7848
P_ECC_LPRH_HB:								.VDEF	0x7849
P_ECC_CPR_HB:								.VDEF	0x784A
P_ECC_LPR_CKL_HB:							.VDEF	0x784B
P_ECC_LPR_CKH_HB:							.VDEF	0x784C
P_ECC_CPCKR_HB:								.VDEF	0x784D
P_ECC_ERR0_HB:								.VDEF	0x784E
P_ECC_ERR1_HB:								.VDEF	0x784F

P_BCH_Control:								.VDEF	P_NANDFlash_Base+0x06
P_BCH_Error:	        	 				.VDEF	P_NANDFlash_Base+0x08
P_BCH_Parity0:				  		  		.VDEF	P_NANDFlash_Base+0x09
P_BCH_Parity1: 		      	  				.VDEF	P_NANDFlash_Base+0x0A
P_BCH_Parity2:      						.VDEF	P_NANDFlash_Base+0x0B
P_BCH_Parity3:    		  	   				.VDEF	P_NANDFlash_Base+0x0C
P_BCH_Parity4:       						.VDEF	P_NANDFlash_Base+0x0D
P_BCH_Parity5:       						.VDEF	P_NANDFlash_Base+0x0E
P_BCH_Parity6:        						.VDEF	P_NANDFlash_Base+0x0F


////////////////////////////////////////////////
//  Interrupt Control Registers
//  Base Address Start from 0x78A0
////////////////////////////////////////////////
P_INT_Status1:             					.VDEF   P_Interrupt_Ctrl_Base+0x00
    .DEFINE		C_INT_EXT0_IF   			0x0001
    .DEFINE 	C_INT_EXT1_IF          		0x0002
    .DEFINE		C_INT_DMA_IF				0x0004
    .DEFINE		C_INT_USB_IF				0x0008
    .DEFINE 	C_INT_AUDAFIFOEmpty_IF  	0x0010
    .DEFINE 	C_INT_AUDBFIFOEmpty_IF 		0x0020
    .DEFINE		C_INT_ADCAutoSample_IF		0x0080	
    .DEFINE 	C_INT_FramePulse_IF	 		0x0200
	.DEFINE		C_INT_SPI0_IF				0x0400
    .DEFINE 	C_INT_UART_IF          		0x0800
    .DEFINE 	C_INT_OverTemperature_IF	0x1000
    .DEFINE		C_INT_PowerOnKey_IF			0x2000	
    .DEFINE 	C_INT_ADCReady_IF      		0x4000
    .DEFINE 	C_INT_Key_IF           		0x8000
P_INT_Status2:               				.VDEF   P_Interrupt_Ctrl_Base+0x01
    .DEFINE 	C_INT_MICADCAutoSample_IF 	0x0001
    .DEFINE 	C_INT_RTC_IF       			0x0002
    .DEFINE 	C_INT_SPI1_IF      			0x0004
    .DEFINE 	C_INT_NF_IF            		0x0010
	.DEFINE 	C_INT_I2C_IF 	       		0x0020
    .DEFINE 	C_INT_CTS_IF	        	0x0080
    .DEFINE 	C_INT_TimeBaseA_IF    		0x0100
    .DEFINE 	C_INT_TimeBaseB_IF     		0x0200
    .DEFINE 	C_INT_TimeBaseC_IF     		0x0400
    .DEFINE		C_INT_KeyScan_IF 			0x0800   
P_INT_Status3:          		 			.VDEF   P_Interrupt_Ctrl_Base+0x02
    .DEFINE 	C_INT_SPU_BeatIrq_IF   		0x0004       
    .DEFINE 	C_INT_UnExpIrq_IF      		0x0080
    .DEFINE 	C_INT_TMA_IF     			0x0100
    .DEFINE 	C_INT_TMB_IF     			0x0200
    .DEFINE 	C_INT_TMC_IF     			0x0400
    .DEFINE 	C_INT_TMD_IF     			0x0800
    .DEFINE 	C_INT_TME_IF     			0x1000
    .DEFINE 	C_INT_TMF_IF     			0x2000   
    .DEFINE 	C_INT_TMG_IF     			0x4000 
    .DEFINE 	C_INT_TMH_IF     			0x8000                    
P_INT_Priority1:            				.VDEF   P_Interrupt_Ctrl_Base+0x03
		.DEFINE 	C_KeyChange_IRQ5		0x0000
		.DEFINE 	C_KeyChange_FIQ			0x8000
		.DEFINE 	C_ADC_IRQ1				0x0000
		.DEFINE 	C_ADC_FIQ				0x4000				
		.DEFINE 	C_UART_IRQ3				0x0000
		.DEFINE		C_UART_FIQ				0x0800		
		.DEFINE 	C_SPI0_IRQ3				0x0000
		.DEFINE 	C_SPI0_FIQ				0x0400
		.DEFINE 	C_LCDFP_IRQ5			0x0000
		.DEFINE 	C_LCDFP_FIQ				0x0200						
		.DEFINE 	C_LineADCFifoFull_IRQ1	0x0000
		.DEFINE 	C_LineADCFifoFull_FIQ	0x0080	
		.DEFINE 	C_CHBFifoEmpty_IRQ0		0x0000
		.DEFINE 	C_CHBFifoEmpty_FIQ		0x0020
		.DEFINE 	C_CHAFifoEmpty_IRQ0		0x0000
		.DEFINE 	C_CHAFifoEmpty_FIQ		0x0010	
		.DEFINE 	C_USB_IRQ3				0x0000
		.DEFINE 	C_USB_FIQ				0x0008
		.DEFINE 	C_DMADone_IRQ3			0x0000
		.DEFINE 	C_DMADone_FIQ			0x0004
		.DEFINE 	C_EXTI1_IRQ2			0x0000
		.DEFINE 	C_EXTI1_FIQ				0x0002																
		.DEFINE 	C_EXTI0_IRQ2			0x0000
		.DEFINE 	C_EXTI0_FIQ				0x0001	
P_INT_Priority2:             				.VDEF   P_Interrupt_Ctrl_Base+0x04
		.DEFINE 	C_TimeBaseC_IRQ6		0x0000	
		.DEFINE 	C_TimeBaseB_IRQ6		0x0000	
		.DEFINE 	C_TimeBaseA_IRQ6		0x0000
		.DEFINE 	C_CTS_IRQ6				0x0000
		.DEFINE 	C_CTS_FIQ				0x0080			
		.DEFINE 	C_I2C_IRQ5				0x0000
		.DEFINE 	C_I2C_FIQ				0x0020
		.DEFINE 	C_NANDIF_IRQ5			0x0000
		.DEFINE 	C_NANDIF_FIQ			0x0010
		.DEFINE 	C_SPI1_IRQ3				0x0000
		.DEFINE 	C_SPI1_FIQ				0x0004							
		.DEFINE 	C_RTC_IRQ7				0x0000
		.DEFINE 	C_RTC_FIQ				0x0002	
		.DEFINE 	C_MicFifoFull_IRQ1		0x0000
		.DEFINE 	C_MicFifoFull_FIQ		0x0001	
P_INT_Priority3:         					.VDEF   P_Interrupt_Ctrl_Base+0x05 
		.DEFINE 	C_TMH_IRQ4				0x0000
		.DEFINE 	C_TMH_FIQ				0x8000	 
		.DEFINE 	C_TMG_IRQ4				0x0000
		.DEFINE 	C_TMG_FIQ				0x4000	 
		.DEFINE 	C_TMF_IRQ4				0x0000
		.DEFINE 	C_TMF_FIQ				0x2000	 
		.DEFINE 	C_TME_IRQ4				0x0000
		.DEFINE 	C_TME_FIQ				0x1000	 
		.DEFINE 	C_TMD_IRQ4				0x0000
		.DEFINE 	C_TMD_FIQ				0x0800	 
		.DEFINE 	C_TMC_IRQ4				0x0000
		.DEFINE 	C_TMC_FIQ				0x0400	 	
		.DEFINE 	C_TMB_IRQ4				0x0000
		.DEFINE 	C_TMB_FIQ				0x0200	 		
		.DEFINE 	C_TMA_IRQ4				0x0000
		.DEFINE 	C_TMA_FIQ				0x0100	 
		.DEFINE 	C_Unexpect_IRQ4			0x0000
		.DEFINE 	C_Unexpect_FIQ			0x0080
		.DEFINE 	C_BEAT_IRQ4				0x0000
		.DEFINE 	C_BEAT_FIQ				0x0004																							         
P_MINT_Ctrl:                  				.VDEF   P_Interrupt_Ctrl_Base+0x06
		.DEFINE 	C_Exti1FallingEdge		0x0000
		.DEFINE 	C_Exti1RisingEdge		0x0020
		.DEFINE 	C_Exti0FallingEdge		0x0000
		.DEFINE 	C_Exti0RisingEdge		0x0010	
		.DEFINE 	C_Exti1En				0x0002
		.DEFINE 	C_Exti0En				0x0001				
P_IOAB_KCIEN:								.VDEF   P_Interrupt_Ctrl_Base+0x07
P_IOC_KCIEN:								.VDEF   P_Interrupt_Ctrl_Base+0x08
P_IOE_KCIEN:								.VDEF   P_Interrupt_Ctrl_Base+0x09
P_IOF_KCIEN:								.VDEF   P_Interrupt_Ctrl_Base+0x0A
P_IOAB_KCIFC:								.VDEF   P_Interrupt_Ctrl_Base+0x0B
P_IOC_KCIFC:								.VDEF   P_Interrupt_Ctrl_Base+0x0C
P_IOE_KCIFC:								.VDEF   P_Interrupt_Ctrl_Base+0x0D
P_IOF_KCIFC:								.VDEF   P_Interrupt_Ctrl_Base+0x0E


////////////////////////////////////////////////
//  TimeBase Control Registers
//  Base Address Start from 0x78B0
////////////////////////////////////////////////
P_TimeBaseA_Ctrl:          					.VDEF   P_TimeBase_Ctrl_Base+0x00
		.DEFINE 	C_TimeBaseAFlag			0x8000
		.DEFINE 	C_TimeBaseAIntEn		0x4000
		.DEFINE 	C_TimeBaseAEn			0x2000
		.DEFINE 	C_TimeBaseADis			0x0000		
		.DEFINE 	C_TimeBaseA_4Hz			0x0003
		.DEFINE 	C_TimeBaseA_2Hz			0x0002
		.DEFINE 	C_TimeBaseA_1Hz			0x0001			
P_TimeBaseB_Ctrl:      						.VDEF   P_TimeBase_Ctrl_Base+0x01
		.DEFINE 	C_TimeBaseBFlag			0x8000
		.DEFINE 	C_TimeBaseBIntEn		0x4000
		.DEFINE 	C_TimeBaseBEn			0x2000
		.DEFINE 	C_TimeBaseBDis			0x0000			
		.DEFINE 	C_TimeBaseB_64Hz		0x0003
		.DEFINE 	C_TimeBaseB_32Hz		0x0002
		.DEFINE 	C_TimeBaseB_16Hz		0x0001	
		.DEFINE 	C_TimeBaseB_8Hz			0x0000			
P_TimeBaseC_Ctrl:          					.VDEF   P_TimeBase_Ctrl_Base+0x02
		.DEFINE 	C_TimeBaseCFlag			0x8000
		.DEFINE 	C_TimeBaseCIntEn		0x4000
		.DEFINE 	C_TimeBaseCEn			0x2000
		.DEFINE 	C_TimeBaseCDis			0x0000			
		.DEFINE 	C_TimeBaseC_1024Hz		0x0003
		.DEFINE 	C_TimeBaseC_512Hz		0x0002
		.DEFINE 	C_TimeBaseC_256Hz		0x0001
		.DEFINE 	C_TimeBaseC_128Hz		0x0000				
P_TimeBase_Reset:         					.VDEF   P_TimeBase_Ctrl_Base+0x08


////////////////////////////////////////////////
//  I2C Control Registers
//  Base Address Start from 0x78C0
////////////////////////////////////////////////
P_I2C_Ctrl:									.VDEF	P_I2C_Ctrl_Base+0x00
		.DEFINE 	C_I2C_ACK_Disable		0x0000
		.DEFINE 	C_I2C_ACK_Enable		0x0080
		.DEFINE		C_I2C_INT_Disable		0x0000
		.DEFINE		C_I2C_INT_Enable		0x0020
		.DEFINE		C_I2C_INT_Flag			0x0010
		.DEFINE 	C_I2C_CLK_LSB			0x0007
P_I2C_Status:								.VDEF	P_I2C_Ctrl_Base+0x01
		.DEFINE 	C_I2C_Mode_SlaveRX		0x0000
		.DEFINE 	C_I2C_Mode_SlaveTX		0x0040
		.DEFINE 	C_I2C_Mode_MasterRX		0x0080
		.DEFINE 	C_I2C_Mode_MasterTX		0x00C0
		.DEFINE 	C_I2C_Stop				0x0000
		.DEFINE 	C_I2C_Start				0x0020
		.DEFINE 	C_I2C_Busy				0x0020
		.DEFINE 	C_I2C_DataOut_Disable	0x0000
		.DEFINE 	C_I2C_DataOut_Enable	0x0010
		.DEFINE 	C_I2C_Bus_OK			0x0000
		.DEFINE 	C_I2C_Bus_Fail			0x0008
		.DEFINE 	C_I2C_Addr_Match		0x0004
		.DEFINE 	C_I2C_Addr_Zero			0x0002
		.DEFINE 	C_I2C_ACK				0x0000
		.DEFINE 	C_I2C_NACK				0x0001
P_I2C_Address:								.VDEF	P_I2C_Ctrl_Base+0x02
P_I2C_Data:									.VDEF	P_I2C_Ctrl_Base+0x03
P_I2C_Debounce:								.VDEF	P_I2C_Ctrl_Base+0x04
P_I2C_Clk:									.VDEF	P_I2C_Ctrl_Base+0x05
P_I2C_MISC:									.VDEF	P_I2C_Ctrl_Base+0x06
		.DEFINE		C_I2C_En				0x0001
		.DEFINE		C_I2C_Dis				0x0000

////////////////////////////////////////
//  Timer Control Registers
//      Base Address Start from 0x78C0
////////////////////////////////////////
P_TimerA_Ctrl:           					.VDEF   P_Timer_Ctrl_Base+0x00
		.DEFINE 	C_TimerFlag				0x8000
		.DEFINE 	C_TimerIntEn			0x4000	
		.DEFINE 	C_TimerEn				0x2000
		.DEFINE 	C_TimerEXTI0_16Rising	0x0C00
		.DEFINE 	C_TimerEXTI0_4Rising	0x0800				
		.DEFINE 	C_TimerEXTI0_Rising		0x0400		
		.DEFINE 	C_TimerEXTI0_Falling	0x0000
		.DEFINE 	C_TimerEXTI1_16Rising	0x0300
		.DEFINE 	C_TimerEXTI1_4Rising	0x0200				
		.DEFINE 	C_TimerEXTI1_Rising		0x0100		
		.DEFINE 	C_TimerEXTI1_Falling	0x0000		
		.DEFINE 	C_TimerSrcB_Mask		0x0070
			.DEFINE 	C_TimerSrcB_2048Hz		0x0000		
			.DEFINE 	C_TimerSrcB_1024Hz		0x0010			
			.DEFINE 	C_TimerSrcB_256Hz		0x0020	
			.DEFINE 	C_TimerSrcB_TB1			0x0030			
			.DEFINE 	C_TimerSrcB_TB0			0x0040			
			.DEFINE 	C_TimerSrcB_Low			0x0050	
			.DEFINE 	C_TimerSrcB_High		0x0060			
			.DEFINE 	C_TimerSrcB_IOD13		0x0070				
		.DEFINE 	C_TimerSrcA_Mask		0x000F
			.DEFINE 	C_TimerSrcA_SYSdiv2		0x0000
			.DEFINE 	C_TimerSrcA_SYSdiv256	0x0001
			.DEFINE 	C_TimerSrcA_32768Hz		0x0002
			.DEFINE 	C_TimerSrcA_8192Hz		0x0003
			.DEFINE 	C_TimerSrcA_4096Hz		0x0004
			.DEFINE 	C_TimerSrcA_High		0x0005
			.DEFINE 	C_TimerSrcA_TMNext		0x0006
			.DEFINE 	C_TimerSrcA_IOD12		0x0007
			.DEFINE 	C_TimerSrcA_Low			0x0008			
P_TimerA_CCP_Ctrl:            				.VDEF   P_Timer_Ctrl_Base+0x01			
		.DEFINE 	C_Capture_En			0x4000
		.DEFINE		C_Capture_Falling		0x0000
		.DEFINE		C_Capture_Rising		0x0100
		.DEFINE 	C_Comparison_En			0x8000	
		.DEFINE		C_Comparison_HiPulse	0x0000			
		.DEFINE		C_Comparison_LoPulse	0x0010
		.DEFINE		C_Comparison_Unaffect	0x0020
		.DEFINE 	C_PWM_En				0xC000
		.DEFINE 	C_PWM_HiPulse			0x0000
		.DEFINE 	C_PWM_LoPulse			0x0001
		.DEFINE 	C_BAM_En				0xC000	
		.DEFINE 	C_BAM_LoPulse			0x0002
		.DEFINE 	C_BAM_HiPulse			0x0003						
P_TimerA_Preload:            				.VDEF   P_Timer_Ctrl_Base+0x02
P_TimerA_BAM_Cycle:      					.VDEF   P_Timer_Ctrl_Base+0x02
P_TimerA_CCP_Reg:         					.VDEF   P_Timer_Ctrl_Base+0x03
P_TimerA_PWM_Duty:							.VDEF   P_Timer_Ctrl_Base+0x03
P_TimerA_BAM_Data:         					.VDEF   P_Timer_Ctrl_Base+0x03
P_TimerA_UpCount:		        			.VDEF   P_Timer_Ctrl_Base+0x04

P_TimerB_Ctrl:          					.VDEF   P_Timer_Ctrl_Base+0x08
P_TimerB_CCP_Ctrl:        					.VDEF   P_Timer_Ctrl_Base+0x09
P_TimerB_Preload:       					.VDEF   P_Timer_Ctrl_Base+0x0A
P_TimerB_BAM_Cycle:      					.VDEF   P_Timer_Ctrl_Base+0x0A
P_TimerB_CCP_Reg:    						.VDEF   P_Timer_Ctrl_Base+0x0B
P_TimerB_PWM_Duty:							.VDEF   P_Timer_Ctrl_Base+0x0B
P_TimerB_BAM_Data:      					.VDEF   P_Timer_Ctrl_Base+0x0B
P_TimerB_UpCount:  		        			.VDEF   P_Timer_Ctrl_Base+0x0C

P_TimerC_Ctrl:            					.VDEF   P_Timer_Ctrl_Base+0x10
P_TimerC_CCP_Ctrl:         					.VDEF   P_Timer_Ctrl_Base+0x11
P_TimerC_Preload:          					.VDEF   P_Timer_Ctrl_Base+0x12
P_TimerC_BAM_Cycle:       					.VDEF   P_Timer_Ctrl_Base+0x12
P_TimerC_CCP_Reg:         					.VDEF   P_Timer_Ctrl_Base+0x13
P_TimerC_PWM_Duty:							.VDEF   P_Timer_Ctrl_Base+0x13
P_TimerC_BAM_Data:         					.VDEF   P_Timer_Ctrl_Base+0x13
P_TimerC_UpCount:          					.VDEF   P_Timer_Ctrl_Base+0x14

P_TimerD_Ctrl:               				.VDEF   P_Timer_Ctrl_Base+0x18
P_TimerD_CCP_Ctrl:           				.VDEF   P_Timer_Ctrl_Base+0x19
P_TimerD_Preload:            				.VDEF   P_Timer_Ctrl_Base+0x1A
P_TimerD_BAM_Cycle:        					.VDEF   P_Timer_Ctrl_Base+0x1A
P_TimerD_CCP_Reg:         					.VDEF   P_Timer_Ctrl_Base+0x1B
P_TimerD_PWM_Duty:         					.VDEF   P_Timer_Ctrl_Base+0x1B
P_TimerD_BAM_Data:          				.VDEF   P_Timer_Ctrl_Base+0x1B
P_TimerD_UpCount:  		  					.VDEF   P_Timer_Ctrl_Base+0x1C

P_TimerE_Ctrl:              				.VDEF   P_Timer_Ctrl_Base+0x20
P_TimerE_CCP_Ctrl:       					.VDEF   P_Timer_Ctrl_Base+0x22
P_TimerE_Preload:       					.VDEF   P_Timer_Ctrl_Base+0x24
P_TimerE_BAM_Cycle:      					.VDEF   P_Timer_Ctrl_Base+0x24
P_TimerE_UpCount:    						.VDEF   P_Timer_Ctrl_Base+0x2A

P_TimerF_Ctrl:              				.VDEF   P_Timer_Ctrl_Base+0x21
P_TimerF_CCP_Ctrl:          				.VDEF   P_Timer_Ctrl_Base+0x23
P_TimerF_Preload:           				.VDEF   P_Timer_Ctrl_Base+0x25
P_TimerF_BAM_Cycle:         				.VDEF   P_Timer_Ctrl_Base+0x25
P_TimerF_UpCount:  		        			.VDEF   P_Timer_Ctrl_Base+0x2B

P_TimerEF_CCP4_Reg:          				.VDEF   P_Timer_Ctrl_Base+0x26
P_TimerE_BAM_Data:          				.VDEF   P_Timer_Ctrl_Base+0x26
P_TimerEF_CCP5_Reg:         				.VDEF   P_Timer_Ctrl_Base+0x27
P_TimerF_BAM_Data:           				.VDEF   P_Timer_Ctrl_Base+0x27
P_TimerEF_CCP6_Reg:         				.VDEF   P_Timer_Ctrl_Base+0x28
P_TimerEF_CCP7_Reg:         				.VDEF   P_Timer_Ctrl_Base+0x29
P_TimerEF_CCP_Sel:          				.VDEF   P_Timer_Ctrl_Base+0x2C

P_TimerG_Ctrl:              				.VDEF   0x78E0
P_TimerG_Preload:         					.VDEF   0x78E2
P_TimerG_UpCount:		        			.VDEF   0x78E4
P_TimerH_Ctrl:             					.VDEF   0x78E8
P_TimerH_Preload:           				.VDEF   0x78EA
P_TimerH_UpCount:  		        			.VDEF   0x78EC


////////////////////////////////////////////////
//  Audio Output Control Registers
//  Base Address Start from 0x78F0
////////////////////////////////////////////////
P_CHA_Ctrl:             					.VDEF   P_Audio_Ctrl_Base+0x00
		.DEFINE 	C_AUDIO_CascadeEn			0x0004		
		.DEFINE 	C_AUDIO_DAC_1CH				0x0080
		.DEFINE 	C_AUDIO_DAC_2CH				0x0000	
		.DEFINE 	C_AUDIO_AMPNegative_En		0x0200
		.DEFINE 	C_AUDIO_AMPNegative_Dis		0x0000												
		.DEFINE 	C_AUDIO_AMPPositive_En		0x0400
		.DEFINE 	C_AUDIO_AMPPositive_Dis		0x0000
		.DEFINE 	C_AUDIO_Sign_En				0x0800
		.DEFINE 	C_AUDIO_DACB_En				0x1000								
		.DEFINE 	C_AUDIO_CHA_En				0x2000			
		.DEFINE 	C_AUDIO_CHA_FIFOEmpty_En	0x4000		
		.DEFINE 	C_AUDIO_CHA_FIFOEmpty_Flag	0x8000	
P_CHA_Data:              					.VDEF   P_Audio_Ctrl_Base+0x01
P_CHA_FIFO:                					.VDEF   P_Audio_Ctrl_Base+0x02
		.DEFINE 	C_AUDIO_FIFO_Reset			0x0100
		.DEFINE 	C_AUDIO_FIFO_UnderRun		0x4000		
		.DEFINE 	C_AUDIO_FIFO_Full			0x8000
P_CHB_Ctrl:                					.VDEF   P_Audio_Ctrl_Base+0x08
		.DEFINE 	C_AUDIO_Stereo				0x0000
		.DEFINE 	C_AUDIO_Mono				0x0400
		.DEFINE 	C_AUDIO_UseCHAConfig		0x0800
		.DEFINE 	C_AUDIO_UseCHAFreq			0x1000	
		.DEFINE 	C_AUDIO_CHB_En				0x2000	
		.DEFINE 	C_AUDIO_CHB_FIFOEmpty_En	0x4000		
		.DEFINE 	C_AUDIO_CHB_FIFOEmpty_Flag	0x8000	
P_CHB_Data:                					.VDEF   P_Audio_Ctrl_Base+0x09
P_CHB_FIFO:                					.VDEF   P_Audio_Ctrl_Base+0x0A


/////////////////////////////////////////////////
//  UART Control Registers
//  Base Address Start from 0x7900
/////////////////////////////////////////////////
P_UART_Data:                				.VDEF   P_UART_Ctrl_Base+0x00
P_UART_RXStatus:            				.VDEF   P_UART_Ctrl_Base+0x01
P_UART_Ctrl:                				.VDEF   P_UART_Ctrl_Base+0x02
		.DEFINE 	C_UART_RxIntEn			0x8000
		.DEFINE 	C_UART_TxIntEn			0x4000	
		.DEFINE 	C_UART_RxTimeoutIntEn	0x2000					
		.DEFINE 	C_UART_En				0x1000
		.DEFINE 	C_UART_ModenIntEn		0x0800	
		.DEFINE 	C_UART_Data_5bit		0x0000
		.DEFINE 	C_UART_Data_6bit		0x0020											
		.DEFINE 	C_UART_Data_7bit		0x0040
		.DEFINE 	C_UART_Data_8bit		0x0060
		.DEFINE 	C_UART_FifoEn			0x0010	
		.DEFINE 	C_UART_Stop_1bit		0x0000	
		.DEFINE 	C_UART_Stop_2bit		0x0008
		.DEFINE 	C_UART_ParityODD		0x0000
		.DEFINE 	C_UART_ParityEVEN		0x0004
		.DEFINE 	C_UART_ParityEn			0x0002
		.DEFINE 	C_UART_NoParity			0x0000																											
		.DEFINE 	C_UART_SendBreak		0x0001
		.DEFINE 	C_UART_Normal			0x0000								
P_UART_BaudRate:            				.VDEF   P_UART_Ctrl_Base+0x03
P_UART_Status:              				.VDEF   P_UART_Ctrl_Base+0x04
		.DEFINE 	C_UART_RxIntFlag		0x8000
		.DEFINE 	C_UART_TxIntFlag		0x4000	
		.DEFINE 	C_UART_RxTimeourIntFlag	0x2000	
		.DEFINE 	C_UART_TxFifoEmpty		0x0080	
		.DEFINE 	C_UART_RxFifoFull		0x0040	
		.DEFINE 	C_UART_TxFifoFull		0x0020									
		.DEFINE 	C_UART_RxFifoEmpty		0x0010	
		.DEFINE 	C_UART_BusyFlag			0x0008															
P_UART_FIFO:                  				.VDEF   P_UART_Ctrl_Base+0x05
P_UART_TXDelay:								.VDEF	P_UART_Ctrl_Base+0x06


/////////////////////////////////////////////////
//  RTC Control Regsiters
//  Base Address Start from 0x79F0
/////////////////////////////////////////////////
P_RTC_Ctrl:               					.VDEF   P_RTC_Ctrl_Base+0x00
		.DEFINE		C_RTC_SerialIF_En		0x0001
P_RTC_Addr:              					.VDEF   P_RTC_Ctrl_Base+0x01       
P_RTC_WriteData:             				.VDEF   P_RTC_Ctrl_Base+0x02
P_RTC_Request:             					.VDEF   P_RTC_Ctrl_Base+0x03
		.DEFINE		C_RTC_Read_Request		0x0002
		.DEFINE		C_RTC_Write_Request		0x0001	
P_RTC_Ready:								.VDEF	P_RTC_Ctrl_Base+0x04
		.DEFINE		C_RTC_Ready_Flag		0x0001	
P_RTC_ReadData:								.VDEF   P_RTC_Ctrl_Base+0x05
P_RTC_ClkDiv:								.VDEF   P_RTC_Ctrl_Base+0x0B


/////////////////////////////////////////////////
//  SPI Control Registers
//  Base Address Start from 0x7920
/////////////////////////////////////////////////
P_SPI1_Ctrl:                  				.VDEF   P_SPI_Ctrl_Base+0x00
		.DEFINE 	C_SPI1_Disable			0x0000
		.DEFINE 	C_SPI1_Enable			0x8000
		.DEFINE		C_SPI1_LBM_Normal		0x0000
		.DEFINE		C_SPI1_LBM_Enable		0x2000	
		.DEFINE 	C_SPI1_Reset			0x0800
		.DEFINE		C_SPI1_Mode				0x0100
		.DEFINE 	C_SPI1_MasterMode		0x0000
		.DEFINE 	C_SPI1_SlaveMode  		0x0100
		.DEFINE 	C_SPI1_Clock_Phase		0x0020
		.DEFINE 	C_SPI1_Clock_Phase_Normal	0x0000
		.DEFINE 	C_SPI1_Clock_Phase_Shift	0x0020
		.DEFINE		C_SPI1_Clock_Pol		0x0010
		.DEFINE 	C_SPI1_Clock_Pol_Normal		0x0000
		.DEFINE 	C_SPI1_Clock_Pol_Inverse	0x0010
		.DEFINE 	C_SPI1_SCK_SEL			0x0007
		.DEFINE 	C_SPI1_SCK_SYSCLK_Div_2		0x0000
		.DEFINE 	C_SPI1_SCK_SYSCLK_Div_4		0x0001
		.DEFINE 	C_SPI1_SCK_SYSCLK_Div_8		0x0002
		.DEFINE 	C_SPI1_SCK_SYSCLK_Div_16	0x0003
		.DEFINE 	C_SPI1_SCK_SYSCLK_Div_32	0x0004
		.DEFINE 	C_SPI1_SCK_SYSCLK_Div_64	0x0005
		.DEFINE 	C_SPI1_SCK_SYSCLK_Div_128	0x0006
P_SPI1_TXStatus:              				.VDEF   P_SPI_Ctrl_Base+0x01
		.DEFINE 	C_SPI1_TX_INT_Flag		0x8000
		.DEFINE 	C_SPI1_TX_INT_DIS		0x0000
		.DEFINE 	C_SPI1_TX_INT_EN		0x4000
		.DEFINE 	C_SPI1_TX_FIFO_Level	0x0070
		.DEFINE 	C_SPI1_TX_FIFO_Level_0	0x0000
		.DEFINE 	C_SPI1_TX_FIFO_Level_1	0x0010
		.DEFINE 	C_SPI1_TX_FIFO_Level_2	0x0020
		.DEFINE 	C_SPI1_TX_FIFO_Level_3	0x0030
		.DEFINE 	C_SPI1_TX_FIFO_Level_4	0x0040
		.DEFINE 	C_SPI1_TX_FIFO_Level_5	0x0050
		.DEFINE 	C_SPI1_TX_FIFO_Level_6	0x0060
		.DEFINE 	C_SPI1_TX_FIFO_Level_7	0x0070
		.DEFINE		C_SPI1_TX_Flag			0x0007
P_SPI1_TXData:	          					.VDEF   P_SPI_Ctrl_Base+0x02
P_SPI1_RXStatus:         					.VDEF   P_SPI_Ctrl_Base+0x03
		.DEFINE 	C_SPI1_RX_INT_Flag		0x8000
		.DEFINE 	C_SPI1_RX_INT_DIS		0x0000
		.DEFINE 	C_SPI1_RX_INT_EN		0x4000
		.DEFINE 	C_SPI1_RX_BUF_Full		0x0200
		.DEFINE 	C_SPI1_RX_BUF_OVER_ERROR	0x0100
		.DEFINE 	C_SPI1_RX_FIFO_Level	0x0070
		.DEFINE 	C_SPI1_RX_FIFO_Level_1	0x0000
		.DEFINE 	C_SPI1_RX_FIFO_Level_2	0x0010
		.DEFINE 	C_SPI1_RX_FIFO_Level_3	0x0020
		.DEFINE 	C_SPI1_RX_FIFO_Level_4	0x0030
		.DEFINE 	C_SPI1_RX_FIFO_Level_5	0x0040
		.DEFINE 	C_SPI1_RX_FIFO_Level_6	0x0050
		.DEFINE 	C_SPI1_RX_FIFO_Level_7	0x0060
		.DEFINE 	C_SPI1_RX_FIFO_Level_8	0x0070
		.DEFINE		C_SPI1_RX_Flag			0x0007
P_SPI1_RXData:   	       					.VDEF   P_SPI_Ctrl_Base+0x04
P_SPI1_Misc:	   	      					.VDEF   P_SPI_Ctrl_Base+0x05
		.DEFINE		C_SPI1_FIFO_Full_Mode		0x0200
		.DEFINE		C_SPI1_FIFO_Full_Skipped	0x0000
		.DEFINE		C_SPI1_FIFO_Full_Overwrite	0x0200
		.DEFINE		C_SPI1_FIFO_Normal_Mode		0x0000
		.DEFINE		C_SPI1_FIFO_Smart_Mode	0x0100
		.DEFINE		C_SPI1_Busy_Flag		0x0010
		.DEFINE		C_SPI1_RX_Full_Flag		0x0008
		.DEFINE		C_SPI1_RX_NonEmpty_Flag	0x0004
		.DEFINE		C_SPI1_TX_NonFull_Flag	0x0002
		.DEFINE		C_SPI1_TX_Empty_Flag	0x0001	


/////////////////////////////////////////////////
//  SPI0 Control Registers
//  Base Address Start from 0x7920
/////////////////////////////////////////////////
P_SPI0_Ctrl:              					.VDEF   P_SPI_Ctrl_Base+0x20
		.DEFINE 	C_SPI0_Disable			0x0000
		.DEFINE 	C_SPI0_Enable			0x8000
		.DEFINE		C_SPI0_LBM_Normal		0x0000
		.DEFINE		C_SPI0_LBM_Enable		0x2000		
		.DEFINE 	C_SPI0_Reset			0x0800
		.DEFINE		C_SPI0_Mode				0x0100
		.DEFINE 	C_SPI0_MasterMode		0x0000
		.DEFINE 	C_SPI0_SlaveMode  		0x0100
		.DEFINE 	C_SPI0_Clock_Phase		0x0020
		.DEFINE 	C_SPI0_Clock_Phase_Normal	0x0000
		.DEFINE 	C_SPI0_Clock_Phase_Shift	0x0020
		.DEFINE		C_SPI0_Clock_Pol		0x0010
		.DEFINE 	C_SPI0_Clock_Pol_Normal		0x0000
		.DEFINE 	C_SPI0_Clock_Pol_Inverse	0x0010
		.DEFINE 	C_SPI0_SCK_SEL			0x0007
		.DEFINE 	C_SPI0_SCK_SYSCLK_Div_2		0x0000
		.DEFINE 	C_SPI0_SCK_SYSCLK_Div_4		0x0001
		.DEFINE 	C_SPI0_SCK_SYSCLK_Div_8		0x0002
		.DEFINE 	C_SPI0_SCK_SYSCLK_Div_16	0x0003
		.DEFINE 	C_SPI0_SCK_SYSCLK_Div_32	0x0004
		.DEFINE 	C_SPI0_SCK_SYSCLK_Div_64	0x0005
		.DEFINE 	C_SPI0_SCK_SYSCLK_Div_128	0x0006	
P_SPI0_TXStatus:           					.VDEF   P_SPI_Ctrl_Base+0x21
		.DEFINE 	C_SPI0_TX_INT_Flag		0x8000
		.DEFINE 	C_SPI0_TX_INT_DIS		0x0000
		.DEFINE 	C_SPI0_TX_INT_EN		0x4000
		.DEFINE 	C_SPI0_TX_FIFO_Level	0x0070
		.DEFINE 	C_SPI0_TX_FIFO_Level_0	0x0000
		.DEFINE 	C_SPI0_TX_FIFO_Level_1	0x0010
		.DEFINE 	C_SPI0_TX_FIFO_Level_2	0x0020
		.DEFINE 	C_SPI0_TX_FIFO_Level_3	0x0030
		.DEFINE 	C_SPI0_TX_FIFO_Level_4	0x0040
		.DEFINE 	C_SPI0_TX_FIFO_Level_5	0x0050
		.DEFINE 	C_SPI0_TX_FIFO_Level_6	0x0060
		.DEFINE 	C_SPI0_TX_FIFO_Level_7	0x0070
		.DEFINE		C_SPI0_TX_Flag			0x0007
P_SPI0_TXData:	          					.VDEF   P_SPI_Ctrl_Base+0x22
P_SPI0_RXStatus:           					.VDEF   P_SPI_Ctrl_Base+0x23
		.DEFINE 	C_SPI0_RX_INT_Flag		0x8000
		.DEFINE 	C_SPI0_RX_INT_DIS		0x0000
		.DEFINE 	C_SPI0_RX_INT_EN		0x4000
		.DEFINE 	C_SPI0_RX_BUF_Full		0x0200
		.DEFINE 	C_SPI0_RX_BUF_OVER_ERROR	0x0100
		.DEFINE 	C_SPI0_RX_FIFO_Level	0x0070
		.DEFINE 	C_SPI0_RX_FIFO_Level_1	0x0000
		.DEFINE 	C_SPI0_RX_FIFO_Level_2	0x0010
		.DEFINE 	C_SPI0_RX_FIFO_Level_3	0x0020
		.DEFINE 	C_SPI0_RX_FIFO_Level_4	0x0030
		.DEFINE 	C_SPI0_RX_FIFO_Level_5	0x0040
		.DEFINE 	C_SPI0_RX_FIFO_Level_6	0x0050
		.DEFINE 	C_SPI0_RX_FIFO_Level_7	0x0060
		.DEFINE 	C_SPI0_RX_FIFO_Level_8	0x0070
		.DEFINE		C_SPI0_RX_Flag			0x0007
P_SPI0_RXData:   	        				.VDEF   P_SPI_Ctrl_Base+0x24
P_SPI0_Misc:	   	       					.VDEF   P_SPI_Ctrl_Base+0x25
		.DEFINE		C_SPI0_FIFO_Full_Mode	0x0200
		.DEFINE		C_SPI0_FIFO_Full_Skipped	0x0000
		.DEFINE		C_SPI0_FIFO_Full_Overwrite	0x0200
		.DEFINE		C_SPI0_FIFO_Normal_Mode	0x0000
		.DEFINE		C_SPI0_FIFO_Smart_Mode	0x0100
		.DEFINE		C_SPI0_Busy_Flag		0x0010
		.DEFINE		C_SPI0_RX_Full_Flag		0x0008
		.DEFINE		C_SPI0_RX_NonEmpty_Flag	0x0004
		.DEFINE		C_SPI0_TX_NonFull_Flag	0x0002
		.DEFINE		C_SPI0_TX_Empty_Flag	0x0001


/////////////////////////////////////////////////
//  SPIF Control Registers
//  Base Address Start from 0x7B40
/////////////////////////////////////////////////
P_SPIFC_Ctrl1:								.VDEF	P_SPIF_Ctrl_Base+0x00
		.DEFINE 	C_SPIF_Pending_Flag		0x0001
		.DEFINE 	C_SPIF_CLK_PreStateLo	0x0000
		.DEFINE 	C_SPIF_CLK_PreStateHi	0x0002		
		.DEFINE 	C_SPIF_MIO_1bit			0x0000
		.DEFINE 	C_SPIF_MIO_2bit			0x0004
		.DEFINE 	C_SPIF_MIO_4bit			0x0008
		.DEFINE 	C_SPIF_AMIO_1bit		0x0000
		.DEFINE 	C_SPIF_AMIO_2bit		0x0010
		.DEFINE 	C_SPIF_AMIO_4bit		0x0020	
		.DEFINE 	C_SPIF_CMIO_1bit		0x0000
		.DEFINE 	C_SPIF_CMIO_2bit		0x0040
		.DEFINE 	C_SPIF_CMIO_4bit		0x0080
		.DEFINE 	C_SPIF_Auto_Mode		0x0000	
		.DEFINE 	C_SPIF_Manual_Mode		0x0100
		.DEFINE 	C_SPIF_NotIgnoreLastClk	0x0000
		.DEFINE 	C_SPIF_IgnoreLastClk	0x0200
		.DEFINE 	C_SPIF_Idle_Flag		0x2000
		.DEFINE 	C_SPIF_RxFifoEmpty_Flag	0x4000
		.DEFINE 	C_SPIF_TxTransDone_Flag	0x8000
P_SPIFC_CMD:								.VDEF	P_SPIF_Ctrl_Base+0x01
		.DEFINE 	C_SPIF_CMD_Mask			0x000f
		.DEFINE 	C_SPIF_TransWithoutCMD	0x0100
		.DEFINE 	C_SPIF_TransOnlyCMD		0x0200
		.DEFINE 	C_SPIF_TransWithOneCMD	0x2000
P_SPIFC_PARA:								.VDEF	P_SPIF_Ctrl_Base+0x02
		.DEFINE 	C_SPIF_EnhanBitMask		0x00ff
			.DEFINE 	C_SPIF_Enhance_bit0		0x0001
			.DEFINE 	C_SPIF_Enhance_bit1		0x0002
			.DEFINE 	C_SPIF_Enhance_bit2		0x0004
			.DEFINE 	C_SPIF_Enhance_bit3		0x0008
			.DEFINE 	C_SPIF_Enhance_bit4		0x0010
			.DEFINE 	C_SPIF_Enhance_bit5		0x0020
			.DEFINE 	C_SPIF_Enhance_bit6		0x0040
			.DEFINE 	C_SPIF_Enhance_bit7		0x0080	
		.DEFINE 	C_SPIF_DummyClkCycle_Mask	0x0f00
			.define		C_SPIF_DummyClk_0cycle		0x0000
			.DEFINE 	C_SPIF_DummyClk_1cycle		0x0100
			.DEFINE 	C_SPIF_DummyClk_2cycle		0x0200	
			.DEFINE 	C_SPIF_DummyClk_3cycle		0x0300
			.DEFINE 	C_SPIF_DummyClk_4cycle		0x0400
			.DEFINE 	C_SPIF_DummyClk_5cycle		0x0500
			.DEFINE 	C_SPIF_DummyClk_6cycle		0x0600
			.DEFINE 	C_SPIF_DummyClk_7cycle		0x0700
			.DEFINE 	C_SPIF_DummyClk_8cycle		0x0800
			.DEFINE 	C_SPIF_DummyClk_9cycle		0x0900
		.DEFINE 	C_SPIF_TransWithAddr		0x0000								
		.DEFINE 	C_SPIF_TransWithoutAddr		0x1000
		.DEFINE 	C_SPIF_TransOnlyAddr		0x2000
		.DEFINE 	C_SPIF_TransWithEnhanByte		0x0000
		.DEFINE 	C_SPIF_TransWithoutEnhanByte	0x4000
P_SPIFC_ADDRL:								.VDEF	P_SPIF_Ctrl_Base+0x03
P_SPIFC_ADDRH:								.VDEF	P_SPIF_Ctrl_Base+0x04
P_SPIFC_TX_Data:							.VDEF	P_SPIF_Ctrl_Base+0x05
P_SPIFC_RX_Data:							.VDEF	P_SPIF_Ctrl_Base+0x06
P_SPIFC_TX_BC:								.VDEF	P_SPIF_Ctrl_Base+0x07
P_SPIFC_RX_BC:								.VDEF	P_SPIF_Ctrl_Base+0x08
P_SPIFC_TIMING:								.VDEF	P_SPIF_Ctrl_Base+0x09
P_SPIFC_Ctrl2:								.VDEF	P_SPIF_Ctrl_Base+0x0B
		.DEFINE 	C_SPIFC_EN				0x0001
		.DEFINE		C_SPIFC_4thAdr_EN		0xff00


////////////////////////////////////////
//  DMA Control Registers
//      Base Address Start from 0x7A80
////////////////////////////////////////
P_DMA_Ctrl0:								.VDEF	P_DMA_Base+0x00
		.DEFINE 	C_DMA_ChEn       		0x0001
		.DEFINE 	C_DMA_Busy       		0x0002
		.DEFINE 	C_DMA_Mode_SW      		0x0000
		.DEFINE 	C_DMA_Mode_External   	0x0004	
		.DEFINE 	C_DMA_DoubleBufferFull 	0x0008
		.DEFINE 	C_DMA_TARAddress_Inc	0x0000
		.DEFINE 	C_DMA_TARAddress_Dec	0x0010						
		.DEFINE 	C_DMA_SRCAddress_Inc	0x0000
		.DEFINE 	C_DMA_SRCAddress_Dec	0x0020	
		.DEFINE 	C_DMA_TARAddress_Fix	0x0040	
		.DEFINE 	C_DMA_SRCAddress_Fix	0x0080		
		.DEFINE 	C_DMA_IntEn				0x0100	
		.DEFINE 	C_DMA_SWReset			0x0200	
		.DEFINE 	C_DMA_M_M				0x0000	
		.DEFINE 	C_DMA_M_IO				0x0400		
		.DEFINE 	C_DMA_IO_M				0x0800
		.DEFINE		C_DMA_IO_IO				0x0C00				
		.DEFINE 	C_DMA_SRC_8Bit			0x1000			
		.DEFINE 	C_DMA_SRC_16Bit			0x0000		
		.DEFINE 	C_DMA_TAR_8Bit			0x2000			
		.DEFINE 	C_DMA_TAR_16Bit			0x0000	
		.DEFINE 	C_DMA_Transfer_Single	0x0000	
		.DEFINE 	C_DMA_Transfer_Demand	0x4000
		.DEFINE 	C_DMA_Request_Read		0x0000	
		.DEFINE 	C_DMA_Request_Write		0x8000	
P_DMA_SRC_AddrL0:							.VDEF	P_DMA_Base+0x01
P_DMA_TAR_AddrL0:							.VDEF	P_DMA_Base+0x02
P_DMA_TCountL0:								.VDEF	P_DMA_Base+0x03
P_DMA_SRC_AddrH0:							.VDEF	P_DMA_Base+0x04
P_DMA_TAR_AddrH0:							.VDEF	P_DMA_Base+0x05
P_DMA_TCountH0:								.VDEF	P_DMA_Base+0x06
P_DMA_MISC0:								.VDEF	P_DMA_Base+0x07
P_DMA_Ctrl1:								.VDEF	P_DMA_Base+0x08
P_DMA_SRC_AddrL1:							.VDEF	P_DMA_Base+0x09
P_DMA_TAR_AddrL1:							.VDEF	P_DMA_Base+0x0A
P_DMA_TCountL1:								.VDEF	P_DMA_Base+0x0B
P_DMA_SRC_AddrH1:							.VDEF	P_DMA_Base+0x0C
P_DMA_TAR_AddrH1:							.VDEF	P_DMA_Base+0x0D
P_DMA_TCountH1:								.VDEF	P_DMA_Base+0x0E
P_DMA_MISC1:								.VDEF	P_DMA_Base+0x0F
P_DMA_SPRISize0:							.VDEF	P_DMA_Base+0x30
P_DMA_SPRISize1:							.VDEF	P_DMA_Base+0x31
P_DMA_LineLenght:							.VDEF	P_DMA_Base+0x3D
P_DMA_SS:									.VDEF	P_DMA_Base+0x3E
P_DMA_INT:									.VDEF	P_DMA_Base+0x3F
		.DEFINE		C_DMA0_ISRFlag			0x0001
		.DEFINE		C_DMA1_ISRFlag			0x0002
		.DEFINE		C_DMA0_TimeoutFlag		0x0010
		.DEFINE		C_DMA1_TimeoutFlag		0x0020	
		.DEFINE		C_DMA0_BusyFlag			0x0100
		.DEFINE		C_DMA1_BusyFlag			0x0200


/////////////////////////////////////////////////
//  CTS Control Registers
//  Base Address Start from 0x7AC0
/////////////////////////////////////////////////
P_CTS_Ctrl1:								.VDEF	P_CTS_Ctrl_Base+0x00
		.DEFINE 	C_CTS_Start       		0x8000				
		.DEFINE 	C_CTS_SRCIOA4       	0x2000
		.DEFINE 	C_CTS_Others       		0x0000		
		.DEFINE 	C_CTS_TriEn       		0x0400
		.DEFINE 	C_CTS_NF_200M      		0x0000
		.DEFINE 	C_CTS_NF_8M      		0x0100
		.DEFINE 	C_CTS_NF_3M      		0x0200
		.DEFINE 	C_CTS_NF_1P5M      		0x0300
		.DEFINE 	C_CTS_Duration_450n		0x0000
		.DEFINE 	C_CTS_Duration_300n		0x0010
		.DEFINE 	C_CTS_Duration_150n		0x0020
		.DEFINE 	C_CTS_Duration_70n		0x0030	
		.DEFINE		D_CtsVrefSel_2_1		0x0000
		.DEFINE		D_CtsVrefSel_275_025	0x0080		
		.DEFINE 	C_CTS_Current_25u		0x0000
		.DEFINE 	C_CTS_Current_50u		0x0002
		.DEFINE 	C_CTS_Current_100u		0x0004
		.DEFINE 	C_CTS_Current_150u		0x0006
		.DEFINE 	C_CTS_Current_200u		0x0008	
		.DEFINE 	C_CTS_Current_300u		0x000A
		.DEFINE 	C_CTS_Current_450u		0x000C
		.DEFINE 	C_CTS_Current_600u		0x000E
		.DEFINE 	C_CTS_En				0x0001																		
P_CTS_CH:									.VDEF	P_CTS_Ctrl_Base+0x01
P_CTS_DIV:									.VDEF	P_CTS_Ctrl_Base+0x02
		.DEFINE 	C_CTS_SYS_DIV2     		0x0001
		.DEFINE 	C_CTS_SYS_DIV4      	0x0002
		.DEFINE 	C_CTS_SYS_DIV8     		0x0003		
		.DEFINE 	C_CTS_SYS_DIV16    		0x0004
		.DEFINE 	C_CTS_SYS_DIV32    		0x0005
		.DEFINE 	C_CTS_SYS_DIV64    		0x0006
		.DEFINE 	C_CTS_SYS_DIV128   		0x0007			
P_CTS_CYCLE:								.VDEF	P_CTS_Ctrl_Base+0x03
P_CTS_Ctrl2:								.VDEF	P_CTS_Ctrl_Base+0x04
		.DEFINE 	C_CTS_ScanDoneIntEn 	0x0001
		.DEFINE 	C_CTS_ScanAllDoneIntEn	0x0002
		.DEFINE 	C_CTS_OverflowIntEn		0x0004
P_CTS_Status:								.VDEF	P_CTS_Ctrl_Base+0x05
		.DEFINE 	C_CTS_ScanDoneFlag		0x0001
		.DEFINE 	C_CTS_ScanAllDoneFlag	0x0002
		.DEFINE 	C_CTS_OverflowFlag  	0x0004
		.DEFINE 	C_CTS_FIFOFullFlag	 	0x0008	
P_CTS_Ctrl3:								.VDEF	P_CTS_Ctrl_Base+0x06
		.DEFINE		C_CTS_LDO33_En			0x0001	
P_CTS_FIFOLevel:							.VDEF	P_CTS_Ctrl_Base+0x08
P_CTS_CNT:									.VDEF	P_CTS_Ctrl_Base+0x09


////////////////////////////////////////////////
//  KeyScan Control Registers
//  Base Address Start from 0x7B20
////////////////////////////////////////////////
P_KS_Ctrl1:									.VDEF	P_KeyScan_Base+0x00
P_KS_Ctrl2:									.VDEF	P_KeyScan_Base+0x01
P_KS_Addr:									.VDEF	P_KeyScan_Base+0x02
P_KS_Velocity:								.VDEF	P_KeyScan_Base+0x03
P_KS_Data0:									.VDEF	P_KeyScan_Base+0x08
P_KS_Data1:									.VDEF	P_KeyScan_Base+0x09
P_KS_Data2:									.VDEF	P_KeyScan_Base+0x0A	
P_KS_Data3:									.VDEF	P_KeyScan_Base+0x0B
P_KS_Data4:									.VDEF	P_KeyScan_Base+0x0C
P_KS_Data5:									.VDEF	P_KeyScan_Base+0x0D
P_KS_Data6:									.VDEF	P_KeyScan_Base+0x0E
P_KS_Data7:									.VDEF	P_KeyScan_Base+0x0F
P_KS_Data8:									.VDEF	P_KeyScan_Base+0x10
P_KS_Data9:									.VDEF	P_KeyScan_Base+0x11
P_KS_Data10:								.VDEF	P_KeyScan_Base+0x12


/////////////////////////////////////////////////
//  ADC Control Registers
//  Base Address Start from 0x79A0
/////////////////////////////////////////////////
P_ADC_Setup:								.VDEF	P_Analog_Ctrl_Base+0x00
		.DEFINE		C_ADC_AlwaysOn	       	0x4000
		.DEFINE		C_ADC_ManualOn	       	0x0000		
		.DEFINE		C_ADC_SysDiv4096	    0x0600
		.DEFINE		C_ADC_SysDiv2048	    0x0500				
		.DEFINE		C_ADC_SysDiv1024	    0x0400
		.DEFINE		C_ADC_SysDiv64		    0x0300
		.DEFINE		C_ADC_SysDiv128		    0x0200	
		.DEFINE		C_ADC_SysDiv256		    0x0100	
		.DEFINE		C_ADC_SysDiv512		    0x0000	
		.DEFINE		C_ADC_AutoSample_En	    0x0080
		.DEFINE		C_ADC_AutoSample_Dis    0x0000	
		.DEFINE		C_ADC_AutoSample_LDOV50 0x0070												
		.DEFINE		C_ADC_AutoSample_1P2V	0x0060	
		.DEFINE		C_ADC_AutoSample_LineIn5	0x0050
		.DEFINE		C_ADC_AutoSample_LineIn4 	0x0040
		.DEFINE		C_ADC_AutoSample_LineIn3 	0x0030							
		.DEFINE		C_ADC_AutoSample_LineIn2 	0x0020
		.DEFINE		C_ADC_AutoSample_LineIn1 	0x0010
		.DEFINE		C_ADC_AutoSample_LineIn0 	0x0000
		.DEFINE		C_ADC_AutoSample_Start	0x0008
		.DEFINE		C_ADC_AutoSample_Stop	0x0000		
		.DEFINE		C_ADC_AutoSample_TimerF	0x0005
		.DEFINE		C_ADC_AutoSample_TimerE	0x0004
		.DEFINE		C_ADC_AutoSample_TimerD	0x0003
		.DEFINE		C_ADC_AutoSample_TimerC	0x0002
		.DEFINE		C_ADC_AutoSample_TimerB	0x0001
		.DEFINE		C_ADC_AutoSample_TimerA	0x0000	
P_MADC_Ctrl:								.VDEF	P_Analog_Ctrl_Base+0x01
		.DEFINE		C_ADC_ReadyFlag	       	0x8000
		.DEFINE		C_ADC_ReadyINT	       	0x4000		
		.DEFINE		C_ADC_Ready		       	0x0080		
		.DEFINE		C_ADC_ManualStart      	0x0040
		.DEFINE		C_ADC_ErrFlag1      	0x0020
		.DEFINE		C_ADC_ErrFlag2	     	0x0010	
		.DEFINE		C_ADC_Manual_LDOV50  	0x0007												
		.DEFINE		C_ADC_Manual_1P2V	 	0x0006	
		.DEFINE		C_ADC_Manual_LineIn5 	0x0005
		.DEFINE		C_ADC_Manual_LineIn4 	0x0004
		.DEFINE		C_ADC_Manual_LineIn3 	0x0003							
		.DEFINE		C_ADC_Manual_LineIn2 	0x0002
		.DEFINE		C_ADC_Manual_LineIn1 	0x0001
		.DEFINE		C_ADC_Manual_LineIn0 	0x0000	
P_MADC_Data:								.VDEF	P_Analog_Ctrl_Base+0x02
P_ASADC_Ctrl:								.VDEF	P_Analog_Ctrl_Base+0x03
		.DEFINE		C_ADC_AutoSample_FF_Flag	0x8000	
		.DEFINE		C_ADC_AutoSample_FF_INT		0x4000
		.DEFINE		C_ADC_AutoSample_FF		0x2000		
		.DEFINE		C_ADC_AutoSample_OV		0x1000		
		.DEFINE		C_ADC_AutoSample_INT	0x0000			
		.DEFINE		C_ADC_AutoSample_DMA	0x0800
		.DEFINE		C_ADC_AutoSample_OverWrite	0x0400
		.DEFINE		C_ADC_AutoSample_FF_Level8	0x0080
		.DEFINE		C_ADC_AutoSample_FF_Level7	0x0070								
		.DEFINE		C_ADC_AutoSample_FF_Level6	0x0060
		.DEFINE		C_ADC_AutoSample_FF_Level5	0x0050
		.DEFINE		C_ADC_AutoSample_FF_Level4	0x0040
		.DEFINE		C_ADC_AutoSample_FF_Level3	0x0030
		.DEFINE		C_ADC_AutoSample_FF_Level2	0x0020
		.DEFINE		C_ADC_AutoSample_FF_Level1	0x0010
		.DEFINE		C_ADC_AutoSample_FF_Level0	0x0000	
		.DEFINE		C_ADC_AutoSample_FIFO_8	0x0008
		.DEFINE		C_ADC_AutoSample_FIFO_7	0x0007								
		.DEFINE		C_ADC_AutoSample_FIFO_6	0x0006
		.DEFINE		C_ADC_AutoSample_FIFO_5	0x0005
		.DEFINE		C_ADC_AutoSample_FIFO_4	0x0004
		.DEFINE		C_ADC_AutoSample_FIFO_3	0x0003
		.DEFINE		C_ADC_AutoSample_FIFO_2	0x0002
		.DEFINE		C_ADC_AutoSample_FIFO_1	0x0001
		.DEFINE		C_ADC_AutoSample_FIFO_0	0x0000	
P_ASADC_Data:								.VDEF	P_Analog_Ctrl_Base+0x04
P_ADC_LineCH_En:							.VDEF	P_Analog_Ctrl_Base+0x06
		.DEFINE		C_ADC_LineIn5_En		0x0020
		.DEFINE		C_ADC_LineIn4_En		0x0010
		.DEFINE		C_ADC_LineIn3_En		0x0008		
		.DEFINE		C_ADC_LineIn2_En		0x0004
		.DEFINE		C_ADC_LineIn1_En		0x0002
		.DEFINE		C_ADC_LineIn0_En		0x0001	
P_ADC_SH_Wait:								.VDEF	P_Analog_Ctrl_Base+0x07
P_MICADC_Setup:								.VDEF	P_Analog_Ctrl_Base+0x10
		.DEFINE		C_MICADC_AlwaysOn     	0x4000
		.DEFINE		C_MICADC_ManualOn     	0x0000		
		.DEFINE		C_MICADC_AGCEn	       	0x2000		
		.DEFINE		C_MICADC_AGCDis	       	0x0000		
		.DEFINE		C_MICADC_SignData     	0x1000	
		.DEFINE		C_MICADC_UnsignData     0x0000	
		.DEFINE		C_MICADC_SysDiv4096	    0x0600
		.DEFINE		C_MICADC_SysDiv2048	    0x0500				
		.DEFINE		C_MICADC_SysDiv1024	    0x0400
		.DEFINE		C_MICADC_SysDiv64		0x0300
		.DEFINE		C_MICADC_SysDiv128		0x0200	
		.DEFINE		C_MICADC_SysDiv256		0x0100	
		.DEFINE		C_MICADC_SysDiv512		0x0000
		.DEFINE		C_MICADC_AutoSample_En	0x0080
		.DEFINE		C_MICADC_AutoSample_Dis 0x0000						
		.DEFINE		C_MICADC_MICEn       	0x0040		
		.DEFINE		C_MICADC_MICDis      	0x0000	
    	.DEFINE		C_MICADC_Vref_En		0x0020
		.DEFINE		C_MICADC_Vref_Dis      	0x0000  		
		.DEFINE		C_MICADC_AutoSample_Start	0x0008
		.DEFINE		C_MICADC_AutoSample_Stop	0x0000		
		.DEFINE		C_MICADC_AutoSample_TimerF	0x0005
		.DEFINE		C_MICADC_AutoSample_TimerE	0x0004
		.DEFINE		C_MICADC_AutoSample_TimerD	0x0003
		.DEFINE		C_MICADC_AutoSample_TimerC	0x0002
		.DEFINE		C_MICADC_AutoSample_TimerB	0x0001
		.DEFINE		C_MICADC_AutoSample_TimerA	0x0000	
P_MICGAIN_Ctrl:								.VDEF	P_Analog_Ctrl_Base+0x11
		.DEFINE		C_MICADC_Ready			0x0080	
		.DEFINE		C_MICADC_GAINEN			0x0001			
		.DEFINE		C_MICADC_GAINDIS		0x0000
P_ASMICADC_Ctrl:							.VDEF	P_Analog_Ctrl_Base+0x13
		.DEFINE		C_MICADC_AutoSample_FF_Flag	0x8000	
		.DEFINE		C_MICADC_AutoSample_FF_INT	0x4000
		.DEFINE		C_MICADC_AutoSample_FF	0x2000		
		.DEFINE		C_MICADC_AutoSample_OV	0x1000		
		.DEFINE		C_MICADC_AutoSample_INT	0x0000			
		.DEFINE		C_MICADC_AutoSample_DMA	0x0800
		.DEFINE		C_MICADC_AutoSample_OverWrite	0x0400
		.DEFINE		C_MICADC_AutoSample_FF_Level8	0x0080
		.DEFINE		C_MICADC_AutoSample_FF_Level7	0x0070								
		.DEFINE		C_MICADC_AutoSample_FF_Level6	0x0060
		.DEFINE		C_MICADC_AutoSample_FF_Level5	0x0050
		.DEFINE		C_MICADC_AutoSample_FF_Level4	0x0040
		.DEFINE		C_MICADC_AutoSample_FF_Level3	0x0030
		.DEFINE		C_MICADC_AutoSample_FF_Level2	0x0020
		.DEFINE		C_MICADC_AutoSample_FF_Level1	0x0010
		.DEFINE		C_MICADC_AutoSample_FF_Level0	0x0000	
		.DEFINE		C_MICADC_AutoSample_FIFO_8	0x0008
		.DEFINE		C_MICADC_AutoSample_FIFO_7	0x0007								
		.DEFINE		C_MICADC_AutoSample_FIFO_6	0x0006
		.DEFINE		C_MICADC_AutoSample_FIFO_5	0x0005
		.DEFINE		C_MICADC_AutoSample_FIFO_4	0x0004
		.DEFINE		C_MICADC_AutoSample_FIFO_3	0x0003
		.DEFINE		C_MICADC_AutoSample_FIFO_2	0x0002
		.DEFINE		C_MICADC_AutoSample_FIFO_1	0x0001
		.DEFINE		C_MICADC_AutoSample_FIFO_0	0x0000
P_ASMICADC_Data:							.VDEF	P_Analog_Ctrl_Base+0x14
P_MICADC_SH_Wait:							.VDEF	P_Analog_Ctrl_Base+0x17
P_MICADC_DataMAX:							.VDEF	P_Analog_Ctrl_Base+0x18
P_MICADC_DataMIN:							.VDEF	P_Analog_Ctrl_Base+0x19
P_MICADC_FLAG:								.VDEF	P_Analog_Ctrl_Base+0x1A
P_MICADC_GAIN:								.VDEF	P_Analog_Ctrl_Base+0x1B

P_MICAGC_Ctrl:								.VDEF	P_Analog_Ctrl_Base+0x1C
		.DEFINE		C_MICAGC_Peak	       	0x8000		
		.DEFINE		C_MICAGC_RMS	       	0x0000	
		.DEFINE		C_MICAGC_AttSca_1		0x0000	
		.DEFINE		C_MICAGC_AttSca_4	    0x0040	
		.DEFINE		C_MICAGC_AttSca_16	    0x0080	
		.DEFINE		C_MICAGC_AttSca_64	    0x00C0	
		.DEFINE		C_MICAGC_RelSca_1      	0x0000	
		.DEFINE		C_MICAGC_RelSca_4      	0x0010
		.DEFINE		C_MICAGC_RelSca_16     	0x0020
		.DEFINE		C_MICAGC_RelSca_64     	0x0030
		.DEFINE		C_MICAGC_ZeroCross_En  	0x0000
		.DEFINE		C_MICAGC_ZeroCross_Dis 	0x0008
P_MICAGC_Time:								.VDEF	P_Analog_Ctrl_Base+0x1D
P_MICAGC_Enable:							.VDEF	P_Analog_Ctrl_Base+0x1E
		.DEFINE		C_MICAGC_En	       		0x0001		
		.DEFINE		C_MICAGC_Dis	       	0x0000	
P_MICAGC_Status:							.VDEF	P_Analog_Ctrl_Base+0x1F
P_MICAGC_UpThres:							.VDEF	P_Analog_Ctrl_Base+0x15


/////////////////////////////////////////////////
//  USB Device Control Registers
//  Base Address Start from 0x7A40
/////////////////////////////////////////////////
P_USBD_Config:								.VDEF	P_USBDevice_Base+0x00
P_USBD_Function:							.VDEF	P_USBDevice_Base+0x01
P_USBD_PMR:									.VDEF	P_USBDevice_Base+0x02
P_USBD_EP0Data:								.VDEF	P_USBDevice_Base+0x03
P_USBD_BIData:								.VDEF	P_USBDevice_Base+0x04
P_USBD_BOData:								.VDEF	P_USBDevice_Base+0x05
P_USBD_INTINData:							.VDEF	P_USBDevice_Base+0x06
P_USBD_EPEvent:								.VDEF	P_USBDevice_Base+0x07	
P_USBD_GLOINT:								.VDEF	P_USBDevice_Base+0x08
P_USBD_INTEN:								.VDEF	P_USBDevice_Base+0x09
P_USBD_INT:									.VDEF	P_USBDevice_Base+0x0A
P_USBD_SCINTEM:								.VDEF	P_USBDevice_Base+0x0B
P_USBD_SCINTF:								.VDEF	P_USBDevice_Base+0x0C
P_USBD_EPAutoSet:							.VDEF	P_USBDevice_Base+0x0D
P_USBD_EPSetStall:							.VDEF	P_USBDevice_Base+0x0E
P_USBD_EPBufClear:							.VDEF	P_USBDevice_Base+0x0F
P_USBD_EPEvntClear:							.VDEF	P_USBDevice_Base+0x10
P_USBD_EP0WrtCount:							.VDEF	P_USBDevice_Base+0x11
P_USBD_BOWrtCount:							.VDEF	P_USBDevice_Base+0x12
P_USBD_EP0BufPointer:						.VDEF	P_USBDevice_Base+0x13
P_USBD_BBufRdPointer:						.VDEF	P_USBDevice_Base+0x14
P_USBD_BBufWrtPointer:						.VDEF	P_USBDevice_Base+0x15
P_USBD_EP0RTR:								.VDEF	P_USBDevice_Base+0x16
P_USBD_EP0RR:								.VDEF	P_USBDevice_Base+0x17
P_USBD_EP0VR:								.VDEF	P_USBDevice_Base+0x18
P_USBD_EP0IR:								.VDEF	P_USBDevice_Base+0x19
P_USBD_EP0LR:								.VDEF	P_USBDevice_Base+0x1A
P_USBD_DMAWrtCountL:						.VDEF	P_USBDevice_Base+0x20
P_USBD_DMAWrtCountH:						.VDEF	P_USBDevice_Base+0x21
P_USBD_DMAAckL:								.VDEF	P_USBDevice_Base+0x22
P_USBD_DMAAckH:								.VDEF	P_USBDevice_Base+0x23
P_USBD_EPStall:								.VDEF	P_USBDevice_Base+0x24
P_USBD_Device:								.VDEF	P_USBDevice_Base+0x27
P_USBD_NullPkt:								.VDEF	P_USBDevice_Base+0x28
P_USBD_DMAINT:								.VDEF	P_USBDevice_Base+0x29
P_USBD_INTF:								.VDEF	P_USBDevice_Base+0x2C


////////////////////////////////////////////
//	miscellaneous control register
//	Base address is from 0x7AF0
////////////////////////////////////////////
P_Byte_Swap:								.VDEF	P_MISC_Base+0x00
P_Nibble_Swap:								.VDEF	P_MISC_Base+0x01
P_TowBit_Swap:								.VDEF	P_MISC_Base+0x02
P_Bit_Reverse:								.VDEF	P_MISC_Base+0x03


///////////////////////////////////////////////
//  Speech Process Unit(SPU) Control Registers
//  Base Address Start from 0x7B80
///////////////////////////////////////////////
P_SPU_CtrChEn:								.VDEF	P_SPU_Base+0x00	
P_SPU_CtrMainVol:							.VDEF	P_SPU_Base+0x01	
P_SPU_CtrChFiqEn:							.VDEF	P_SPU_Base+0x02	
P_SPU_CtrChFiqSts:							.VDEF	P_SPU_Base+0x03	
P_SPU_CtrBeatBase:							.VDEF	P_SPU_Base+0x04	
P_SPU_CtrBeatCnt:							.VDEF	P_SPU_Base+0x05	
P_SPU_CtrEnvClkSel0:						.VDEF	P_SPU_Base+0x06	
P_SPU_CtrEnvClkSel1:						.VDEF	P_SPU_Base+0x07	
P_SPU_CtrEnvClkSel2:						.VDEF	P_SPU_Base+0x08	
P_SPU_CtrEnvClkSel3:						.VDEF	P_SPU_Base+0x09	
P_SPU_CtrEnvRampDown:						.VDEF	P_SPU_Base+0x0A	
P_SPU_CtrChStopSts:							.VDEF	P_SPU_Base+0x0B	
P_SPU_CtrChZeroCrossEn:						.VDEF	P_SPU_Base+0x0C	
P_SPU_CtrFlag:								.VDEF	P_SPU_Base+0x0D	
P_SPU_CtrDummy:								.VDEF	P_SPU_Base+0x0E	
P_SPU_CtrChSts:								.VDEF	P_SPU_Base+0x0F	
P_SPU_CtrWaveInL:							.VDEF	P_SPU_Base+0x10	
P_SPU_CtrWaveInR:							.VDEF	P_SPU_Base+0x11	
P_SPU_CtrWaveOutL:							.VDEF	P_SPU_Base+0x12	
P_SPU_CtrWaveOutR:							.VDEF	P_SPU_Base+0x13		
P_SPU_CtrChRepeatEn:						.VDEF	P_SPU_Base+0x14	
P_SPU_CtrChEnvMode:							.VDEF	P_SPU_Base+0x15	
P_SPU_CtrChToneRelease:						.VDEF	P_SPU_Base+0x16	
P_SPU_CtrChEnvIrqSts:						.VDEF	P_SPU_Base+0x17	
P_SPU_CtrChPitchBendEn:						.VDEF	P_SPU_Base+0x18	
P_SPU_CtrAttRelTime:      					.VDEF	P_SPU_Base+0x1A				
P_SPU_CtrWaveBankAddr:      				.VDEF	P_SPU_Base+0x1F			
P_SPU_ChWaveAddr:							.VDEF	P_SPU_Base+0x80	
P_SPU_ChMode:								.VDEF	P_SPU_Base+0x81	
P_SPU_ChLoopAddr:							.VDEF	P_SPU_Base+0x82	
P_SPU_ChPan:								.VDEF	P_SPU_Base+0x83	
P_SPU_ChEnvelop0:							.VDEF	P_SPU_Base+0x84	
P_SPU_ChEnvelopData:						.VDEF	P_SPU_Base+0x85	
P_SPU_ChEnvelop1:							.VDEF	P_SPU_Base+0x86	
P_SPU_ChEnvelopSeg:							.VDEF	P_SPU_Base+0x87	
P_SPU_ChEnvelopOffset:						.VDEF	P_SPU_Base+0x88	
P_SPU_ChWaveData0:							.VDEF	P_SPU_Base+0x89	
P_SPU_ChEnvelopLoop:						.VDEF	P_SPU_Base+0x8A	
P_SPU_ChWaveData1:							.VDEF	P_SPU_Base+0x8B	
P_SPU_ChAdpcmSel:							.VDEF	P_SPU_Base+0x8D	
P_SPU_ChPhaseHi:							.VDEF	P_SPU_Base+0x280
P_SPU_ChPhaseAccumHi:						.VDEF	P_SPU_Base+0x281
P_SPU_ChTargetPhaseHi:						.VDEF	P_SPU_Base+0x282
P_SPU_ChRampDownClk:						.VDEF	P_SPU_Base+0x283
P_SPU_ChPhase:								.VDEF	P_SPU_Base+0x284
P_SPU_ChPhaseAccum:							.VDEF	P_SPU_Base+0x285
P_SPU_ChTargetPhase:						.VDEF	P_SPU_Base+0x286
P_SPU_ChPhaseControl:						.VDEF	P_SPU_Base+0x287


//==========================================================================================
// End of include file
//========================================================================================