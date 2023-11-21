#include "main.h"

/**
 * times_table _ Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int mult, num, prod;

	for (mult = 0; mult <= 9; mult++)
	{
		_putchar('0');

		for (num = 1; num <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			prod = mult * num;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
