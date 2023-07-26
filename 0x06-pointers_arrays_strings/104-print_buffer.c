#include "main.h"
#include <stdio.h>

/**
 * print_buffer - to print buffer
 * @b: a buffer
 * @size: the size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int w, y, x;

	w = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (w < size)
	{
		y = size - w < 10 ? size - w : 10;
		printf("%08x: ", w);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
				printf("%02x", *(b + w + x));
			else
				printf(" ");
			if (x % 2)
			{
				printf(" ");
			}
		}
		for (x = 0; x < y; x++)
		{
			int c = *(b + w + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("\n");
			w += 10;
		}
	}
				

}
