#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all single digit numbers of base 10 starting from 0,
* followed by a new line. Uses only putchar function, twice.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}

