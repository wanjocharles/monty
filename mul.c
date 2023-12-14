#include "monty.h"

/**
 * multiply_top_two - multiplies the top two elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void multiply_top_two(stack_t **head, unsigned int counter)
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
        fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    current = *head;
    result = current->next->n * current->n;
    current->next->n = result;
    *head = current->next;
    free(current);
}
