#include "main.h"
/**
 * reverse_array - to reverse an array of integer
 * @a: an array
 * @n: the number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int z;
	int w;

	for (z = 0; z < n--; z++)
	{
		w = a[z];
		a[z] = a[n];
		a[n] = w;
	}
}
