#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts new node at given position.
 * @h: Head of the double linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data value to insert in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = tmp;
		*h = node;
		return (node);
	}
	while (i < (idx - 1))
	{
		if (!tmp)
		{
			free(node);
			return (NULL);
		}
		i++;
		tmp = tmp->next;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
