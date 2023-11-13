#include "main.h"
/**
 * _strncpy - to copy a string
 * @dest: to input value
 * @src: to input value
 * @n: to input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
