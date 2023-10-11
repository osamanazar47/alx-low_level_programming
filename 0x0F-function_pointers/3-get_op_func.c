#include "3-calc.h"
/**
 * get_op_func - returns a pointer to the suitable function
 * @s: the operator
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ope[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && s[0] == ope[i].op && !s[1])
			return (op[i].f);
		i++;
	}
	return (NULL);
}
