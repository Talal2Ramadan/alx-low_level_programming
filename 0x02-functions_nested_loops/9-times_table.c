#include "main.h"
/**
 * times_table:
 * a function can print the 9 times table,
 *		starting with zero
 */
void times_table(void)
{
	int num2;
	int m5;
	int pt;

	for (num2 = 0; num2 <= 9; num2++)
	{
		_putchar('0');

		for (m5 = 1; m5 <= 9; m5++)
		{
			_putchar(',');
			_putchar(' ');

			pt = num2 * m5;

			if (pt <= 9)
				_putchar(' ');
			else
				_putchar((pt / 10) + '0');

			_putchar((pt % 10) + '0');
		}
		_putchar('\n');
	}
}
