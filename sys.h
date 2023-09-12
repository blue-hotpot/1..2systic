#ifndef _SYS_H
#define _SYS_H

#include "gd32f4xx.h"
#include "systick.h"


#define BIT_ADDRESS(byte_offset,bit_mumber) (volatile unsigned long*)(0x42000000+(byte_offset<<5)+(bit_mumber<<2))
	//0x42000000位带操作的起始地址

#define GPIOD_OCTL_OFFSET ((GPIOD+0X14U)-0X40000000)

#define PD_OUT(n) *(BIT_ADDRESS(GPIOD_OCTL_OFFSET,n))
//GPIOD_OCTL_OFFSET为偏移地址，n为位数




#endif


