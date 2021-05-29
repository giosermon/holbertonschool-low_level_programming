#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Hash table to detele
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *tmp = "";

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			printf("%s'%s': '%s'", tmp, (ht->array[i])->key, (ht->array[i])->value);
			tmp = ", ";
			ht->array[i] = (ht->array[i])->next;
		}
	}
	printf("}\n");
}
