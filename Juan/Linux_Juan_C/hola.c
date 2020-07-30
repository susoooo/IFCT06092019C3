#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/kern_levels.h>

static int hola_init(void){
printk(KERN_EMERG "Emerg: Hola mundo kernel!!!/n");
printk(KERN_ALERT "Alert: Hola mundo kernel!!!/n");
printk(KERN_CRIT "Crit: Hola mundo kernel!!!/n");
printk(KERN_ERR "Error: Hola mundo kernel!!!/n");
printk(KERN_WARNING "Warning: Hola mundo kernel!!!/n");
printk(KERN_NOTICE "Notice: Hola mundo kernel!!!/n");
printk(KERN_INFO "Info: Hola mundo kernel!!!/n");
printk(KERN_DEBUG "Debug: Hola mundo kernel!!!/n");
return(0);
}

static void hola_exit(void){
printk(KERN_EMERG "Boas noites kernel!!!/n");
printk(KERN_ALERT "Boas noites kernel!!!/n");
printk(KERN_CRIT "Boas noites kernel!!!/n");
printk(KERN_ERR "Boas noites kernel!!!/n");
printk(KERN_WARNING "Boas noites kernel!!!/n");
printk(KERN_NOTICE "Boas noites kernel!!!/n");
printk(KERN_INFO "Boas noites kernel!!!/n");
printk(KERN_DEBUG "Boas noites kernel!!!/n");
printk("<1> Boas noites kernel!!!/n");
}

module_init(hola_init);
module_exit(hola_exit);


MODULE_LICENSE("Dual BSD/GPL");
