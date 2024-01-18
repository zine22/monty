#include "monty.h"

/**
* monty_pall - Prints the values of a stack_t
* @stack: a ptr
* @line_number: the current working line n
*/

void monty_pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = (*stack)->next;

while (tmp)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
(void)line_number;
}
