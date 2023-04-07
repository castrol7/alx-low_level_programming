#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
* print_binary - Prints the binary representation of an unsigned long int.
*
* @n: The unsigned long int to print.
*/
void print_binary(unsigned long int n)
{
	char c;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	c = (n & 1) + '0';
	write(STDOUT_FILENO, &c, 1);
}

