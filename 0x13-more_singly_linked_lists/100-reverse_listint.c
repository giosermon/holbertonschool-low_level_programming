#include "lists.h"
/**
 * reverse_listint - Reverse a linked list.
 * @head: Linked list.
 * Return: Inverse linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *temp;

	if (*head == NULL)
		return (NULL);
	while (current->next != NULL)
	{
		temp = current->next;
		current->next = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
