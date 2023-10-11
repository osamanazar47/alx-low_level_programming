#include "3-calc.h"
int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (op[i].op != NULL)
	{
		if (s && strcmp(ops[i].op, s) == 0)
			return (op[i].f);
		i++;
	}
	return (op[i].f);
}
