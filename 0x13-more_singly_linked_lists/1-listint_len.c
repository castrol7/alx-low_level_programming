#include "lists.h"
/**
* listint_len - Returns the number of elements in a linked listint_t list.
* @h: A pointer to the head node of the list.
*
* Return: The number of elements in the list as a size_t.
*/
size_t listint_len(const listint_t *h)
{
size_t len = 0;
const listint_t *current = h;

while (current != NULL)
{
len++;
current = current->next;
}

return (len);
}

