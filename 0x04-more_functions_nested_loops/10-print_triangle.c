#include "main.h"
/**
 * print_triangle - draws a diagonal line on the terminal.
 * @size: is the number of times the character \ should be printed
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
}

