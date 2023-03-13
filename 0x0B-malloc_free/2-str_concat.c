#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - Computes the length of a given string.
* @s: Pointer to the first character of the string.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* _strcat - Concatenates two strings.
* @dest: Pointer to the first character of the destination string.
* @src: Pointer to the first character of the source string.
*
* Return: Pointer to the resulting string.
*/
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}

/**
* str_concat - Concatenates two strings.
* @s1: Pointer to the first character of the first string.
* @s2: Pointer to the first character of the second string.
*
* Return: Pointer to the resulting string.
*/
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	result[0] = '\0';

	_strcat(result, s1);
	_strcat(result, s2);

	return (result);
}

