<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>
void main()
{
char *caracter;

int num;
int cont;

printf("Dime los caracteres que quieres: ");
scanf("%d",&num);
getchar();
caracter=malloc(sizeof(char)*num);
for(cont=0;cont<num;cont++)
{
  printf("\nIntroduce caracteres %d:",cont+1);
  scanf("%c",&caracter[cont]);
  getchar;
=======
#include <linux/init.h>
//#include <linux/config.h>
#include <linux/module.h>
#include <linux/kernel.h> /* printk() */
#include <linux/slab.h>   /* kmalloc() */
#include <linux/fs.h>     /* everything... */
#include <linux/errno.h>  /* error codes */
#include <linux/types.h>  /* size_t */
#include <linux/proc_fs.h>
#include <linux/fcntl.h>  /* O_ACCMODE */
//#include <asm/system.h>   /* cli(), *_flags */
#include <asm/uaccess.h>  /* copy_from/to_user */

/* Major number */

int memory_major = 60;

/* Buffer to store data */

char *memory_buffer[5];

int memory_open(struct inode *inode, struct file *filp);

int memory_release(struct inode *inode, struct file *filp);

ssize_t memory_read(struct file *filp,  char *buf, size_t count, loff_t *f_pos);

ssize_t memory_write(struct file *filp, const char *buf, size_t count, loff_t *f_pos);

void memory_exit(void);

int memory_init(void);

struct file_operations memory_fops = {

  read: memory_read,

  write: memory_write,

  open: memory_open,

  release: memory_release

};

int memory_init(void) {
  int result;
  /* Registering device */
  result = register_chrdev(memory_major, "memory", &memory_fops);
  if (result < 0) {
    printk("<1>memory: cannot obtain major number %d\n", memory_major);
    return result;
  }
 /* Allocating memory for the buffer */
  memory_buffer[5] = kmalloc(5, GFP_KERNEL);
 if (!memory_buffer) {
    result = -ENOMEM;
    goto fail;
  }
  memset(memory_buffer, 0, 5);
  printk("<1>Inserting memory module\n");
 return 0;
 fail:
   memory_exit();
    return result;
>>>>>>> 8fdb877eb39804fc629e6a39a65687ddd5300d72
}
 printf("\nHas introducido:");

for(cont=0;cont<num;cont++)
{
   printf("%c",caracter[cont]);
}
printf("\n");
}
<<<<<<< HEAD
=======

int memory_release(struct inode *inode, struct file *filp) {
  /* Success */
  return 0;
}

ssize_t memory_read(struct file *filp, char *buf, size_t count, loff_t *f_pos) {
  /* Transfering data to user space */
  raw_copy_to_user(buf,memory_buffer,1);
  /* Changing reading position as best suits */
  if (*f_pos == 0) {
    *f_pos+=1;
    return 0;
  } else {
    return 0;
  }
}

ssize_t memory_write( struct file *filp, const char *buf, size_t count, loff_t *f_pos) {
  char *tmp;
  tmp=buf+count-1;
  raw_copy_from_user(memory_buffer[5],tmp,1);
  return 0;
}

module_init(memory_init);

module_exit(memory_exit);

MODULE_LICENSE("Dual BSD/GPL");
>>>>>>> 8fdb877eb39804fc629e6a39a65687ddd5300d72
