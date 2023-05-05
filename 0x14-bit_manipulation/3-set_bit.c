#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to the unsigned long int
* @index: index, starting from 0, of the bit to set
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
/* check if index is within range */
if (index >= sizeof(unsigned long int) * 8)
return (-1); /* error: index out of range */

/* declare mask variable */
unsigned long int mask;

/* create a mask with bit at index set to 1 */
mask = 1ul << index;

/* set the bit at index to 1 */
*n |= mask;

return (1); /* success */
}

