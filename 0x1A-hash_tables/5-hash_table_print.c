#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash table to detele
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	i = 0;
	printf("%c", '{');
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("'%s': '%s' , ", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		i++;
	}
	printf("%c\n", '}');
}
