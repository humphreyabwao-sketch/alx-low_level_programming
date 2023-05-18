#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: list head
 * @n: node data
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	if (!head)
	{
		return (NULL);
	}
	else
	{
		n_node = malloc(sizeof(dlistint_t));
		if (!n_node)
			return (NULL);
		n_node->n = n;
		n_node->prev = NULL;
		n_node->next = *head;

		if (*head)
			(*head)->prev = n_node;
		*head = n_node;

		return (*head);
	}
}
