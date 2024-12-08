#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of dlistint_t
 * @head: head of the list
 * @n: value of the new node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *a;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		a = *head;
		while (a->next != NULL)
			a = a->next;
		a->next = new_node;
		new_node->prev = a;
	}
	return (new_node);
}
