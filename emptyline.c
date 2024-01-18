#include "monty.h"

/**
* is_empty_line - checks if a line read getline only contains deliliters
* @line: ptr
* @delims: str
* Return: 1 or 0
*/

int is_empty_line(char *line, char *delims)
{
int i, j;

for (i = 0; line[i]; i++)
{
for (j = 0; delims[j]; j++)
{
if (line[i] == delims[j])
break;
}
if (delims[j] == '\0')
return (0);
}
return (1);
}
