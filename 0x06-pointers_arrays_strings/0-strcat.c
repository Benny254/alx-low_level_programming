#include "main.h"

/**
 * _strcat - concatenates the two strings
 * @dest: to input value
 * @src: to input value
 *
 * Return: should return void on success
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
