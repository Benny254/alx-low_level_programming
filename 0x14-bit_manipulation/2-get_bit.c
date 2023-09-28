#include "main.h"

/**
 * get_bit - to get the value of a bit at an index in a decimal number
 * @n: the number to search
 * @index: an index of the bit
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
