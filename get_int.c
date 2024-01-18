#include "monty.h"

/**
* get_int - gets character pointer to new str
* @num: number
* Return: character ptr
*/

char *get_int(int num)
{
unsigned int temp;
int length = 0;
long num_1 = 0;
char *ret;

temp = _abs(num);
length = get_numbase_len(temp, 10);

if (num < 0 || num_1 < 0)
{
length++;
}
ret = malloc(length + 1);
if (!ret)
{
return (NULL);
}

fill_numbase_buff(temp, 10, ret, length);
if (num < 0 || num_1 < 0)
{
ret[0] = '-';
}
return (ret);
}
