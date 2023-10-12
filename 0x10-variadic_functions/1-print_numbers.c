#include "variadic_functions.h"
/**
 * print_numbers - prints numbers separated and followed by new line
 * @separator: the separator between numbers
 * @n: the number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
