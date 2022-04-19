#include "main.h"

/**
 * times_table - prints times table
 *
 * Return:void
 */

void times_table(void)

{
	int row;
	int col;
	int dgt;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			dgt = (row * col);

			if (dgt > 9 )
			{
				_putchar((dgt / 10) + '0');
				_putchar((dgt % 10) + '0');
			}

			else if (dgt < 1 && col < 1)
			{
				_putchar(dgt + '0');
			}

			else
			{
				_putchar(' ');
				_putchar(dgt + '0');
			}

			if (col > 0 && col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			else if (col <= 0)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');		
	}
}
