#include <stdlib.h>

int _putchar(char c);

/**
* argstostr - concatenates all the arguments of your program
* @ac: argument count
* @av: array of strings representing arguments
*
* Return: pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i, j, len = 0, k = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

/* Find total length of arguments */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len++;
}

/* Allocate memory for concatenated string */
str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);

/* Copy arguments into concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0'; /* Null terminate string */

return (str);
}

