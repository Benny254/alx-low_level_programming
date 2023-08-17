#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - To print numbers, followed by a new line.
 * @separator: The string to print between numbers.
 * @n: The number of integers to be passed to the function.
 * @...: The variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int indicator;

	va_start(args, n);

	for (indicator = 0; indicator < n; indicator++)
	{
		printf("%d", va_arg(args, int));

		if (indicator != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}


