#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints a variable number of arguments based on format string
* @format: a string of format specifiers
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	int ival;
	float fval;
	char *sval;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				ival = va_arg(args, int);
				printf("%d", ival);
				break;
			case 'f':
				fval = va_arg(args, double);
				printf("%f", fval);
				break;
			case 's':
				sval = va_arg(args, char *);
				if (!sval)
					sval = "(nil)";
				printf("%s", sval);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

