#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *list_len - length of list
 *@h: head
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int node = 0;


	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
