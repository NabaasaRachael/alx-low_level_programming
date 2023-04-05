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
	listint_t *tmp;

	listint_t *new_node;

	unsigned int num = 0;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	while (tmp != NULL && num != idx - 1)
	{
		tmp = tmp->next;
		num++;
	}
	if (num != idx - 1 && idx - 1)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx != 0)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);

}
