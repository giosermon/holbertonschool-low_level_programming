#include "lists.h"
/**
 * print_list - prints list that the main contains
 * @h: puntero a estructura lista
 * Return: number of list's elements
 */
size_t print_list(const list_t *h)
{
int i = 0;

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
		i++;
		h = h->next;
	}
	return (i);
}
