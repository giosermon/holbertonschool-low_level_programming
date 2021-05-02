#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node
 * @index: index
 * Return: Elements.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int n = 1;

	if (head)
	{
		node = head;
		if (index == 0)
			return (node);
		while (node->next != NULL)
		{
			node = node->next;
			if (n == index)
				return (node);
			n++;
		}
	}
	return (NULL);
}
