#include "variadic_functions.h"
/**
 * format_char - prints a character
 * @separator: the separator
 * @args: the argument
 */
void format_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}
/**
 * format_int - prints an integer
 * @separator: the separator
 * @args: the argument
 */
void format_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}
/**
 * format_float - prints float numbers
 * @separator: the separator
 * @args: the argument
 */
void format_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}
/**
 * format_string - prints a string
 * @separator: the separator
 * @args: the argument
 */
void format_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}
/**
 * print_all - prints anything
 * @format: list of types af arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list args;

	anything_t formats[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (formats[j].anything)
		{
			if (format[i] == formats[j].anything[0])
			{
				formats[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
