#include <stdio.h>

/**
* print_before_main - prints "You're beat!..." before main function is executed
*
* Description: This function prints the message "You're beat!..." before the
* main function is executed.
*
* Return: void
*/
void print_before_main(void) __attribute__((constructor));
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

