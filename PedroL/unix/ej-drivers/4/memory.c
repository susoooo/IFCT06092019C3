#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/kern_levels.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/proc_fs.h>
#include <linux/fcntl.h>
#include <asm/uaccess.h>

#define DEV_MEMSIZE 5

int memory_major = 60;	//major number
char *memory_buffer;	//buffer to store data

int memory_open(struct inode *inode, struct file *filp);
int memory_release(struct inode *inode, struct file *filp);
ssize_t memory_read(struct file *filp, char *buf, size_t count, loff_t *f_pos);
ssize_t memory_write(struct file *filp, const char *buf, size_t count, loff_t *f_pos);
static int memory_init(void);
static void memory_exit(void);

struct file_operations memory_fops = {
  read: memory_read,
  write: memory_write,
  open: memory_open,
  release: memory_release,
};

static int memory_init(void)
{
  int result;
  
  result = register_chrdev(memory_major, "memory", &memory_fops); //register device
  if (result < 0) {
    printk(KERN_ALERT "memory: cannot obtain major number %d\n", memory_major);
    return result;
  }

  memory_buffer = kmalloc(DEV_MEMSIZE, GFP_KERNEL); //allocate memory for the bffer
  if (!memory_buffer) {
    result = -ENOMEM;
    goto fail;
  }
  memset(memory_buffer, 0, DEV_MEMSIZE);
  printk(KERN_ALERT "Inserting memory module\n");

  return 0;

  fail:
    memory_exit();
    return result;
}

static void memory_exit(void)
{
  unregister_chrdev(memory_major, "memory"); //free major number

  if (memory_buffer) {
    kfree(memory_buffer); //free buffer memory
  }

  printk(KERN_ALERT "Removing memory moudle\n");
}

int memory_open(struct inode *inode, struct file *filp)
{
  return 0; //success
}

int memory_release(struct inode *inode, struct file *filp)
{
  return 0; //success
}

ssize_t memory_read(struct file *filp, char *buf, size_t count, loff_t *f_pos)
{
  int charsread;

  charsread = 0;

  if (*f_pos == 0) {
    if (count > DEV_MEMSIZE) {
      raw_copy_to_user(buf, memory_buffer, DEV_MEMSIZE);
      *f_pos += 5;
      charsread = DEV_MEMSIZE;
    } else {
      raw_copy_to_user(buf, memory_buffer, count);
      *f_pos += count;
      charsread = count;
    }
  } else {
    charsread = 0;
  }
  return charsread;
}

ssize_t memory_write(struct file *filp, const char *buf, size_t count, loff_t *f_pos)
{
  char *tmp;

  if (count <= DEV_MEMSIZE)  {
    tmp = buf;
  } else {
    tmp = buf + count - DEV_MEMSIZE;
  }
  
  raw_copy_from_user(memory_buffer, tmp, count);

  return 1;
}

module_init(memory_init);
module_exit(memory_exit);

MODULE_LICENSE("Dual BSD/GPL");
