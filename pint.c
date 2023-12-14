#include "monty.h"

/**
 * print_top - prints the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void print_top(stack_t **head, unsigned int counter)
{
    /* Check if stack is empty */
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Print the top element of the stack */
    printf("%d\n", (*head)->n);
}
