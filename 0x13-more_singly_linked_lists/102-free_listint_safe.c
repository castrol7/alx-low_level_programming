#include "lists.h"
#include <stddef.h>

/**
* free_listint_safe - Frees a linked list safely.
*
* @h: Pointer to pointer to the first node of the list.
*
* Return: The number of nodes freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
*h = NULL;

while (current != NULL)
{
count++;
next = current->next;
free(current);
if (next >= current)
break;
current = next;
}

return (count);
}

