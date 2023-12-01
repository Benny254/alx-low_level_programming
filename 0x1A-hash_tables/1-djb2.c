#include "hash_tables.h"

/**
*  hash_djb2 - The hash function implementing the djb2 algorithm
* @str: A pointer to chars for calculating a hash of
* Return: a hash key
**/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int b;

	hash = 5381;
	while ((b = *str++))
	{
		hash = ((hash << 5) + hash) + b; /* hash * 33 + b */
	}
	return (hash);
}
