#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a specific position
 * @h: head of the list
 * @idx: where the node should be added, start at 0
 * @n: datz of the new node
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *a;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	/* if the new node will be added to the head, then use the appropriate function*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	a = *h;
	while (a != NULL && i < idx - 1)
	{
		a = a->next;
		i++;
	}
	if (a == NULL && i < idx - 1)
		return (NULL);
	/* if the new node will be added to the end, then use the appropriate function */
	if (a != NULL && a->next == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = a->next; /* don't */
	if (a->next != NULL) /* ask */
		a->next->prev = new_node; /* me */
	new_node->prev = a; /* about */
	a->next = new_node; /* this */
	return (new_node);
}
