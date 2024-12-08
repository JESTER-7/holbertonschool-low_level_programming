#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
