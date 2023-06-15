#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to retrieve, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;  /* Keep track of the current index */
	dlistint_t *current = head;  /* Start at the head of the linked list */

	/* Traverse the linked list until the desired index or the end is reached */
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	/* If the desired index is out of bounds, return NULL */
	if (count < index)
		return (NULL);

	return (current);  /* Return the node at the desired index */
}

