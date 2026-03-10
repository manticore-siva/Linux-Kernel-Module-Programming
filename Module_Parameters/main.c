/* Siva */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");  // This line is mandatory
MODULE_AUTHOR("Manticore");
MODULE_DESCRIPTION("A Sample for Module parameter");
MODULE_VERSION("v_0.1");

int para_val;
int pra(void);

int pra(void)
{
    return para_val;
}

EXPORT_SYMBOL(pra);
module_param(para_val, int, 0);

int init_module(void)
{
    	printk(KERN_INFO "Hello World \n");
	    return 0;
}

void cleanup_module(void)
{
    	printk(KERN_INFO "Good bye from main file\n");
}
