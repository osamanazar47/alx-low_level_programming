#ifndef 3-CALC_H
#define 3-CALC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - the structure of our operation
 * @op: the operator
 * @f: the function that crossbond  to the operator
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
