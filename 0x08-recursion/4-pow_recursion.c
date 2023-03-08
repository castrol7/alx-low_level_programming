#include "main.h"

/**
* _pow_recursion - return value of x to the power of y
* @x: value to raise
* @y: power
*
* Return: result of 'x' raised to power of 'y', or -1 if 'y' is negative
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}

