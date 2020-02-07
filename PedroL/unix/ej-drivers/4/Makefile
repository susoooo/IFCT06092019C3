myModuleName = memory
obj-m = $(myModuleName).o
build:
	make -C /usr/src/linux-headers-5.3.0-29-generic M=`pwd` modules
loadunload: load unload
load:
	sudo insmod $(myModuleName).ko
unload:
	sudo rmmod $(myModuleName)
clean:
	rm *.o
	rm *.order
	rm *.ko
	rm *.mod
	rm *.mod.c
	rm *.symvers
