#include "monty.h"

/**
* get_next_word - gets the next word in str
* @str: str to get next word from
* @delms: delimitors
* Return: ptr to top char
*/

char *get_next_word(char *str, char *delims)
{
int pending = 0;
int i = 0;

while (*(str +i))
{
if (is_delim(str[i], delims))
pending = 1;
else if (pending)
break;
i++;
}
return (str + i);
}
