#include "lists.h"
/**
 * sum_dlistint - give the sum of all the data of a list
 * @head: head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
