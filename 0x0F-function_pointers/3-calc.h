#ifndef CALC_H
#define CALC_H
#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * struct op - struct operator
 * @op: operator
 * @f: associated function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
