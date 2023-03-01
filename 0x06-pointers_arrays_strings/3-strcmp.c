#include "main.h"

/**
* _strcmp - compare two strings
* @s1: pointer to the first string
* @s2: pointer to the second string
*
* Return: an integer less than, equal to, or greater than zero if s1 is found,
* respectively, to be less than, to match, or be greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}

i++;
}

/* Strings have matched up to this point, check for any remaining characters */
if (s1[i] != '\0')
{
return (s1[i]);
}
else if (s2[i] != '\0')
{
return (-s2[i]);
}

return (0);
}

