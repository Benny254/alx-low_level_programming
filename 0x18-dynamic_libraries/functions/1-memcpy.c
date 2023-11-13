#include "main.h"
/**
 * _memcpy - the function that copies memory area
 * @dest: where stored in memory
 * @src: where copied in memory
 * @n: the number of bytes
 *
 * Return: the copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
