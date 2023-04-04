#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees the list
 * @head: first node
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}
}
