#include "main.h"
#include <stddef.h>

/**
 * _strchr - the entry point
 * @s: to input
 * @c: to input
 * Return: Always o (success)
 */
char *_strchr(char *s, char c)
{
	int r = 0;

	for (; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (&s[r]);
	}
	return (0);
}
