#include "main.h"
/**
* get_endianness - checks the endianness of the system
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
int num = 1;
char *endian = (char *)&num;

if (*endian == 1)
{
/* Little Endian */
return (1);
}
else
{
/* Big Endian */
return (0);
}
}

