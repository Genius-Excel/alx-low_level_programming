#include <stdio.h>

/**
* first_main - this fuction executes before main.
* Return: void
*/

void first_main(void) __attribute__((constructor));

void first_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
