#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/kern_levels.h>
#include <linux/config.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/proc_fs.h>
#include <linux/fcntl.h>
#include <asm/system.h>
#include <asm/uaccess.h>

int memory_major = 60;	//major number
char *memory_buffer;	//buffer to store data

int memory_open(struct inode *inode, struct file *filp);
int memory_release(struct inode *inode, struct file *filp);
ssize_t memory_read(struct file *filp, char *buf, size_t count, loff_t *f_pos);
ssize_t memory_write(struct file *filp, char *buf, size_t count, loff_t *f_pos);
int memory_init(void);
void memory_exit(void);

struct file_operations memory_fops = {
 read: memory_read,
 write: memory_write,
 open: memory_open,
 release: memory_release,
};

static int memory_init(void)
{
  return 0;
}

static void memory_exit(void)
{
}

module_init(memory_init);
module_exit(memory_exit);

MODULE_LICENSE("Dual BSD/GPL");
