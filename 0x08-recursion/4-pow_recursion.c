#include "main.h"

/**
 * _pow_recursion - to return the value of x raised to the power of y
 * @x: the value to be raised
 * @y: the power
 *
 * Return: the result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
