#include "lists.h"

/**
 * print_list -prints list that the main contains
 * @h: head of the linked list.
 *
 * Return: number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			i++;
		}
		return (i);
	}
	return (0);
}
