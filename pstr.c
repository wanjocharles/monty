#include "monty.h"

/**
 * print_string_from_stack - prints the string starting at the top of the stack
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void print_string_from_stack(stack_t **head, unsigned int counter)
{
    stack_t *current_node;

    (void)counter;

    current_node = *head;
    while (current_node != NULL && current_node->n > 0 && current_node->n <= 127)
    {
        putchar(current_node->n);
        current_node = current_node->next;
    }
    putchar('\n');
}
