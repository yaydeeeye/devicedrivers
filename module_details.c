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


MODULE_AUTHOR("Adithya Gopalan");
MODULE_DESCRIPTION("Basic hello world program");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("VIRTUAL");
