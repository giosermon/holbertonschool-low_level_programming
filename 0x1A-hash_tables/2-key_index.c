#include "hash_tables.h"
/**
 * key_index - Function implementing the djb2 algorithm.
 * @key: Key value
 * @size:  The size of the array of the hash table.
 * Return: tThe index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
