#include "main.h"
/**
 * _strncat - to concatenate two strings
 * to use at most n bytes from src
 * @dest: to input value
 * @src: to input value
 * @n: to input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
