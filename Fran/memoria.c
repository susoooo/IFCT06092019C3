#include <linux/init.h>
//#include <linux/autoconf.h>
#include <linux/module.h>
#include <linux/kernel.h>   /* printk() */
#include <linux/slab.h>     /* kmalloc() */
#include <linux/fs.h>       /* everything... */
#include <linux/errno.h>    /* error codes */
#include <linux/types.h>    /* size_t */
#include <linux/proc_fs.h>
#include <linux/fcntl.h>    /* O_ACCMODE */
//#include <asm/system.h>     /* cli(), *_flags */
#include <asm/uaccess.h>    /* copy_from/to_user */

/* Variables globales del driver */

/* Major number */

int memory_major = 60;

/* Buffer to store data */

char * memory_buffer[5];

/* Declaracion de funciones en memoria.c*/

int memory_open(struct inode *inode, struct file *filp);
int memory_release(struct inode *inode, struct file *filp);

ssize_t memory_read(struct file *filp, char * buf[5], size_t count, loff_t *f_pos);
ssize_t memory_write(struct file *filp, const char * buf[5], size_t count, loff_t *f_pos);

void memory_exit(void);
int memory_init(void);

/* Structure that declares the usual file */

/* access functions */

struct file_operations memory_fops =
{

  read: memory_read,
  write: memory_write,
  open: memory_open,
  release: memory_release

};


/* Declaration of the init and exit functions */

module_init(memory_init);
module_exit(memory_exit);

MODULE_LICENSE("Dual BSD/GPL");

int memory_init(void)
{

  int result;

  /* Registering device */

  result = register_chrdev(memory_major, "memory", &memory_fops);

  if (result < 0)
  {
    printk("<1>memory: cannot obtain major number %d\n", memory_major);
    return result;
  }

  /* Allocating memory for the buffer */

  memory_buffer = (char *) kmalloc(5, GFP_KERNEL);

  if (!memory_buffer)
  {
    result = -ENOMEM;
    goto fail;
  }

  memset(memory_buffer, 0, 5);

  printk("<1>Inserting memory module\n");

  return 0;

  fail:
    memory_exit();
    return result;

}

void memory_exit(void)
{
  /* Freeing the major number */

  unregister_chrdev(memory_major, "memory");

  /* Freeing buffer memory */

  if (strlen(*memory_buffer)!=0)
  {
    kfree(memory_buffer);
  }

  printk("<1>Removing memory module\n");

}

int memory_open(struct inode *inode, struct file *filp)
{
  /* Success */

  return 0;
}

int memory_release(struct inode *inode, struct file *filp)
{
  /* Success */

  return 0;
}

ssize_t memory_read(struct file *filp, char * buf[5], size_t count, loff_t *f_pos)
{
    int cont;
  /* Transfering data to user space */

  for (cont = 0; cont < count; cont++)
  {
    raw_copy_to_user(buf[cont],memory_buffer[cont],5);
  }

  /* Changing reading position as best suits */

  if (*f_pos == 0)
  {
    *f_pos += 1;

    return 1;
  }
  else
  {
    return 0;
  }

}

ssize_t memory_write( struct file *filp, const char * buf[5], size_t count, loff_t *f_pos)
{
  char * tmp[5];
  int cont;

  // tmp = buf + count - 1;

  for (cont = 0; cont < count; cont++)
  {
    tmp[cont] = memory_buffer[cont];

    raw_copy_from_user(memory_buffer[cont], tmp[cont], 5);
  }


  return 1;
}

