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

	if (*head == NULL)
	{
		return (i);
	}
	tmp = *head;
	i = tmp->n;
	free(*head);
	*head = tmp->next;

	return (i);
}
