#include "holberton.h"
#include <stdlib.h>

/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: If memory allocation fails or str is NULL or empty, return NULL.
* Otherwise, return a pointer to an array of strings (words).
*/
char **strtow(char *str)
{
	char **words = NULL;
	int i, j, len, num_words = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			num_words++;

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (len = 0; str[i + len] && str[i + len] != ' '; len++)
				;
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			for (len = 0; str[i + len] && str[i + len] != ' '; len++)
				words[j][len] = str[i + len];
			words[j++][len] = '\0';
		}
	}
	words[j] = NULL;

	return (words);
}

