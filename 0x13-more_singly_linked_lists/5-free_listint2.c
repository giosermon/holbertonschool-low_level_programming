#include "lists.h"

/**
 * free_listint2 -  free list
 * @head: list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nodo;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		nodo = *head;
		*head = nodo->next;
		free(nodo);
	}
	*head = NULL;
}
