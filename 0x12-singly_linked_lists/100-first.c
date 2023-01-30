#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * myStartupFun - run command before main function is executed
 * Return: Success
 */
void myStartupFun(void) __attribute__ ((constructor));

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
