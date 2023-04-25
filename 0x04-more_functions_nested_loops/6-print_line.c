#include "main.h"

/**
 * print_line - is a function to draw a straight line in the terminal,
 * @n: is how many times the character should be printed,
 * The line should end with a \n (new line)
 * If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}

