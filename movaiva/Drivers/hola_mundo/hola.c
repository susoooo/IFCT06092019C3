#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kern_levels.h>

static int hola_init(void)
{
    printk(KERN_ALERT "Hola mundo kernel!!!!\n");
    return 0;
}

static void hola_exit(void)
{
    printk(KERN_CRIT "Boas noites kernel!!!!\n");
}

module_init(hola_init);
module_exit(hola_exit);

MODULE_LICENSE("Dual BSD/GPL");