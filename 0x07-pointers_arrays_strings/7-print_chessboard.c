#include "main.h"

/**
 * print_chessboard - Entry Function
 * @(*a)[8]: This is a pointer to a two-dimensional //Zakaria Elaroussi
 * @a: is a pointer to an array of 8 characters
 */


void print_chessboard(char (*a)[8])
{
int i, y;
for (i = 0; i < 8; i++)
{
for (y = 0; y < 8; y++)
{
_putchar(a[i][y]);
}
_putchar('\n');
}
}
