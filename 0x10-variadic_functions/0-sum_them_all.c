#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - To return the sum of all its paramters.
 * @n: The Number of Paramters Passed to a Function.
 * @...: A variable number of paramters to calculate the sum of all arguements.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
