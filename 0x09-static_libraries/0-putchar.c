#include <unistd.h>


/**
 * _putchar - to write the character c to stdout
 * @c: the character to be printed
 *
 * Return: on success 1
 * On error, -1 is returned, and then errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}