include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - to check if a string is palindrome 
 * @s: the string to be reversed
 * Return: if it is 1, and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - to return the lenth of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - to check the characters recursively for palindrome
 * @s: the string to check
 * @i: iterator
 * @len: the length of a string
 *
 * Return: 1 if it is palindrome, the 0 if it is not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
