#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kern_levels.h>

static int hola_init(void)
{
    printk("1" "Hola Kernelworld!!!\n");
    return(0);
}

static void hola_exit(void)
{
    printk("1" "Adios Kernelworld!!!\n");
}

module_init(hola_init);
module_exit(hola_exit);

MODULE_LICENSE("Dual BSD/GPL");

