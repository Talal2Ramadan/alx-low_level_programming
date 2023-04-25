#include "main.h"

/**
 * printing_most_numbers
 * display numbers from 0 to 9.
 * Does not print 2 and 4
 * Return: Always 0 (Success).
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}

