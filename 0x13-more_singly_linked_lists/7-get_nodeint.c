#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node
 * @head: first node
 * @index: unsigned int
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	unsigned int i = 0;

	tmp = head;
	while (i != index && tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if (i != index)
	{
		return (NULL);
	}
	else
		return (tmp);
}
