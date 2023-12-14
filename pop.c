#include "monty.h"

/**
 * f_pop - removes the top element
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pop(stack_t **head, unsigned int counter) {
    stack_t *temp;

    if (*head == NULL) {
        fprintf(stderr, "L%d: unable to remove from an empty stack\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    temp = *head;
    *head = temp->next;
    free(temp);
}
