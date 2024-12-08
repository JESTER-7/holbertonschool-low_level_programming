#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
