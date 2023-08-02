#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - to say if an integer in a prime number or not
 * @n: the number to evaluate
 *
 * Return: you return 1 if n is a prime number, then 0 if not
 */
int is_prime_number(int n)
{
	if (n <=)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - to calculate if a number is prime recursively
 * @n: the number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime number, the 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
