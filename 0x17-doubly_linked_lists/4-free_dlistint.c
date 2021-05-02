#include "lists.h"
/**
 * free_dlistint - Function that frees a double linked list.
 * @head: Head of the double linked list.
 *
 * Return: Always nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
