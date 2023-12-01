#include "hash_tables.h"

/**
* hash_table_print - to print a hash table
* @ht: the pointer to hash table
* Return: nothing
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a, b;
	hash_node_t *tmp;

	if (ht)
	{
		/* track last non null index starting from back */
		a = ht->size;
		while (a > 0)
		{
			if (ht->array[a - 1])
			{
				b = a - 1;
				break;
			}
			a--;
		}
		printf("{");
		for (a = 0; a <= b; a++)
		{
			if (ht->array[a])
			{
				tmp = ht->array[a];
				while (tmp)
				{
					printf("'%s': '%s'", tmp->key, tmp->value);
					if (a < b)
						printf(", ");
					if (a == b && tmp->next)
						printf(", ");
					tmp = tmp->next;
				}
			}
		}
		printf("}\n");
	}
}
