#include "main.h"
/**
*_islower  -checks for lowercase character.
*Return: 1 and 0
*@c: which is an integer
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
