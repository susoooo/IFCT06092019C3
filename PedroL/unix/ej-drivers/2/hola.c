#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

static int hola_init(void);
static int hola_exit(void);

module_init(hola_init);
module_init(hola_exit);

static int hola_init(void)
{
  printfk("<1> Yo...\n"); //<1> == alarm loglevel
  return (0);
}

static int hola_exit(void)
{
  printk("");
  return (0);
}

MODULE_LICENSE("Dual BSD/GPL");
