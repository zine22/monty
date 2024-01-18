#include "monty.h"

/**
* is_delim - checks chars
* @ch: char
* @delims: ptr
* Return: 1 on success or 0
*/

int is_delim(char ch, char *delims)
{
int i = 0;

while (delims[i])
{
if (delims[i] == ch)
return (1);
i++;
}
return (0);
}
