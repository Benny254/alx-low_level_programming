#include "main.h"
/**
 * _memcpy - the function that copies memory area
 * @dest: memory where it is stored
 * @src: the memory where it is copied
 * @n: the number of bytes
 *
 * Return: the copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int v = n;

	for (; c < v; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
