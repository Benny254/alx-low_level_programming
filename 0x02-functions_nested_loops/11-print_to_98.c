#include <stdio.h>


/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int j;

	if (n >= 98)
	{
	for (j = n; j > 98; j--)
	{
		printf("%d, ", j);
	}
		printf("%d\n", j);
	}
		else
	{
	for (j = n; j < 98; j++)
	{
		printf("%d, ", j);
	}
		printf("%d\n", j);
	}
}
