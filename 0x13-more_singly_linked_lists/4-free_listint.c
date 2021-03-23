#include "lists.h"

/**
 * free_listint - function that frees a linked list.
 * @head: first element
 *
 * Return: nothing (void)
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head != NULL)
	{
		while (head != NULL)
		{
			node = head;
			head = head->next;
			free(node);
		}
	}
}
