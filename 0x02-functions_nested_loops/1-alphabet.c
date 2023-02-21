#include "main.h"
int _putchar(char c);
/**
* print_alphabet - prints the alphabet in lowercase, followed by a new line
*/
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}

