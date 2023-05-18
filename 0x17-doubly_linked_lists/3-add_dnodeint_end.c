#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: list head
 * @n: data node
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temporary;
	dlistint_t *n_node;

	if (!head)
		return (NULL);
	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	temporary = *head;
	if (temporary)
	{
		while (temporary->next)
			temporary = temporary->next;
		temporary->next = n_node;
		n_node->prev = temporary;
	}
	else
	{
		n_node->prev = NULL;
		*head = n_node;
	}
	return (n_node);
}
