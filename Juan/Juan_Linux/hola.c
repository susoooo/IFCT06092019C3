#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

static int hola_init(void){
printk("<1> Hola mundo kernel!!!/n");
return(0);
}

static int hola_exit(void){
printk("<1> Boas noites kernel!!!/n");
return(0);
}

module_init(hola_init);
module_exit(hola_exit);


MODULE_LICENSE("Dual BSD/GPL");
