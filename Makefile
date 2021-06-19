SDKPATH	:= C:\Program Files (x86)\Generalplus\unSPIDE 4.0.0

BODY	= -body GPL95101UB -bfile gpl95101ub.bdy
BODYDIR	= $(SDKPATH)/Body/GPL951XXXX/GPL951

BINPATH	= $(SDKPATH)/toolchain
INCLUDES	= -I"$(BODYDIR)"

AS		= "${BINPATH}/xasm16.exe"
ASFLAGS	= -t4

LD		= "$(BINPATH)/xlink16.exe"
LDFLAGS	= $(BODY) -tskMaxUsed -initdata -infblk "$(BODYDIR)/SPIF_Calibration.bin" -injcks 0x9040 0x6fc0 0x9010 0x2 0x903e

BIN_TRIM	= "$(BINPATH)/stripper.exe"

.PHONY: all clean

all: firmware.bin

firmware.bin: main.ary main.obj
		$(LD) -at main.ary $@ $(LDFLAGS)
#		Trim regular ROM header off front of file
		$(BIN_TRIM) $@ $@ 0x12000 0 1
		cat main.smy

%.obj: %.asm
		$(AS) $(ASFLAGS) $(INCLUDES) -o$@ $<

clean:
		$(RM) *.obj *.bin *.sbm *.map *.smy *.sym
