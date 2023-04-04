#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds new node
 * @head: first node
 * @n: int
 * Return: address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
