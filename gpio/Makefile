led.bin: led.c
	arm-linux-gcc -g -c -o led.o led.c
	arm-linux-ld -Ttext 0x0000000 -g led.o -o led_elf
	arm-linux-objcopy -O binary -S led_elf led.bin
clean:
	rm -f led.dis led.bin led_elf *.o