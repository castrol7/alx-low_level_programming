#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet in lowercase ten times
*
* Return: void
*/

void print_alphabet_x10(void)
{
char letter = 'a';
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(letter);
letter++;
}
letter = 'a'; /* reset letter to 'a' after each iteration */
_putchar('\n');
}
}

