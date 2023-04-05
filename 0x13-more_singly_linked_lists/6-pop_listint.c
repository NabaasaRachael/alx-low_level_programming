#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes head node
 * @head: first node
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	int i = 0;

	if (!head || !*head)
	{
		return (0);
	}
	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
