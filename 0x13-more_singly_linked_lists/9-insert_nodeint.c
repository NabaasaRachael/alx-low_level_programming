#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: first node
 * @idx: index
 * @n: int
 * Return: address of new ocde or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;

	listint_t *new_node;

	unsigned int num = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (num = 0; tmp && num < idx; num++)
	{
		if (num == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
