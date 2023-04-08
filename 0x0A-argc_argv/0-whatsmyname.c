#include <stdio.h>
#include <unistd.h>

/**
 * main  - Prints the name of the program
 * @c:  The variable
 * @v: The Var
 * Return: The Return value/void
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
