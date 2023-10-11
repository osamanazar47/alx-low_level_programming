#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name
 * @name: the name will be printed
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
