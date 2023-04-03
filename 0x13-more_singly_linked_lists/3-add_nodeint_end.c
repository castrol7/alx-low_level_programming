#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
*
* @head: A pointer to a pointer to the head node of the list.
* @n: The integer to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *current_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

/* Set the values for the new node */
new_node->n = n;
new_node->next = NULL;

/* If the list is empty, set the new node as the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse the list to the last node */
current_node = *head;
while (current_node->next != NULL)
current_node = current_node->next;

/* Add the new node at the end of the list */
current_node->next = new_node;

return (new_node);
}

