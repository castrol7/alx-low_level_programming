#include "main.h"
#include <stdio.h>

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: A pointer to an unsigned long integer.
* @index: The index of the bit to set, starting from 0.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if index is within the range of bits of unsigned long int */
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

/* Create a mask with a 0 bit at the given index */
unsigned long int mask = ~(1UL << index);

/* Clear the bit at the given index in the number */
*n &= mask;

return (1);
}

int main(void)
{
unsigned long int n = 109;       /* 0b1101101 in binary */
int result = clear_bit(&n, 3);   /* Clear bit at index 3 */

if (result == 1)
{
printf("The new value of n is: %lu\n", n);
}
else
{
printf("An error occurred.\n");
}

return (0);
}
