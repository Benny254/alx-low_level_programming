#include <stdio.h>
#include "main.h"

/**
 * main - to print the name of the program
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: alaways 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
