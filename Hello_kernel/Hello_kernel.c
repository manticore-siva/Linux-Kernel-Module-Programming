/* Siva */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");  // This line is mandatory
MODULE_AUTHOR("Manticore");
MODULE_DESCRIPTION("A Sample Kernel Module for Test purpose");
MODULE_VERSION("v_0.1");

int init_module(void)
{
    	printk(KERN_INFO "Hello World \n");
	return 0;
}

void cleanup_module(void)
{
    	printk(KERN_INFO "Good bye world\n");
}
