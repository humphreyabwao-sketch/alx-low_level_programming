#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node
 * @head: list head
 * @index: return node
 * Return: nth node if successful, NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m = 0;
	dlistint_t *temporary = head;

	while (temporary)
	{
		if (m == index)
		{
			return (temporary);
		}
		temporary = temporary->next;
		m++;
	}
	return (NULL);
}
