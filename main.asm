.external __sn_sp_val

.include GPL951_body.inc


.TEXT

.public _BREAK;

.public _FIQ;

.public _RESET;

.public _IRQ0;

.public _IRQ1;

.public _IRQ2;

.public _IRQ3;

.public _IRQ4;

.public _IRQ5;

.public _IRQ6;

.public _IRQ7;


StartUp:	.proc
_RESET:
	fiq off
	irq off
	sp = __sn_sp_val

	// Clock setup
	r1 = C_PLL_Fast_En + C_CLK96M_En + C_SYSCLK_SRC_Div1
	[P_Clock_Ctrl] = r1

	// Disable watchdog
	r2 = [P_PLLWaitCLK]			// P_PLLWaitCLK = 0x7818
	r1 = 0x00FF
	[P_PLLWaitCLK] = r1			// 0x7818 = 0x00FF

	r1 = C_WatchDog_Dis			// C_WatchDog_Dis = 0x0
	[P_WatchDog_Ctrl] = r1		// P_WatchDog_Ctrl =0x780A

	[P_PLLWaitCLK] = r2			// After set WDT Disable, write back 0x7818 original data

	call CopyToRam

	sp = __sn_sp_val
	call Main

?a:
	jmp ?a
	reti
.endp


CopyToRam:	.proc
	r1 = RamCodeStart			// At 0x100 per linker script
	r1 += 0x9f00				// Add to get flash address of 0xa000
	r2 = RamCodeEnd
	r2 += 0x9f00
	r4 = 0x100					// RAM target address
?loop:
	cmp r1,r2
	je ?end
	r3 = [r1++]
	[r4++] = r3
	jmp ?loop

?end:
	retf
.endp


_BREAK:
	//add your code here

	reti;


_FIQ:
	//add your code here

	reti;


_IRQ0:
	//add your code here

	reti;


_IRQ1:
	//add your code here

	reti;


_IRQ2:
	//add your code here

	reti;


_IRQ3:
	//add your code here

	reti;


_IRQ4:
	//add your code here

	reti;


_IRQ5:
	//add your code here

	reti;


_IRQ6:
	//add your code here

	reti;


_IRQ7:
	//add your code here

	reti;


RamCode:	.section .code
RamCodeStart:
Main:	.proc
	push bp to [sp]				// Prologue
	bp = sp + 1

	call TurnOffSpifc

	call SetupBacklight			// Set up PWM output

	sp -= 1						// Allocate arg

	r1 = 1
	r4 = sp + 1
	[r4] = r1
	call SetBacklightBrightness	// SetBacklightBrightness(1);

	call SetupUart

	r1 = 10
	r4 = sp + 1
	[r4] = r1
	call SetBacklightBrightness	// SetBacklightBrightness(10);

?outerLoop:
	call Monitor
	jmp ?outerLoop				// Do it again!

	sp += 1						// Deallocate arg

	pop bp from [sp]			// Epilogue
	retf
.endp


// Turns off SPIFC
// Returns: void
// Args: none
TurnOffSpifc:	.proc
	r1 = 0
	[P_SPIFC_Ctrl2] = r1
	retf
.endp


.define eCmd_Ping	0
.define eCmd_Read	1
.define eCmd_Write	2
.define eCmd_Call	3


// UART monitor loop
// Returns: never
// Args: none
Monitor:	.proc
	push bp to [sp]				// Prologue
	sp -= 2
	bp = sp + 1

	sp -= 1						// Allocate arg

?loop:
	call UartReadWord
	[bp] = r1					// Save received command
	r2 = sp + 1
	[r2] = r1
	call UartWriteWord			// UartWriteWord(cmd);
	call UartFlush

	r1 = [bp]					// Restore saved command
	cmp r1, eCmd_Ping
	jne ?test_read
	r1 = 0x4948					// case eCmd_Ping:
	r2 = sp + 1					// "HI"
	[r2] = r1
	call UartWriteWord			// UartWriteWord(0x4948);
	goto ?end

?test_read:
	cmp r1, eCmd_Read
	jne ?test_write
	call UartReadWord			// case eCmd_Read:
	[bp] = r1					// bp[0]: addr
	call UartReadWord
	[bp + 1] = r1				// bp[1]: count
?read_loop:
	cmp r1, 0
	jz ?read_end				// if (!count) break;
	r1 = [bp]
	r2 = [r1]					// r2: *addr
	r1 += 1
	[bp] = r1					// addr++;
	r1 = sp + 1
	[r1] = r2					// Set arg
	call UartWriteWord
	r1 = [bp + 1]
	r1 -= 1
	[bp + 1] = r1				// --count;
	jmp ?read_loop
