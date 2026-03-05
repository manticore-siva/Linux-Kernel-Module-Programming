/* Siva */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");  // This line is mandatory
MODULE_AUTHOR("Manticore");
MODULE_DESCRIPTION("TEST EXPORT_SYSMBOL()");
MODULE_VERSION("v_0.1");


int fun1(void);
void fun2(void);
extern void demo(void);

int fun1(void)
{
        printk(KERN_ALERT "TEST FILE ==> Hello, world\n");
        demo();
	    return 0;
}

void fun2(void)
{
    	printk(KERN_INFO "Good bye world\n");
}

module_init(fun1);
module_exit(fun2);

