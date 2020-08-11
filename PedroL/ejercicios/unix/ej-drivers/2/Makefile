myModuleName = hola
obj-m := $(myModuleName).o
build:
	make -C /usr/src/linux-headers-5.3.0-29-generic M=`pwd` modules
loadunload:
	sudo insmod $(myModuleName).ko
	sudo rmmod $(myModuleName)
clean:
	rm *.o
	rm *.order
	rm *.ko
	rm *.mod
	rm *.mod.c
	rm *.symvers
