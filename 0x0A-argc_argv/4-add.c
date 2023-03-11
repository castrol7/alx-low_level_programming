#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - entry point, adds positive numbers
* @argc: argument count
* @argv: array of pointers to argument strings
*
* Return: 0 if success, 1 if error
*/
int main(int argc, char *argv[])
{
int total = 0;
int i, num;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
char *arg = argv[i];

while (*arg != '\0')
{
if (!isdigit(*arg))
{
printf("Error\n");
return (1);
}
arg++;
}

num = atoi(argv[i]);

if (num > 0)
{
total += num;
}
}

printf("%d\n", total);
return (0);
}

