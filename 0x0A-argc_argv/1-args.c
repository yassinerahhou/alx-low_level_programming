include < stdio.h >
#include < unistd.h >


/**
 * main - prints the number of arguments passed into it
 * @c: number of command line arguments.
 * @v: array that contains the program command line arguments
 * Return: 0 - success.
 */

iint main(int c, char __attribute__((unused)) **v)
{
	printf("%d\n", c - 1);
	return (0);
}
