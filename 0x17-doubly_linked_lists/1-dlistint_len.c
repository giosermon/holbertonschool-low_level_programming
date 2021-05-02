#include "lists.h"
/**
 * dlistint_len - return number of elements of structure.
 * @h: pointer to head.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int iterat;
	const dlistint_t *nodo = h;

	for (iterat = 0; nodo != NULL; iterat++)
		nodo = nodo->next;

	return (iterat);
}
