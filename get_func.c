#include "monty.h"
/**
 * get_funct - selects the correct function to perform the operation asked by the user
 * @s: operator passed as argument to the program
 * Return: pointer to the function
 */
void (*get_funct(char *s))(stack_t **, unsigned int)
{
	int i;
	instruction_t find_op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"nop", _nop},
		{"mod", _mod},
		{NULL, NULL}
	};

	for (i = 0; find_op[i].opcode; i++)
		if (strcmp(find_op[i].opcode, s) == 0)
			return (find_op[i].f);
	return (NULL);
}
