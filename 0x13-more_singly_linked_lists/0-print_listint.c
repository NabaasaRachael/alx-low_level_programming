#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints elements
 * @listint_t: string
 * @h: pointer to tne next node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
