#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: The size of the array.
 * Return: pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Create new hash table */
	hash_table_t *new_hash;

	/* Memory location for the new hash table */
	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);

	new_hash->size = size;

	new_hash->array = malloc(sizeof(hash_node_t) * size);
	if (!new_hash->array)
	{
		free(new_hash);
		return (NULL);
	}

	return (new_hash);
}
