#include "3-calc.h"

int op_add(int c, int d);
int op_sub(int c, int d);
int op_mul(int c, int d);
int op_div(int c, int d);
int op_mod(int c, int d);

/**
 * op_add - to return the sum of two numbers.
 * @c: first number.
 * @d: second number.
 *
 * Return: The sum of c and d.
 */
int op_add(int c, int d)
{
	return (c + d);
}
/**
 * op_sub - to return the difference of two numbers.
 * @c: first number.
 * @d: second number.
 *
 * Return: The difference of c and d.
 */
int op_sub(int c, int d)
{
	return (c - d);
}
/**
 * op_mul - to return the product of two numbers.
 * @c: first number.
 * @d: second number.
 *
 * Return: The product of c and d.
 */
int op_mul(int c, int d)
{
	return (c * d);
}
/**
 * op_div - to return the division of two numbers.
 * @c: first number.
 * @d: second number.
 *
 * Return: The quotient of c and d.
 */
int op_div(int c, int d)
{
	return (c / d);
}
/**
 * op_mod - to return the remainder of the division of two numbers.
 * @c: first number.
 * @d: second number.
 *
 * Return: The remainder of the division of c by d.
 */
int op_mod(int c, int d)
{
	return (c % d);
}
