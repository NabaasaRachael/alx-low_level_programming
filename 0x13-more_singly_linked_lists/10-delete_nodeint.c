#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: first node
 * @index: int
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;

	listint_t *ptr;

	unsigned int num = 0;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		while (tmp != NULL && num != index - 1)
		{
			num++;
			tmp = tmp->next;
		}
		if (num != index - 1)
			return (-1);
		ptr = tmp->next;
		tmp->next = tmp->next->next;
		free(ptr);
		return (1);
	}

}
