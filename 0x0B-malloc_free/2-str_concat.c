#include "main.h"
#include <stdlib.h>
/**
 * str_concat - to get ends of input and add together for size
 * @s1: to input one concat
 * @s2: to input two concat
 * Return: the concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int j, cj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = cj = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[cj] != '\0')
		cj++;
	concat = malloc(sizeof(char) * (j + cj + 1));

	if (concat == NULL)
		return (NULL);
	j = cj = 0;
	while (s1[j] != '\0')
	{
		concat[j] = s1[j];
		j++;
	}

	while (s2[cj] != '\0')
	{
		concat[j] = s2[cj];
		j++, cj++;
	}
	concat[j] = '\0';
	return (concat);
}
