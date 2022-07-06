#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - get associated function for an operator
 * @s: operator to search for
 *
 * Return: int (*f)(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int i;

	i = 0;

	while (i < 5)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
