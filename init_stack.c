#include "monty.h"

/**
*init_stack - Initializes a stack_
*
* @stack: pointer
*
* Return: If error - EXIT FAILLURE or success
*/

int init_stack(stack_t **stack)
{
stack_t *s;

s = malloc(sizeof(stack_t));
if (s == NULL)
return (malloc_error());

s->n = STACK;
s->prev = NULL;
s->next = NULL;

*stack = s;
return (EXIT_SUCCESS);
}
