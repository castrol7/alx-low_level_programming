#include "main.h"
#include <stdio.h>
/**
*_strncpy - copies up to n characters from the source string src to thei
*destination string dest, and then adds a terminating null byte.
*@dest: pointer to the destination string
*@src: pointer
*@n: input value
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
