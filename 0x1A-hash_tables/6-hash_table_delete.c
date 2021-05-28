#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table.
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *deleter;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		while (ht->array[i])
		{
			deleter = ht->array[i]->next;
			free(deleter);
			ht->array[i] = ht->array[i]->next;
		}
		free(ht->array[i]);
		i++;
	}
	free(ht);
}
