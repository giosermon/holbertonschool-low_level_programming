#include "hash_tables.h"
/**
 *  hash_table_create - function that creates a hash table.
 *  @size:  is the size of the array
 *  Return: the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hasht;

	if (!size)
		return (0);
	new_hasht = malloc(sizeof(hash_table_t));
	if (!new_hasht)
		return (0);
	new_hasht->size = size;

	new_hasht->array = calloc(size, sizeof(hash_node_t *));
	if (!new_hasht->array)
	{
		free(new_hasht);
		return (NULL);
	}
	return (new_hasht);
}
