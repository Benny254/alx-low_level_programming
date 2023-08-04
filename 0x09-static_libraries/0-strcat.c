#include "main.h"
/**
 * _strcat - the concatenates two strings
 * @dest: to input value
 * @src: to input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int w;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	w = 0;
	while (src[w] != '\0')
	{
		dest[x] = src[w];
		x++;
		w++;
	}

	dest[x] = '\0';
	return (dest);
}
