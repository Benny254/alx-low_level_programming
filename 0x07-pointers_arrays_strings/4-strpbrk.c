#include "main.h"
/**
 * _strpbrk - the entry point
 * @s: to input
 * @accept: to input
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
		if (*s == accept[p])
		return (s);
		}
	s++
	}

	return ('\0');
}
