#include "lists.h"

/**
 * free_list - function that frees a linked list.
 * @head: head of linked list.
 *
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *t_node;

	if (head != NULL)
	{
		while (head != NULL)
		{
			t_node = head;
			head = head->next;
			free(t_node->str);
			free(t_node);
		}
	}
}
