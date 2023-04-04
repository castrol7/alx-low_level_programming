#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)

{
    listint_t *head = NULL;
    listint_t *node = NULL;

    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);

    node = get_nodeint_at_index(head, 5);
    if (node != NULL)
        printf("%d\n", node->n);
    else
        printf("Node not found\n");

    return (0);
}

