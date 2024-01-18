#include "monty.h"

/**
* pop_error - prints pop error
* @line_number: Line number in script
* Return: EXIT_FAILURE
*/

int pop_error(unsigned int line_number)
{
fprintf(stderr, "L%u: no pop, an empty stack\n", line_number);
return (EXIT_FAILURE);
}
