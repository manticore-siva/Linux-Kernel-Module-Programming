/* Siva */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");  // This line is mandatory
MODULE_AUTHOR("Manticore");
MODULE_DESCRIPTION("A Sample For Module Parameter");
MODULE_VERSION("v_0.1");

extern int pra(void);

int init_module(void)
{
    	printk(KERN_INFO "Geting value from main file:");
    	printk(KERN_INFO "%d\n", pra());
	    return 0;
}

void cleanup_module(void)
{
    	printk(KERN_INFO "Good bye from prameeter source file\n");
}

