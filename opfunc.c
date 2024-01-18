#include "monty.h"

/**
* get_op_func - matches an opcode with its func
* @opcode: opcode to match
* Return: ptr
*/

void (*get_op_func(char *opcode))(stack_t**, unsigned int)
{
instruction_t op_funcs[] = {
{"push", monty_push},
{"pall", monty_pall},
{"pint", monty_pint},
{"pop", monty_pop},
{"swap", monty_swap},
{"nop", monty_nop},
{NULL, NULL}
};
int i;

for (i = 0; op_func[i].opcode; i++)
{
if (strcmp(opcode, op_funcs[i].opcode) == 0)
return (op_funcs[i].f);
}

return (NULL);
}
