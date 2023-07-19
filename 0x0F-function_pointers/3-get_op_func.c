#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select the function to perform the operation selected
 * @s: the operator
 * Return: a pointer to the corresponding function and operator
 */

int (*get_op_function(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL},
	};

int x;
x = 0;
while (*(ops[x].op) != *s && ops[x].op != NULL)
	x++;

return (ops[x].f);
}
