#include "main.h"

/**
 * cap_string - All the the words in the string to be capitalized.
 * @str: A string to be capitalized.
 *
 * Return: The pointer to a changed string.
 */
char *cap_string(char *str)
{
	int value = 0;

	while (str[value])
	{
		while (!(str[value] >= 'a' && str[value] <= 'z'))
			value++;

		if (str[value - 1] == ' ' ||
		    str[value - 1] == '\t' ||
		    str[value - 1] == '\n' ||
		    str[value - 1] == ';' ||
		    str[value - 1] == ',' ||
		    str[value - 1] == '!' ||
		    str[value - 1] == '.' ||
		    str[value - 1] == '"' ||
		    str[value - 1] == '?' ||
		    str[value - 1] == ')' ||
		    str[value - 1] == '(' ||
		    str[value - 1] == '}' ||
		    str[value - 1] == '{' ||
		    value == 0)
			str[value] - = 32;
		value++;
	}

	return (str);
}
