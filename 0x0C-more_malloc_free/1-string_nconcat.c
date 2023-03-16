#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - concatenates two strings.
* @s1: pointer to first string
* @s2: pointer to second string
* @n: maximum number of bytes of s2 to concatenate
*
* Return: pointer to newly allocated space in memory containing s1 followed by
*         the first n bytes of s2, null-terminated; NULL if memory allocation
*         fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t s1_len, s2_len;
char *result;

if (!s1)
s1 = "";

s1_len = strlen(s1);

if (!s2)
s2 = "";

s2_len = strlen(s2);

if (n >= s2_len)
n = s2_len;

result = malloc(s1_len + n + 1);

if (result == NULL)
return (NULL);

memcpy(result, s1, s1_len);
memcpy(result + s1_len, s2, n);
result[s1_len + n] = '\0';

return (result);
}

