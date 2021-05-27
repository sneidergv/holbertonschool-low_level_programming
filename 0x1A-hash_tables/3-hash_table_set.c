#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

}

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *node;
	if (key == NULL)
		return (NULL);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = key;
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
}