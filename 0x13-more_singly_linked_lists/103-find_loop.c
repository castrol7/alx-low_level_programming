#include "lists.h"
/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer to the head of the linked list
*
* Return: address of the node where the loop starts, or NULL in no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
slow = head;

while (slow && fast)
{
if (slow == fast)
return (slow);

slow = slow->next;
fast = fast->next;
}
}
}

return (NULL);
}

