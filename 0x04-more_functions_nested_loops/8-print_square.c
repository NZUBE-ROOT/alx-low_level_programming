#include "main.h"
/**
 * print_square - draws a diagonal line on the terminal.
 * @n:  is the number of times the character \ should be printed
 */
void print_square(int size)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
}

