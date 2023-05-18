#include "lists.h"

/**
 * sum_dlistint - sum all data
 * @head: list head
 * Return: sum if successful, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;
	dlistint_t *temporary;

	if (head)
	{
		temporary = head;
		while (temporary)
		{
			add = add + temporary->n;
			temporary = temporary->next;
		}
		return (add);
	}
	return (0);
}
