#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *add_node;
	for (i = 0; str[i] != '\0'; i++)
		continue;
	add_node = malloc(sizeof(list_t));

	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);
	add_node->next = *head;
	add_node->len = i;

	*head = add_node;

	return (*head);
}
