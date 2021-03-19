#include "lists.h"
/**
 * list_len - function that returns the number of elements in linked list.
 * @h: Head pointer lo list.
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int j = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			j++;
		}
		return (j);
	}
	return (0);
}
