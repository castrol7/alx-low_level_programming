#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list safely
* @head: pointer to the head of the list
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast, *next;
size_t count = 0;

slow = head;
fast = head;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
next = fast->next->next;
printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
printf("-> [%p] %d\n", (void *)next, next->n);
exit(98);
}

count++;
}

if (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
}

return (count);
}

