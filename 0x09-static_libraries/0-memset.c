#include "main.h"
/**
 * _memset - to fill a block of memory with a specfic value
 * @s: starting the address of memory to be filled
 * @b: A desired value
 * @n: the number of bytes to be changed
 *
 * Return: the changed array with new value for n bytes
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
