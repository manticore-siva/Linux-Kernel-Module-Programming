/* Siva */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");  // This line is mandatory
MODULE_AUTHOR("Manticore");
MODULE_DESCRIPTION("A Sample Kernel Module for Test purpose");
MODULE_VERSION("v_0.1");
void Export_function(void); /* Function Prototype*/

void Export_function(void){

    printk(KERN_INFO "This is from EXPORT_SYMBOL function\n");
    return;
}
EXPORT_SYMBOL(Export_function);

int __init init_module(void)
{
    	printk(KERN_INFO "EXAMPLE OF EXPORT_SYMBOL() \n");
	    return 0;
}

void cleanup_module(void)
{
    	printk(KERN_INFO "Good bye world\n");
}
