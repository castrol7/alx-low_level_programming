#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the name of the file it was compiled from
 * to the standard output, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}

