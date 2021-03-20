#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: linked list data structure header
 * @str: value of new node
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node;
	list_t *last_node;

	for (i = 0; str[i] != '\0'; i++)
	continue;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
			new_node->str = strdup(str);
			new_node->len = i;
			new_node->next = NULL;
			last_node = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
		last_node->next =  new_node;
	}
	return (*head);
}
