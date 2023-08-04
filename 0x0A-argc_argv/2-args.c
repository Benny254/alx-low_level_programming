#include <stdio.h>
#include "main.h"

/**
 * main - to print all arguments it receives
 * @argc: the number of arguments
 * @argv: an array  of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}

	return (0);
}
