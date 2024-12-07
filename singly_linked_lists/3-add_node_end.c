#include "lists.h"
/**
 * add_node_end - add a node at the end of the list_t
 * @head: head of the list
 * @str: string to add
 * Return: the adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *a;
	char *new_str;
	int new_len = 0;

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);
	while (str[new_len] != '\0')
		new_len++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = new_len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	a = *head;
	while (a->next != NULL)
		a = a->next; 
	a->next = new_node;
	return (new_node);
}
