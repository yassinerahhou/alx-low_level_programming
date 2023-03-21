#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		product = i * j;

			if (j != 0)
			{
			_putchar(',');
			_putchar(' ');
			}

		if (product < 10 && j != 0)
		{
			_putchar(' ');
		}

		if (product >= 10)
		{
			_putchar(product / 10 + '0');
		}

		_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
