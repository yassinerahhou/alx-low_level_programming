#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowcase;
for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
{
putchar(lowcase);
}
printf("\n");
return (0);
}
