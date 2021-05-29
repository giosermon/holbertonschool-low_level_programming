#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: A pointer to a hash table.
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{

		tmp = ht->array[i];
		while (tmp != NULL)
		{
			node = tmp;
			tmp = tmp->next;
			free(node->key);
			free(node->value);
			free(node);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
