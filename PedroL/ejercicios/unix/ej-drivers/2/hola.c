#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/kern_levels.h>

static int hola_init(void)
{
  printk(KERN_EMERG "<0>\n");
  printk(KERN_ALERT "<1>\n");
  printk(KERN_CRIT "<2>\n");
  printk(KERN_ERR "<3>\n");
  printk(KERN_WARNING "<4>\n");
  printk(KERN_NOTICE "<5>\n");
  printk(KERN_INFO "<6>\n");
  printk(KERN_DEBUG "<7>\n");
  return 0;
}

static void hola_exit(void)
{
  printk(KERN_ALERT "# # # # # # # # # #\n");
  printk(KERN_CRIT "# # # # # # # # # #\n");
}

module_init(hola_init);
module_exit(hola_exit);

MODULE_LICENSE("Dual BSD/GPL");
