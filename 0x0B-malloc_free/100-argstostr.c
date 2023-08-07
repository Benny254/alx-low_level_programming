#include "main.h"
#include <stdlib.h>
/**
 * argstostr - the main entry
 * @ac: the int input
 * @av: the double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, n, y = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (n = 0; av[x][n]; n++)
	{
		str[y] = av[x][n];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\0';
	}
	}
	return (str);
}
