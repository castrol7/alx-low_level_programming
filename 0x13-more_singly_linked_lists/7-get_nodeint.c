#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: A pointer to the head of the linked list.
* @index: The index of the node, starting at 0.
*
* Return: If the node exists, a pointer to the nth node of the linked list.
*         If the node does not exist, NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i = 0;

while (current != NULL)
{
if (i == index)
{
return (current);
}
current = current->next;
i++;
}

return (NULL);
}

