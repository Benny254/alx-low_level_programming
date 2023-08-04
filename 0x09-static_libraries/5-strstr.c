#include "main.h"
/**
 * _strstr - the entry point
 * @haystack: to input
 * @needle: to input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *h = needle;

		while (*i == *h && *h != '\0')
		{
			i++;
			h++;
		}

		if (*h == '\0')
			return (haystack);
	}

	return (0);
}
