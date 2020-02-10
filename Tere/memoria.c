/*1-Includes*/

#include <linux/init.h>
#include <linux/config.h>
#include <linux/module.h>
#include <linux/kernel.h> /* printk() */
#include <linux/slab.h>   /* kmalloc() */
#include <linux/fs.h>     /* everything... */
#include <linux/errno.h>  /* error codes */
#include <linux/types.h>  /* size_t */
#include <linux/proc_fs.h>
#include <linux/fcntl.h>  /* O_ACCMODE */
#include <asm/system.h>   /* cli(), *_flags */
#include <asm/uaccess.h>  /* copy_from/to_user */

/*2-Declaración de funciones*/

int memory_open(struct inode *inode, struct file *filp);

int memory_release(struct inode *inode, struct file *filp);

ssize_t memory_read(struct file *filp, char *buf, size_t count, loff_t *f_pos); /*buf -> buffer es el puntero de memoria*/

ssize_t memory_write(struct file *filp, char *buf, size_t count, loff_t *f_pos);

void memory_exit(void);

int memory_init(void);


/*3-Struct de funciones de acceso*/

struct file_operations memory_fops = {

  read: memory_read,

  write: memory_write,

  open: memory_open,

  release: memory_release

};





/*5-Variables globales*/

/* Major number */

int memory_major = 60;


/*6-Buffer to store data, es nuestro puntero que apunta a un buffer */

char *memory_buffer;


/*7.1-Conexión con los archivos del dispositivo*/

/*7.1.1-creación del archivo.

En el terminal ponemos lo siguiente:

mknod /dev/memory c 60 0

Sale el permiso denegado, entonces ponemos el sudo delante*/


/*7.1.2-Programación de la inicialización*/

int memory_init(void) {
  int result;
  /* Registering device */
  result = register_chrdev(memory_major, "memory", &memory_fops);
  if (result < 0) {
    printk("<1>memory: cannot obtain major number %d\n", memory_major);
    return result;
  }
 /* Allocating memory for the buffer */
  memory_buffer = kmalloc(1, GFP_KERNEL); 
 if (!memory_buffer) { 
    result = -ENOMEM;
    goto fail; 
  } 
  memset(memory_buffer, 0, 1);
  printk("<1>Inserting memory module\n"); 
 return 0;
 fail: 
   memory_exit(); 
    return result;
}

/*7.2-Eliminando el dispositivo*/

void memory_exit(void) {
  /* Freeing the major number */
  unregister_chrdev(memory_major, "memory");
  /* Freeing buffer memory */
  if (memory_buffer) {
    kfree(memory_buffer);
  }
  printk("<1>Removing memory module\n");
}


/*7.3-Abriendo el dispositivo como un fichero*/

int memory_open(struct inode *inode, struct file *filp) {
  		/* Success */
  return 0;
}


/*7.4-Cerrando el dispositivo como un fichero*/

int memory_release(struct inode *inode, struct file *filp) {
  /* Success */
  return 0;
}



/*7.5-Leyendo el dispositivo*/

ssize_t memory_read(struct file *filp, char *buf, size_t count, loff_t *f_pos) { 
  /* Transfering data to user space */ 
  copy_to_user(buf,memory_buffer,1);
  /* Changing reading position as best suits */ 
  if (*f_pos == 0) { 
    *f_pos+=1; 
    return 1; 
  } else { 
    return 0; 
  }
}


/*7.6-Escribiendo al dispositivo*/

ssize_t memory_write( struct file *filp, char *buf, size_t count, loff_t *f_pos) {
  char *tmp;
  tmp=buf+count-1;
  copy_from_user(memory_buffer,tmp,1);
  return 1;
}


/*8-Ejecutando el driver...

Compilamos como los anteriores.

Cargamos 
# insmod memory.ko

# chmod 666 /dev/memory

$ echo -n abcdef >/dev/memory

To check the content of the device you can use a simple cat:

$ cat /dev/memory*/


/*4-Funciones init y exit*/

module_init(memory_init);

module_exit(memory_exit);





MODULE_LICENSE("Dual BSD/GPL");

