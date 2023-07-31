#include "main.h"
/**
 * _memset - to fill a block of memory with a particular value
 * @s: to start an address of memory to be filled
 * @b: desired value
 *
 * Return: changing  an array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
