#include "holberton.h"

/**
 * get_endianness - to check the machine.
 *
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
