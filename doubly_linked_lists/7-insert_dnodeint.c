#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be inserted. Index starts at 0.
 * @n: Data to be stored in the new node.
 * Return: Address of the new node, or NULL if it failed or if index is invalid.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i = 0;

    if (h == NULL)
        return (NULL);

    /* Insert at the beginning */
    if (idx == 0)
        return (add_dnodeint(h, n));

    current = *h;
    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    /* Check if index is out of range */
    if (current == NULL && i < idx - 1)
        return (NULL);

    /* Insert at the end */
    if (current != NULL && current->next == NULL && i == idx - 1)
        return (add_dnodeint_end(h, n));

    /* Create the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    /* Insert in the middle */
    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}
