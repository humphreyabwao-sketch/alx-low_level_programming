#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: list head
 * @idx: index
 * @n: index data
 * Return: address of new node if successful, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int m = 0;
	dlistint_t *n_node, *temporary;

	n_node = NULL;
	if (idx == 0)
		n_node = add_dnodeint(h, n);
	else
	{
		temporary = *h;
		m = 1;
		if (temporary != NULL)
			while (temporary->prev != NULL)
				temporary = temporary->prev;
		while (temporary != NULL)
		{
			if (m == idx)
			{
				if (temporary->next == NULL)
					n_node = add_dnodeint_end(h, n);
				else
				{
					n_node = malloc(sizeof(dlistint_t));
					if (n_node != NULL)
					{
						n_node->n = n;
						n_node->next = temporary->next;
						n_node->prev = temporary;
						temporary->next->prev = n_node;
						temporary->next = n_node;
					}
				}
				break;
			}
			temporary = temporary->next;
			m++;
		}
	}
	return (n_node);
}
