#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - to prints each array elemement on a newline
 * @array: an array
 * @size: how many elements to be printed
 * @action: a pointer to be printed in regular or hexadecimal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
