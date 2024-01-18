#include "monty.h"

/**
* pint_error - prints pint error msg
* @line_number: linenumber in montybytecodes
* Return: EXIT_FAILURE
*/

int pint_error(unsigned int line_number)
{
fprintf(stderr, "L%d: no pint, stack empty\n", line_number);
return (EXIT_FAILURE);
}
