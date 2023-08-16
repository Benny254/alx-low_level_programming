#include "function_pointers.h"
/**
 * int_index - to return the index place if comparison = true, else -1
 * @array: an array
 * @size: the size of an elements in array
 * @cmp: the pointer to a function of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
