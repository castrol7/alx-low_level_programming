#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index of a linked list.
* @head: double pointer to the head of the linked list.
* @index: index of the node to be deleted.
*
* Return: 1 if succeeded, -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;
if (*head == NULL)
                 return (-1); /* empty list */

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1); /* index out of range */

	if (previous == NULL)
		*head = current->next;
	else
		previous->next = current->next;

	free(current);

	return (1);
}

