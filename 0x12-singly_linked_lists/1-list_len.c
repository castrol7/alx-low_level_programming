#include <stddef.h>  /* for size_t definition */
#include "lists.h"    /* the list_t struct is defined in "list.h" */

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to the head of the list
*
* Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

while (current != NULL)
{
count++;
current = current->next;
}

return (count);
}

