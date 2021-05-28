#include "hash_tables.h"

/**
 * key_index - Algorithm to get the index of array.
 * @key: key of node.
 * @size: size of array.
 * Return: index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2_key = hash_djb2(key);
	unsigned long int index = djb2_key % size;
	return (index);
}
