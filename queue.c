#include "monty.h"

/**
 * set_queue_mode - sets the mode to queue (FIFO)
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void set_queue_mode(stack_t **head, unsigned int counter)
{
    /* Ignore head and counter parameters */
    (void)head;
    (void)counter;

    /* Set the mode to queue (FIFO) */
    bus.lifi = 1;
}

/**
 * add_node_to_queue - adds a node to the tail of the stack
 * @head: head of the stack
 * @n: new value to be added
 * Return: no return
 */
void add_node_to_queue(stack_t **head, int n)
{
    stack_t *new_node, *temp;
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        printf("Error\n");
    }
    new_node->n = n;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
    }
}
