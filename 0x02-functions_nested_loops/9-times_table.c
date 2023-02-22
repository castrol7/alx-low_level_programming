#include "main.h"

/**
* print_9_times_table - prints the 9 times table, starting with 0
*/
void print_9_times_table(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int product = i * j;
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
_putchar(' ');
}
_putchar('\n');
}
}

















