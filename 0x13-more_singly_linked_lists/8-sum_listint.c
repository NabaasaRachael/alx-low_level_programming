#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: first node
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;

	int sum = 0;


	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
