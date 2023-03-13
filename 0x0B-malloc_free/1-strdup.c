#include <stdlib.h>

/**
* _strdup - Returns a pointer to a newly allocated space in memory,
* containing a copy of the string given as a parameter.
* @str: The string to duplicate.
*
* Return: A pointer to the duplicated string, or NULL if insufficient memory
* is available or if str is NULL.
*/
char *_strdup(char *str)
{
int len, i;
char *new_str;

if (str == NULL)
return (NULL);

len = 0;
while (str[len] != '\0')
len++;

new_str = malloc(sizeof(char) * (len + 1));
if (new_str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
{
new_str[i] = str[i];
i++;
}
new_str[i] = '\0';

return (new_str);
}

