cmd_/home/pi/raspi_led_morse/myled.ko := ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o /home/pi/raspi_led_morse/myled.ko /home/pi/raspi_led_morse/myled.o /home/pi/raspi_led_morse/myled.mod.o ;  true
