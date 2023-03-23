#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 *
 * Return: the sum of all the parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int *vals;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	vals = malloc(n * sizeof(int));
	if (vals == NULL)
	{
		exit(EXIT_FAILURE);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		vals[i] = va_arg(args, int);
	}
	va_end(args);

	for (i = 0; i < n; i++)
	{
		sum += vals[i];
	}

	free(vals);
	return (sum);
}
