#include "main.h"
#include <unistd.h>
/**
 * _putchar = To write character c to stdout
 * @c: The character to be printed
 *
 * Return: success
 * on error, Return -1 errno is set appro[riately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
