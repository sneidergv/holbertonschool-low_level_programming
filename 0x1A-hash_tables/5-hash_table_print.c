#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table.
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *walker = NULL;
	unsigned long int i;
	int status = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		walker = ht->array[i];
		while (walker)
		{
			if (status == 1)
				printf(", ");
			printf("'%s': '%s'", walker->key, walker->value);
			status = 1;
			walker = walker->next;
		}
	}
	printf("}\n");
}
