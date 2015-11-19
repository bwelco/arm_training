@*******************************************
@启动文件 转入main函数
@*******************************************

.text
.global _start
_start:
		ldr R0, =0x53000000            @  watchdog寄存器地址
		mov R1, #0x0				   
		str R1, [R0]				   @  写入0 禁止看门狗启动

		ldr sp, =1024*4                @  设置4k堆栈（SRAM）

		bl main						   @  调用main
halt_loop:
		b halt_loop