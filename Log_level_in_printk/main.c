/* Siva */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");  // This line is mandatory
MODULE_AUTHOR("Manticore");
MODULE_DESCRIPTION("A Sample Kernel Module for Test purpose");
MODULE_VERSION("v_0.1");

int __init init_module(void)
{
    	printk(KERN_INFO "Kernel Informatio \n");
    	printk(KERN_ALERT "Imediate Action \n");
    	printk(KERN_ERR "ERROR \n");
    	printk(KERN_WARNING "Warning \n");
    	printk(KERN_NOTICE "Kernel Notice \n");
    	printk(KERN_DEBUG "Debug message \n");
    	printk(KERN_EMERG "System crash  message \n");
	return 0;
}

void cleanup_module(void)
{
    	printk(KERN_INFO "Good bye world\n");
}
