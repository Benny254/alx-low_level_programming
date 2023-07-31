#include "main.h"
/**
 * set_string - setting the value of a pointer to a char
 * @s: a pointer to a pointer
 * @to: the pointer char
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
