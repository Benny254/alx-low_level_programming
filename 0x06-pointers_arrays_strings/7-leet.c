#include "main.h"
/**
 * leet - to encode into 1337speak
 * @n: to input value
 * Return: n value
 */
char *leet(char *n)
{
	int c, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[c] == s1[b])
			{
				n[c] = s2[b];
			}
		}
	}
	return (n);
}
