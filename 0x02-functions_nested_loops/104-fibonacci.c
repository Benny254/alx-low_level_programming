#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * purpose - no hardcode
 *
 * Return: (Success)
 */

int main(void)
{
	int c;
	unsigned long fib3 = 0, fib4 = 1, sum;
	unsigned long fib3_half1, fib3_half2, fib4_half1, fib4_half2;
	unsigned long half1, half2;

	for (c = 0; c < 92; c++)
	{
		sum = fib3 + fib4;
		printf("%lu, ", sum);

		fib3 = fib4;
		fib4 = sum;
	}

	fib3_half1 = fib3 / 10000000000;
	fib4_half1 = fib4 / 10000000000;
	fib3_half2 = fib3 % 10000000000;
	fib4_half2 = fib4 % 10000000000;

	for (c = 93; c < 99; c++)
	{
		half1 = fib3_half1 + fib4_half1;
		half2 = fib3_half2 + fib4_half2;
		if (fib3_half2 + fib4_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (c != 98)
			printf(", ");

		fib3_half1 = fib4_half1;
		fib3_half2 = fib4_half2;
		fib4_half1 = half1;
		fib4_half2 = half2;
	}
	printf("\n");
	return (0);
}
