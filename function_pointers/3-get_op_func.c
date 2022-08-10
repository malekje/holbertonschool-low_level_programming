#include "3-calc.h"

/**
 * get_op_func- operators function
 * @s: argument
 * Return: integer
 */

int (*get_op_func(char *s))(int, int)
{

	    op_t ops[] = {
		    {"+", op_add},
		    {"-", op_sub},
		    {"*", op_mul},
		    {"/", op_div},
		    {"%", op_mod},
		    {NULL, NULL}

	};


	int n = 0;


	while (strcmp(s, ops[n].op) != 0)
		n++;

return (ops[n].f);

}
