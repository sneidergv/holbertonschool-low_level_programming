#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer to hash table.
 * @key: key of the node.
 * Return: value associated with a key or NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index_key = key_index((const unsigned char *)key, ht->size);

	if (!index_key || !ht || !key)
		return (NULL);

	tmp = ht->array[index_key];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
