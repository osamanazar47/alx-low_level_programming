#include "3-op_functions.c"
#include <stdio.h>
#include <string.h>
int (*get_op_func(char *s))(int, int)
{
	op_t operator[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (operator[i].op != NULL)
	{
		if (strcmp(operator[i].op, s) == 0)
			return (operator[i].f);
		i++;
	}
	return (operator[i].f);
}
