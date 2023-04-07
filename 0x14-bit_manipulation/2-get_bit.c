#include "main.h"
#include <limits.h>

/**
* get_bit - Returns the value of a bit at a given index.
*
* @n: The unsigned long int to get the bit from.
* @index: The index of the bit to get.
*
* Return: The value of the bit at index or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);

	return ((n >> index) & 1);
}