?read_end:
	r1 = 0xaabb
	r2 = sp + 1
	[r2] = r1
	call UartWriteWord			// UartWriteWord(0xaabb);
	goto ?end

?test_write:
	cmp r1, eCmd_Write
	jne ?test_call
	call UartReadWord			// case eCmd_Write:
	[bp] = r1					// bp[0]: addr
	call UartReadWord
	[bp + 1] = r1				// bp[1]: count
?write_loop:
	cmp r1, 0
	jz ?write_end
	call UartReadWord
	r2 = [bp]
	[r2] = r1					// *addr = UartReadWord();
	r2 += 1
	[bp] = r2					// addr++;
	r1 = [bp + 1]
	r1 -= 1
	[bp + 1] = r1				// --count;
	jmp ?write_loop
?write_end:
	r1 = 0xccdd
	r2 = sp + 1
	[r2] = r1
	call UartWriteWord			// UartWriteWord(0xccdd);
	goto ?end

?test_call:
	cmp r1, eCmd_Call
	jne ?case_default
	call UartReadWord			// case eCmd_Call:
	[bp] = r1					// bp[0]: addr
	r1 = 0xeeff
	r2 = sp + 1
	[r2] = r1
	call UartWriteWord			// UartWriteWord(0xeeff);
	call UartFlush
	r3 = [bp]
	r4 = 0
	call mr						// call addr
	goto ?end

?case_default:
	r1 = 0x474e					// "NG"
	r2 = sp + 1
	[r2] = r1
	call UartWriteWord			// UartWriteWord(0x474e);

?end:
	call UartFlush
	goto ?loop

	sp += 3
	pop bp from [sp]
	retf
.endp


// Inits UART
// Returns: void
// Args: none
SetupUart:	.proc
	// Setup IO
	r1 = [P_IOF_Dir]			// Set output on IOF11 and IOF12
	r1 |= 0x1800
	[P_IOF_Dir] = r1

	r1 = [P_IOF_Attrib]			// Set attrib to not inverted
	r1 |= 0x1800
	[P_IOF_Attrib] = r1

	r1 = [P_IOF_Mux]			// Mux UART
	r1 |= C_IOF_UART_En
	[P_IOF_Mux] = r1

	// Setup UART
	r1 = 2500					// Baud rate -> 96,000,000 / 38,400
	[P_UART_BaudRate] = r1

	r1 = C_UART_En + C_UART_Data_8bit + C_UART_FifoEn + C_UART_Stop_1bit + C_UART_NoParity + C_UART_Normal
	[P_UART_Ctrl] = r1			// Enabled here

	retf
.endp


// Outputs test strings on UART
// Returns: never
// Args: none
UartOutputTest:	.proc
	push bp to [sp]
	sp -= 1
	bp = sp + 1
	sp -= 1						// Allocate arg

?reset:
	r1 = 'A'					// Test char
?loop:
	[bp] = r1					// Save to local
	r2 = sp + 1
	[r2] = r1					// Set as arg
	call UartWriteChar

	r1 = [bp]					// Restore from local
	r1 += 1						// Increment char
	cmp r1, 'Z'
	jle ?loop					// Continue if not past 'Z'
	jmp ?reset					// otherwise reset

	sp += 2						// Deallocate arg and local
	pop bp from [sp]
	retf
.endp


// Echoes characters from UART
// Returns: never
// Args: none
UartEchoTest:	.proc
	sp -= 1						// Allocate arg

?loop:
	call UartReadChar
	r2 = sp + 1
	[r2] = r1					// Set read char as arg
	call UartWriteChar
	jmp ?loop

	sp += 1						// Deallocate arg
	retf
.endp


// Reads one char from UART
// Returns: char
// Args: none
UartReadChar:	.proc
	// Wait for character received
?loop:
	r1 = [P_UART_Status]
	test r1, C_UART_RxFifoEmpty
	jnz ?loop

	r1 = [P_UART_Data]			// Return value is data read
	retf
.endp


// Reads one word from UART
// Returns: int
// Args: none
UartReadWord:	.proc
	push bp to [sp]				// Prologue
	sp -= 1
	bp = sp + 1

	call UartReadChar
	[bp] = r1					// Save char to local variable

	call UartReadChar
	r1 = r1 lsl 4				// Left shift next char by 8
	r1 = r1 lsl 4
	r1 &= 0xff00				// Mask off lower byte because I don't know
								// what's in the shift register
	r2 = [bp]					// Load saved char
	r1 |= r2					// OR the first char on to it

	sp += 1						// Epilogue
	pop bp from [sp]
	retf
.endp


// Writes one char to UART
// Returns: void
// Args:
//   char: character to write
UartWriteChar:	.proc
	r1 = sp + 3
	r1 = [r1]					// Load char from stack
	r1 &= 0xff					// Mask to only lower byte

