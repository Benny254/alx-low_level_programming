#include "main.h"
/**
 * _strspn - the entry point
 * @s: to input
 * @accept: to input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
			{
				n++;
				break;
			}
			else if (accept[v + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
