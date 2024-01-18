#include "monty.h"

/**
* monty_pint - prints top value or a stack
* @stack: ptr
* @line_number: current number
*/

void monty_pint(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL)
{
set_op_tok_error(pint_error(line_number));
return;
}
printf("%d\n", (*stack)->next->n);
}
