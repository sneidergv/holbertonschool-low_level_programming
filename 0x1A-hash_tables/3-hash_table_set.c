#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *node;
	unsigned long int index;
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	node = new_node(key, value);
	if (!node)
		return (0);

	if (!tmp)
	{
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}

	
	return (0);
}

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *node;
	if (key == NULL)
		return (NULL);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;

	return (node);
}
