#include "main.h"

/**
 * print_number - To print numbers chars
 * @n: An integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n2;

	n2 = n;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n2 / 10);
	}
	_putchar((n2 % 10) + '0');
}