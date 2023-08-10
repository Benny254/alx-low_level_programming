#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - to allocate memory sing malloc
 * @b: the number of bytes to be allocated
 *
 * Return: the pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
