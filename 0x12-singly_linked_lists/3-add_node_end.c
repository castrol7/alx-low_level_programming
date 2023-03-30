#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - Adds a new node at the end of a linked list.
*
* @head: A pointer to a pointer to the head node of the list.
* @str: The string to be added to the new node.
*
* Return: On success, the address of the new node.
*         On failure, NULL.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;

if (!head || !str)
return (NULL);

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->next = NULL;

if (!*head)
*head = new_node;
else
{
list_t *current = *head;

while (current->next)
current = current->next;

current->next = new_node;
}

return (new_node);
}

