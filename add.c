#include "monty.h"

/**
 * add_top_two_elements - adds the top two elements of the stack
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void add_top_two_elements(stack_t **head, unsigned int counter)
{
    stack_t *current = *head;
    int length = 0, result;

    while (current != NULL)
    {
        current = current->next;
        length++;
    }

    if (length < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    current = *head;
    result = current->n + current->next->n;
    current->next->n = result;
    *head = current->next;
    free(current);
}
