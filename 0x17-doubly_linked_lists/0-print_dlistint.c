#include "lists.h"

/**
 * print_dlistint - Prints a doble linked list.
 * @h: Head of the double linked list.
 *
 *
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int iterat;
	const dlistint_t *node = h;

	for (iterat = 0; node != NULL; iterat++)
		{
		printf("%d\n", node->n);
		node = node->next;
	}
	return (iterat);
}
