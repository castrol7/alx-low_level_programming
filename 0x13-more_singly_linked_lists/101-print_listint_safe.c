#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: A pointer to the head node of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count = 0;

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
current = head;
head = head->next;
if (current <= head)  /* If there's a loop, stop at the cycle */
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
}

return (count);
}

