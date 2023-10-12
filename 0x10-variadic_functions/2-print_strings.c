#include "variadic_functions.h"
/**
 * print_strings - prints strings separated and followed by a new line
 * @separator: the separator between strings
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
