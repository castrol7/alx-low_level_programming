#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a list_t list
* @head: pointer to head node of list
*
* Description: This function takes a pointer to the head of a singly linked
* list and frees all the nodes in the list, including the head.
*
* Return: void
*/
void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}

