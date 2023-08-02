#include "main.h"
/**
 * _strlen_recursion - To return the lenth of the string.
 * @s: A string to be measured.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
