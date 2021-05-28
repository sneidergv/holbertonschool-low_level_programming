#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to hash table struct.
 * @key: key of the node.
 * @value: value of the node.
 * Return: 1 on success or if it's fail.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL, *node = NULL;
	unsigned long int index;
	char *_value;

	/* check for NULL values */
	if (!ht || !key || !value)
		return (0);

	/* Get array index */
	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			_value = strdup(value);
			if (!_value)
				return (0);
			free(tmp->value);
			tmp->value = _value;
			return (1);
		}
		tmp = tmp->next;
	}
	node = new_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}

/**
 * new_node - Create a new node.
 * @key: key of the node.
 * @value: value of the node.
 * Return: pointer of the new node.
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

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
