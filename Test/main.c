/* Siva */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");  // This line is mandatory
MODULE_AUTHOR("Manticore");
MODULE_DESCRIPTION("A Sample Kernel Module for Test purpose");
MODULE_VERSION("v_0.1");

int fun1(void);
void fun2(void);
void demo(void);

//EXPORT_SYMBOL(demo);
int val = 10;

module_param(val, int, 0); /* Name = val , Data->type, Permision*/

void demo(void){

    printk(KERN_INFO "Hii this is from EXPORT_SYMBOL");
    printk(KERN_ALERT "Value = %d\n",val);
}

int fun1(void)
{
        printk(KERN_ALERT "Hello, world\n");
    	printk(KERN_INFO "Hello World \n");
        demo();
	    return 0;

}

void fun2(void)
{
    	printk(KERN_INFO "Good bye world\n");
}

module_init(fun1);
module_exit(fun2);
