#include "monty.h"

/**
* malloc_error - Print malloc error msg
* Return: exit_failure
*/

int malloc_error(void)
{
fprintf(stderr, "Error: malloc failed\n");
return (EXIT_FAILURE);
}
