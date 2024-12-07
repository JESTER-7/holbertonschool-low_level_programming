#include "lists.h"
/**
 * add_node - add a node to list_t
 * @head: head of the list
 * @str: string to add
 * Return: the adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	int len = 0;

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}