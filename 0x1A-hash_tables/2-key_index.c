#include "hash_tables.h"

/**
* key_index - to givesthe index of a key using hash_djb2()
* @key: A pointer to chars which is the key
* @size: the size of the array of the hash table
* Return: index at which the key/value pair should be stored in the hash table
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
