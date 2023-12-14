#include "monty.h"

/**
 * print_stack - prints the elements of a stack
 * @head: pointer to the head of the stack
 * @counter: unused parameter
 */
void print_stack(stack_t **head, unsigned int counter)
{
    stack_t *current_node;

    (void)counter;

    current_node = *head;
    while (current_node != NULL)
    {
        printf("%d\n", current_node->n);
        current_node = current_node->next;
    }
}
