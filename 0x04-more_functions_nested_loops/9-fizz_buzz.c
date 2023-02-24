#include "main.h"

/**
* main - entry point
* Description: Prints numbers from 1 to 100, but replaces multiples of 3 with
* "Fizz", multiples of 5 with "Buzz", and multiples of both with "FizzBuzz".
* Return: Always 0
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else if (i % 3 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar(' ');
}
else if (i % 5 == 0)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else
{
printf("%d ", i);
}
}

putchar('\n');

return 0;
}

