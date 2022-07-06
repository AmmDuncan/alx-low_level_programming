#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder from dividing two integers
 *
 * @a: first operand
 * @b: second operand
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
