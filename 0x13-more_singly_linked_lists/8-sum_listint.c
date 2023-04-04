#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a linked list
* @head: a pointer to the head of the list
*
* Return: sum of data values (n) in the list, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}

