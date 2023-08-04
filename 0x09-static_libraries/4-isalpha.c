#include "main.h"

/**
 * _isalpha - to check for alphabetic character
 * @c: character checked
 * Return: 1 if c is a letter, then 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
