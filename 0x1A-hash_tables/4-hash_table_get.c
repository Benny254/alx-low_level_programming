#include "hash_tables.h"

/**
* hash_table_get - to retrieves a value associated with a key
* @ht: the hash table to look into
* @key: the key to search for
* Return: key's value or NULL
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *tmp;

	if (ht)
	{
	indx = key_index((const unsigned char *)key, ht->size);
		if (ht->array[indx])
		{
		for (tmp = ht->array[indx]; tmp; tmp = tmp->next)
			{
			if (strcmp(tmp->key, (char *)key) == 0)
			return (tmp->value);
			}
		}
	}
	return (NULL);
}
