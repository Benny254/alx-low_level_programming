#include "main.h"
/**
 * _strncat - two concatenate strings
 * using n bytes from src
 * @dest: to input value
 * @src: to input value
 * @n: to input value
 *
 * Return: the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}
