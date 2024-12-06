#include "lists.h"
/**
 * list_len - print all element of list_t
 * @h: beginning of the list
 * Return: number of node in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
