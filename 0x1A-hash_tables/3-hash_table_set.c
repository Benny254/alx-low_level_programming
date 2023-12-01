#include "hash_tables.h"

/**
* hash_table_set - To add an element to the hash table and resolves collison
* with chaining
* @ht: the pointer to hash table
* @key: an hash key
* @value: the value associated with the key
* Return: 1 on success, 0 if fails
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp, *cur;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		cur = ht->array[index];
		while (cur)
		{
			if (strcmp(cur->key, (char *)key) == 0)
			{
				free(cur->value);
				cur->value = (char *)strdup(value);
				return (1);
			}
			cur = cur->next;
		}
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);
	tmp->key = (char *)strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (0);
	}
	tmp->value = (char *)strdup(value);
	if (tmp->value == NULL)
	{
		free(tmp->key);
		free(tmp);
		return (0);
	}
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}
