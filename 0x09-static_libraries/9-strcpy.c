#include "main.h"

/**
 * char *_strcpy - the function that copies a string pointed to src
 * @dest: to copy to
 * @src: to copy from
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
