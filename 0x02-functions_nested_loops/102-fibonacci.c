#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	unsigned long fib3 = 0, fib4 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = fib3 + fib4;
		printf("%lu", sum);

		fib3 = fib4;
		fib4 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
