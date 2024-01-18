#include "monty.h"

/**
* monty_push - Pushes a value to a stack
*
* @stack: ptr
* @line_number: line number
*/

void monty_push(stack_t **stack, unsigned int line_number)
{
stack_t *tmp, *new;
int i;

new = malloc(sizeof(stack_t));
if (new == NULL)
{
set_op_tok_error(malloc_error());
return;
}

if (op_toks[1] == NULL)
{
set_op_tok_error(no_int_error(line_number));
return;
}

for (i = 0; op_toks[1][i]; i++)
{
if (op_toks[1][i] == '-' && i == 0)
continue;
if (op_toks[1][i] < '0' || op_toks[1][i] > '9')
{
set_op_tok_error(no_int_error(line_number));
return;
}
}
new->n = atoi(op_toks[1]);

if (check_mode(*stack) == STACK)
{
tmp = (*stack)->next;
new->prev = *stack;
new->next = tmp;
if(tmp)
tmp->prev = new;
(*stack)->next = new;
}
else
{
tmp = *stack;
while (tmp->next)
tmp = tmp->next;
new->prev = tmp;
new->next = NULL;
tmp->next = new;
}
}
