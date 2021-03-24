#include "lists.h"

/**
 * print_listint - main function
 * @h: Pointer to the string.
 * 
 * Description: This function prints all the elements of a listint_t list.
 * 
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		printf("%d\n", nodo->n);
		nodo = nodo->next;
	}
	return (i);
}
