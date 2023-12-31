#include <stdlib.h>
#include "main.h"

/**
 * *_memset - to fill memory with a constant byte
 * @s: the memory area to be filled
 * @b: the char to copy
 * @n: the number of times to copy b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}

	return (s);
}

/**
 * *_calloc - to allocate memory for an array
 * @nmemb: the number of elements in an array
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
