/*  hello.c - The simplest kernel module
 *  Copyrighter
 *  Date
 */

/* Kernel Programming */
#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>

static int num = 0;
static int numArray[4] = {5,5};

module_param(num,int, S_IRUSR | S_IWUSR);
module_param_array(numArray,int,NULL,S_IRUSR | S_IWUSR);

//This is called when the module is "insmod"ed
static int __init
hworld_init(void)
{
    printk (KERN_WARNING"Hello World\n");
    num++;
    return 0;
    //return -1;
    // return a non zero number, if init fails. If init fails, the module can't be loaded
}

//This is called when the module is "rmmod"ed
static void __exit
hworld_exit(void)
{
    int i = 0;
    printk(KERN_ALERT"Goodbye World\n");
    for ( i = 0; i < num; i++ )
        printk(KERN_INFO"%d ",numArray[i]);
    printk(KERN_INFO"\n");
}

module_init(hworld_init);
module_exit(hworld_exit);
