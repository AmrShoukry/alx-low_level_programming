#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Struct op
 *
 * @s: The operator
 *
 * Return: nothing
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
	int i = 0;

	while (ops[i][0] != NULL)
	{
		if (strcmp(s, ops[i][0]) == 0)
		{
			return (ops[i][1]);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
