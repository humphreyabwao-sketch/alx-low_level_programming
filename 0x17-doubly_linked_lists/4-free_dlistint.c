#include "lists.h"

/**
 * free_dlistint - frees the lists
 * @head: list head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head)
	{
		temporary = head;
		free(temporary);
		head = head->next;
	}
}
