#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w;

	for (w = 0; w < 10; w++)
		putchar((w % 10) + '0');

	putchar('\n');

	return (0);
}
