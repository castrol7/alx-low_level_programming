#include "main.h"
/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: A pointer to the unsigned long int.
* @index: The index, starting from 0 of the bit you want to set.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

/* Check if index is greater than the number of bits in unsigned long int */
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}

/* mask with a 1 at the bit position we want to clear and 0 elsewhere */
mask = ~(1UL << index);

/* Use bitwise AND to clear the bit at the given index */
*n &= mask;

return (1);
}

