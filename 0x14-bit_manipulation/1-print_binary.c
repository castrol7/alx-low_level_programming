#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
* print_binary - Prints the binary representation of an unsigned long int
* @n: The number to print in binary format
*
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned int i;
unsigned long int mask = 1UL << (sizeof(unsigned long int) * CHAR_BIT - 1);

for (i = 0; i < sizeof(unsigned long int) * CHAR_BIT; i++)
{
if ((n & mask) == 0)
_putchar('0');
else
_putchar('1');

mask >>= 1;
}
}

