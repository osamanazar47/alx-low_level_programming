#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
#include <unistd.h>
void _putchar(char c)
{
	write(1, &c, 1);
}
#endif
