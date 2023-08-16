#include <stdio.h>
#include <stdlib.h>

/**
 * main - To prints its own opcodes
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, r;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (r = 0; r < bytes; r++)
	{
		if (r == bytes - 1)
		{
			printf("%02hhx\n", arr[r]);
			break;
		}
		printf("%02hhx ", arr[r]);
	}
	return (0);
}
