#include "monty.h"

/**
 * add_node_to_head - adds a node to the head of the stack
 * @head: head of the stack
 * @n: new value to be added
 * Return: no return
 */
void add_node_to_head(stack_t **head, int n)
{
    stack_t *new_node, *temp;

current head for later reference
    temp = *head;
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        printf("Error\n");
        exit(0);
    }
    if (temp)
        temp->prev = new_node;
    new_node->n = n;
    new_node->next = *head;
    new_node->prev = NULL;
    *head = new_node;
}
