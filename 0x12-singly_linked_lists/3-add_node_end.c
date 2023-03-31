#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds new node at end of list
 * @head: first node
 * @str: string to be duplicated
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;

	list_t *new_node, *j;

	while (str[i])
		i++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	new_node->len = i;

	new_node->next = NULL;

	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
	else
	{
		j = *head;

		while (j->next != NULL)
			j = j->next;
		j->next = new_node;
		return (new_node);
	}
}
