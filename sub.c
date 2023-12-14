#include "monty.h"

/**
 * f_sub - subtraction
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
    stack_t *aux;
    int sus;
    unsigned int nodes = 0;

    aux = *head;

    while (aux != NULL)
    {
        nodes++;
        aux = aux->next;
    }

    if (nodes < 2)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
        /* Assuming bus is a struct or an object containing file and content */
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    aux = *head;
    sus = aux->next->n - aux->n;
    aux->next->n = sus;
    *head = aux->next;
    free(aux);
}
