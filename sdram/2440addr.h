#ifndef __2440ADDR_H__
#define __2440ADDR_H__

#define rGPACON    (*(volatile unsigned *)0x56000000)	//Port A control
#define rGPADAT    (*(volatile unsigned *)0x56000004)	//Port A data

#define rGPBCON    (*(volatile unsigned *)0x56000010)	//Port B control
#define rGPBDAT    (*(volatile unsigned *)0x56000014)	//Port B data
#define rGPBUP     (*(volatile unsigned *)0x56000018)	//Pull-up control B

#define rGPCCON    (*(volatile unsigned *)0x56000020)	//Port C control
#define rGPCDAT    (*(volatile unsigned *)0x56000024)	//Port C data
#define rGPCUP     (*(volatile unsigned *)0x56000028)	//Pull-up control C

#define rGPDCON    (*(volatile unsigned *)0x56000030)	//Port D control
#define rGPDDAT    (*(volatile unsigned *)0x56000034)	//Port D data
#define rGPDUP     (*(volatile unsigned *)0x56000038)	//Pull-up control D

#define rGPECON    (*(volatile unsigned *)0x56000040)	//Port E control
#define rGPEDAT    (*(volatile unsigned *)0x56000044)	//Port E data
#define rGPEUP     (*(volatile unsigned *)0x56000048)	//Pull-up control E

#define rGPFCON    (*(volatile unsigned *)0x56000050)	//Port F control
#define rGPFDAT    (*(volatile unsigned *)0x56000054)	//Port F data
#define rGPFUP     (*(volatile unsigned *)0x56000058)	//Pull-up control F

#define rGPGCON    (*(volatile unsigned *)0x56000060)	//Port G control
#define rGPGDAT    (*(volatile unsigned *)0x56000064)	//Port G data
#define rGPGUP     (*(volatile unsigned *)0x56000068)	//Pull-up control G

#define rGPHCON    (*(volatile unsigned *)0x56000070)	//Port H control
#define rGPHDAT    (*(volatile unsigned *)0x56000074)	//Port H data
#define rGPHUP     (*(volatile unsigned *)0x56000078)	//Pull-up control H

#define rGPJCON    (*(volatile unsigned *)0x560000d0)	//Port J control
#define rGPJDAT    (*(volatile unsigned *)0x560000d4)	//Port J data
#define rGPJUP     (*(volatile unsigned *)0x560000d8)	//Pull-up control J

#endif