?loop:
	r2 = [P_UART_Status]
	test r2, C_UART_TxFifoFull
	jnz ?loop					// Loop until TX FIFO not full

	[P_UART_Data] = r1			// Write char
	retf
.endp


// Writes one word to UART
// Returns: void
// Args:
//   int: word to write
UartWriteWord:	.proc
	push bp to [sp]				// Prologue
	bp = sp + 1

	sp -= 1						// Allocate arg
	r1 = [bp + 3]				// Load arg1
	r2 = sp + 1
	[r2] = r1					// Set new arg1
	call UartWriteChar

	r1 = [bp + 3]				// Load arg1
	r1 = r1 lsr 4				// Right shift by 8 to get upper byte
	r1 = r1 lsr 4
	r2 = sp + 1
	[r2] = r1					// Set new arg1
	call UartWriteChar

	sp += 1						// Deallocate arg
	pop bp from [sp]			// Epilogue
	retf
.endp


// Waits until UART FIFO empty and finished transmitting
// Returns: void
// Args: none
UartFlush:	.proc
?loop:
	r1 = [P_UART_Status]		// Get UART status
	test r1, C_UART_TxFifoEmpty	// Check FIFO empty
	jz ?loop
	test r1, C_UART_BusyFlag	// Or busy
	jnz ?loop
	retf						// Return if neither is the case
.endp


// Waits for a half second
// Returns: void
// Args: none
SleepHalfSec:	.proc
	// 96,000,000 Hz / 2 = 48,000 Hz * 1,000
	// It's actually significantly slower for some reason,
	// probably the compare takes a few cycles
	r1 = 250					// Set outer counter
?outer:
	r2 = 48000					// Set inner counter
?inner:
	r2 -= 1						// Decrement inner counter
	cmp r2, 0
	jnz ?inner					// Loop inner until zero

	r1 -= 1						// Decrement outer counter
	cmp r1, 0
	jnz ?outer					// Loop outer until zero

	retf
.endp


// Set up PWM for backlight
// Returns: void
// Args: none
SetupBacklight:	.proc
	r1 = [P_IOB_Dir]			// Set IOB0 to output
	r1 |= 0x0001
	[P_IOB_Dir] = r1			// P_IOB_Dir |= (1 << 0);

	r1 = [P_IOB_Attrib]			// Set IOB0 output to not invert
	r1 |= 0x0001
	[P_IOB_Attrib] = r1			// P_IOB_Attrib |= (1 << 0);

	r1 = [P_IOB_Buffer]			// Reset IOB0 buffer value to low (why?)
	r1 &= 0xfffe
	[P_IOB_Buffer] = r1			// P_IOB_Buffer &= ~(1 << 0);

	r1 = [P_IOB_Mux]			// Mux CCP to IOB
	r1 |= C_IOB_CCPB_En
	[P_IOB_Mux] = r1			// P_IOB_MUX |= C_IOB_CCPB_En;

	r1 = 17535					// Set timer A PWM duty cycle to 0%
	[P_TimerA_PWM_Duty] = r1	// P_TimerA_PWM_Duty = 17535;

	r1 = 17536					// Set timer A PWM frequency to 10Hz
	[P_TimerA_Preload] = r1		// P_TimerA_Preload = 17536;

	r1 = C_PWM_En + C_PWM_HiPulse	// Enable timer A PWM
	[P_TimerA_CCP_Ctrl] = r1	// P_TimerA_CCP_Ctrl = C_PWM_En | C_PWM_HiPulse;

	r1 = C_TimerFlag + C_TimerEn + C_TimerSrcB_High + C_TimerSrcA_SYSdiv2	// Enable timer A
	[P_TimerA_Ctrl] = r1		// P_TimerA_Ctrl = C_TimerFlag | C_TimerEn | C_TimerSrcB_High | C_TimerSrcA_SYSdiv2;

	retf
.endp


// Set PWM backlight brightness
// Returns: void
// Args:
//   int: brightness level 0-10
SetBacklightBrightness:	.proc
	r1 = sp + 3
	r1 = [r1]					// Get argument
	r3 = OFFSET ?table
	r4 = SEG ?table
	r3 += r1					// Offset from table
	r4 += 0, carry
	ds = r4
	r1 = ds:[r3]				// Get mapped value
	[P_TimerA_PWM_Duty] = r1	// Set PWM duty cycle
	retf

?table:
	.dw 17535					// 0%
	.dw 22335					// 10%
	.dw 27135					// 20%
	.dw 31935					// 30%
	.dw 36735					// 40%
	.dw 41535					// 50%
	.dw 46335					// 60%
	.dw 51135					// 70%
	.dw 55935					// 80%
	.dw 60735					// 90%
	.dw 65535					// 100%
.endp


RamCodeEnd:
