#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: nodes
 * @head: first node
 * Return: New node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
	return (NULL);
	}
	if (new_n)
	{
		new_n->n = n;
		new_n->next = *head;
		*head = new_n;
	return (new_n);
	}
		free(new_n);
	return (NULL);
}
