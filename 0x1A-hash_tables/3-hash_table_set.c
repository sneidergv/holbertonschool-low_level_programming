#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	return (1);
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
