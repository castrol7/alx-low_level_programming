#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers passed as arguments
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int a, b, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);

result = a *b;

printf("%d\n", result);

return (0);
}

