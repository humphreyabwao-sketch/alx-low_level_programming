#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: list head
 * @index: posistion where to delete a node
 * Return: if successful 1, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int m = 0;
	dlistint_t *temp, *new;

	temp = *head;
	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				new->next = temp->next;
				if (temp->next != NULL)
					temp->next->prev = new;
			}
			free(temp);
			return (1);
		}
		new = temp;
		temp = temp->next;
		m++;
	}
	return (-1);
}
