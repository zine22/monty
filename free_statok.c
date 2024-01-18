#include "monty.h"

/**
* free_stack - Frees a stack
* @stack: pr to top stack or bottom stack
*/

void free_stack(stack_t **stack)
{
stack_t *tmp = *stack;

while (*stack)
{
tmp = (*stack)->next;
free(*stack);
*stack = tmp;
}
}

/**
* free_tokens - Frees the global op_toks
*
*/

void free_tockens(void)
{
size_t i = 0;

if (op_toks == NULL)
return;

for (i = 0; op_toks[i]; i++)
free(op_toks[i]);

free(op_toks);
}
