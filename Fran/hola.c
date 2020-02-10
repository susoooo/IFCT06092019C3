#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kern_levels.h>

static int hola_init(void)
{
    printk(KERN_ERR  "-------------------------\n");
    printk(KERN_DEBUG "Hola DEBUG Kernelworld!!!\n");
    printk(KERN_INFO "Hola INFO Kernelworld!!!\n");
    printk(KERN_NOTICE "Hola NOTICE Kernelworld!!!\n");
    printk(KERN_WARNING "Hola WARNING Kernelworld!!!\n");
    printk(KERN_ERR "Hola ERR Kernelworld!!!\n");
    printk(KERN_CRIT "Hola CRIT Kernelworld!!!\n");
    printk(KERN_ALERT "Hola ALERT Kernelworld!!!\n");
    printk(KERN_EMERG "Hola EMERG Kernelworld!!!\n");
    printk(KERN_ERR  "-------------------------\n");
    return(0);
}

static void hola_exit(void)
{
    printk(KERN_ERR  "-------------------------\n");
    printk(KERN_DEBUG "Adios DEBUG Kernelworld!!!\n");
    printk(KERN_INFO "Adios INFO Kernelworld!!!\n");
    printk(KERN_NOTICE "Adios NOTICE Kernelworld!!!\n");
    printk(KERN_WARNING "Adios WARNING Kernelworld!!!\n");
    printk(KERN_ERR "Adios ERR Kernelworld!!!\n");
    printk(KERN_CRIT "Adios CRIT Kernelworld!!!\n");
    printk(KERN_ALERT "Adios ALERT Kernelworld!!!\n");
    printk(KERN_EMERG "Adios EMERG Kernelworld!!!\n");
    printk(KERN_ERR  "-------------------------\n");
}

module_init (hola_init);
module_exit (hola_exit);

MODULE_LICENSE("Dual BSD/GPL");
