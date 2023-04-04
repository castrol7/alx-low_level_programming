#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely.
* @h: Pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t size = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
*h = NULL;

while (current != NULL)
{
size++;
if (current <= current->next)
{
temp = current->next;
free(current);
current = temp;
}
else
{
free(current);
break;
}
}

return (size);
}

