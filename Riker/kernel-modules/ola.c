#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

MODULE_LICENSE("Dual BSD/GPL");

static int ola_init(void);
static int ola_exit(void);

module_init(ola_init);
module_exit(ola_exit);

static int ola_init(void) {
  printk("<1> Boas noites Galiza!\n");
  return 0;
}

static void ola_exit(void) {
  printk("<2> Boas días Galiza!\n");
  return 0;
}
