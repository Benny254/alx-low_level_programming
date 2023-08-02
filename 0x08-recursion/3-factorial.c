#include "main.h"

/**
 * factorial - To return the factorial of a number
 * @n: The number to be return factorial from
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
