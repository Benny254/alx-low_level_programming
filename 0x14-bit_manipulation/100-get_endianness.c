#include "main.h"

/**
 * get_endianness - to check if a machine is little or big endian
 * Return: 0 for a big, 1 for a little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
