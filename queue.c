#include "monty.h"

/**
* monty_queue - converts a stack to a queue
* @stack: ptr
* @line_number: current line num
*/

void monty_queue(stack_t **stack, unsigned int line_number)
{
(*stack)->n = QUEUE;
(void)line_number;
}
