#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - dublicating to the new memory location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bbb;
	int c, j = 0;

	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;

	bbb = malloc(sizeof(char) * (c + 1));

	if (bbb == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		bbb[j] = str[j];

	return (bbb);
}
