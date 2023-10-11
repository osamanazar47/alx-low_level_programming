#include "function_pointers.h"
#include <stdio.h>
/**
 * print - prints a name
 * @name: the name that will be printed
 */
void print(char *name);
/**
 * print_name - prints name
 * @name: the name will be printed
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f = print;
	f(name);
}
/**
 * print - prints the name
 * @name: the name
 */
void print(char *name)
{
	printf("%s\n", name);
}
