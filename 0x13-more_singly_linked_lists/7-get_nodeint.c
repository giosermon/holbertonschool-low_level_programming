#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of linked list.
 * @head: list
 * @index: index of node
 * Return: Pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	return (head);
}
