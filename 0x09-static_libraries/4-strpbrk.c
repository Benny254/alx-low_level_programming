#include "main.h"
/**
 *_strpbrk - the entry point
 * @s: to input
 * @accept: to input
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
		if (*s == accept[d])
		return (s);
		}
	s++;
	}
	return ('\0');
}
