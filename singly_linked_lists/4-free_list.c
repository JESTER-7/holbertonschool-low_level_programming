#include "lists.h"
/**
 * free_list - Free a list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head;
		head = head->next;
		free(a->str);
		free(a);
	}
}
