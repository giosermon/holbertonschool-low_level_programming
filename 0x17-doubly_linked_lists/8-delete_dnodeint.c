#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index of a
 * double linked list.
 * @head: Head of the double linked list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (*head && head)
	{
		temp = *head;
		if (index == 0)
		{
			*head = temp->next;
			if (temp->next)
				temp->next->prev = NULL;
			free(temp);
		}
		else
		{
			while (i < index)
			{
				temp = temp->next;
				if (temp == NULL)
					return (-1);
				i++;
			}
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
		}
		return (1);
	}
	return (-1);
}
