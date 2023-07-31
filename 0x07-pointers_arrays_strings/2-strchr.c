#include "main.h"
/**
 * _strchr - The entry point
 * @s: to input
 * @c: to input
 * Return: 0 Always (success)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
