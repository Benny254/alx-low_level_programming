#include "hash_tables.h"

/**
* hash_table_delete - to deletes a gievn hash table
* @ht: the pointer to hash table
* Return: nothing
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *cur, *tmp;

	if (!ht)
		return;
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j])
		{
			cur = ht->array[j];
			while (cur)
			{
				tmp = cur;
				cur = cur->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = NULL;
			}
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}