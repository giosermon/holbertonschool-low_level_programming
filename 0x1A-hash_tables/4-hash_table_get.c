#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Hash table to add
 * @key:Key value
 * Return: value associated with the element, or NULL if key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t  *tmp;
	unsigned long int index;

	if (key == NULL || ht == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL && tmp->key != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
