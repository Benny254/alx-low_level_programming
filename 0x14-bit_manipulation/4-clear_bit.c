#include "main.h"

/**
 * clear_bit - to set the value of a bit at a given index to 0.
 * @n: A pointer to the bit to be changed.
 * @index: index of the bit to be cleared 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
