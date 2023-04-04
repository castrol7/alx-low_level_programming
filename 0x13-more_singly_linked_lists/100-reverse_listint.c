#include "lists.h"
/**
* reverse_listint - reverses a listint_t linked list
* @head: double pointer to head of listint_t linked list
*
* Return: pointer to first node of reversed listint_t linked list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next = NULL;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;

return (*head);
}

