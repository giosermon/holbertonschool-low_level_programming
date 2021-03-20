#include "lists.h"
#include <string.h>
/**
* add_node - adds a new node at the beginning of a list_t list.
* @str: nodes
* @head: first node
* Return: Always 0.
*/

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *add_nod;
		for (i = 0; str[i] != '\0'; i++)
		continue;
	add_nod = malloc(sizeof(list_t));

	if (add_nod == NULL)
		return (NULL);

	add_nod->str = strdup(str);
	add_nod->next = *head;
	add_nod->len = i;

	*head = add_nod;

	return (*head);
}
