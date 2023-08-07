#include "main.h"
/**
 * _strcmp - to compare string values
 * @s1: to input value
 * @s2: to input value
 *
 * Return: s1[k] - s2[k]
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	k++;
	}
	return (0);
}