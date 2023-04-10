#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>




/**
 * max -  Function for the context
 * @final: char
 * @coins:  char
 * Return: Always 0.
 */


int max(int *coins, int final)
{
	int i = 0;
	int store = 0;

	while (i < 5)
	{
		if (coins[i] >= store && coins[i] <= final)
			store = coins[i];
		i++;
	}
	return (store);
}



/**
 * main - The Function main
 * @c:  char
 * @v: char
 * Return: Always 0.
 */

int main(int c, char **v)
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int change = 0;

	if (c != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(v[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents)
	{
		cents -= max(coins, cents);
		change++;
	}
	printf("%d\n", change);
	return (0);
}
