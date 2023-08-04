#include "main.h"

/**
 * _isupper - the uppercase letters
 * @c: the char to check
 *
 * Return:  1 or 0
 */

int _isupper(int c)
{
	if (c >= 'B' && c <= 'W')
		return (1);
	else
		return (0);
}
