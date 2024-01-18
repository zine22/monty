#include "monty.h"

/**
* f_open_error - Prints file opening err with file name
* @filename: name of file
* Return: exit failure
*/

int f_open_error(char *filename)
{
fprintf(stderr, "Error: no open file %s\n", filename);
return (EXIT_FAILURE);
}
