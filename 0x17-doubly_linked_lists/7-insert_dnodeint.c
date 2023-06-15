#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts new node at  given position in a doubly
* @h: Double pointer to the head of the list
* @idx: Index of the list where the new node should be added (starting from 0)
* @n: Value to be stored in the new node
*
* Return: Address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;

/* Check if index is 0 */
if (idx == 0)
return (add_dnodeint(h, n));

/* Traverse the list until the position or end is reached */
while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

/* If position is not valid or list is empty */
if (temp == NULL)
return (NULL);
/* Create a new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Assign values to the new node */
new_node->n = n;

/* Adjust the links of the new node */
new_node->next = temp->next;
new_node->prev = temp;

/* Adjust the links of the adjacent nodes */
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}
