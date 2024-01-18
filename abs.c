#include "monty.h"

/**
* _abs - gets the absolute value
* @i: int
* Return: unsigned int of i
*/

unsigned int _abs(int i)
{
if (i < 0)
{
return (-(unsigned int)i);
}
return ((unsigned int)i);
}
