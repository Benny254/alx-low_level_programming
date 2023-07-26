#include "main.h"

/**
 * rev_string - A reverse array
 * @n: An integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int x = 0;
	int y = 0;
	char temp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		temp = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = temp;
	}
}

/**
 * infinite_add - add 2 numbers all together
 * @n1: the representation of first text number to be added
 * @n2: the representation of second text number to be added
 * @r:  the pointer to buffer
 * @size_r: buffer size
 * Return: the pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, x = 0, y = 0, digits = o;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || overflow == 1)
	{
		if (x < 0)
			val1 = 0;
		else
			val1 = *(n1 + x) - '0';
		if (y < 0)
			val2 = 0;
		else
			val2 = *(n2 + y) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		y--;
		x--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
