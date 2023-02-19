#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints "and that piece of art is useful" - Dora Korpar,
 * 2015-10-19, followed by a new line, to the standard error
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, quote, 59);

    return (1);
}

