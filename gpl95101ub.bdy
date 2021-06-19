[ARCH]
BODY=GPL95101UB;
SEC=RAM,0,27FF,W;
SEC=I/O,7000,7FFF,W;
SEC=RESERVEROM,8000,903F,W;
SEC=ROM,9040,FFEF,F;
SEC=ROM,10000,1FF6FFF,F;
SEC=Interrupt,FFF0,FFFF,W;
BANK=4,FFFFF;
CPUTYPE=unsp002;
DMAENABLE=1;
CHIPSEL=0;
DEFAULTISAVER=ISA20;
MEMORYTYPE=GeneralFlash;
USB_SCK_SEL=6;
LOCATE=IRQVec,FFF5;
USB_SLEEP=14;
PCTR_EXIST=1;
PCTR_ASYNCSRAM=1;
PESUDOINST=7FFF;
INITDATA=1;
NEWSIMKERNEL=6;
NOTSHOWINTENAL=1;
DisableRomSel=1;
SETSTACKSIZE=1;
AccessOut4MReg=7810;
FastCPU=7807,8400;
UseGPL162xxxDownloadTool=0;
SysInit=sysinit.mem;
EnableICEBurstMode=7800,2748;
ROMSelectAddr=0x7816;
ROMSelectValue=0x01;
ICResetVecAddr=8FFF;
---	// SupportSPIFlashCalibration: The start address of caculating check sum, The end address of caculating check sum, Fill Address, Set Size,File Path. It's used for GPL951 ---;
SupportSPIFlashCalibration=9040,FFFF,9010,2,Body\GPL951XXXX\GPL951\SPIF_Calibration.bin,903E;
SupportDownloadExtFlashAndFreeRun=1;
DownloadInternalMemoryAsDownloadExternalMemory=1;
DisableDownloadExternalMomery=1;
DisableCheckInternalMemoryEnoughMechanism=1;
EnableDefaultOutputIsTSKFile=1;
EnableDefaultDeviceIsICE=1;
EnableDefaultDownloadVerify=1;
DisbleDefaultCheckedIncludeStartupCode=1;
OpenProjectToLoadDefaultFile=1;
ChangeBodyToModifyDefautlProjectSetting=1;
--- // eFuseInfo: Read eFuseInfo address (word mode), Read Length ---;
eFuseInfo=7AE3,1;
LimitFirwmareVersion=0x01020403;
--- // UploadExternalMemoryFeature: Upload External Memory Feature (0x01: Upload SPI Flash Data, 0x02: Get Status Register, 0x04: Set Status Register) ---;
UploadExternalMemoryFeature=0x03;
SupportLinkProProbeFeature=1;
DisableCompilerTypeOption=1;