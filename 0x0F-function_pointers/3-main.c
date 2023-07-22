#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - results
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 always
 */

int main(int __attribute__((__unused__))argc, char *argv[])
{
	int *op, number1, number2;

	if (argc != 4)
	{
		printf("erroe on arguments\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	op = argv[2];
	number2 = atoi(argv[3]);

	if (op[1] != '\0' || get_op_func(op))
	{
		printf("error 2 \n");
		exit(99);
	}


	if ((*op == '%' && number2 == 0) || (*op == '/' && number2 == 0))
	{
		printf("error 3\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(number1, number2));
	return (0);
}
