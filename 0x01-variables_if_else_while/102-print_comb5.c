#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible combinations of two two-digit numbers
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i, j, k, l;

for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
k = i / 10;
l = i % 10;

if (i < j && j <= 99)
{
putchar('0' + k);
putchar('0' + l);
putchar(' ');
k = j / 10;
l = j % 10;
putchar('0' + k);
putchar('0' + l);

if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}

