#include "main.h"
/**
 * print_last_digit - To print last digit
 *
 * @n: an integer to get last digit from
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int w;

	w = n % 10;

	if (w <= 0)
		w = -1 * w;
	_putchar(w + '0');
	return (w);
}
