#include "lists.h"
/**
 * print_list - print all element of list_t
 * @h: 
 * Return: 
 */
size_t print_list(const list_t *h)
{
	unsigned int a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n",h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}