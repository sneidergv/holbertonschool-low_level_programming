#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *walker;
	unsigned long int i;
	int status = 0;


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
