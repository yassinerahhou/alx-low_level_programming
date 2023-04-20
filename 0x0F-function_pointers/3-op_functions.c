#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two numbers
 * @a: number one
 * @b: number two
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two numbers
 * @a: number 1
 * @b: number 2
 * Return: the difference between of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: number 1
 * @b: number 2
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: number 1
 * @b: number 2
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}
/**
 * op_mod - modulation of two numbers
 * @a: number 1
 * @b: number 2
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
