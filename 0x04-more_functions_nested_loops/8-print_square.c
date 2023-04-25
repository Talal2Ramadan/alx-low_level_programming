#include "main.h"

/**
 * printing a square
 * checking for a digit
 * @n : number of underscores to be printed
 * Return:void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; ++i)
		{
			for (j = 0; j < size; ++j)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

