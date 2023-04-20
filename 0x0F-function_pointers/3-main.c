#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}
