#include "main.h"

/**
 * _isdigit - this code checks if input is digit between 0 - 9
 *
 * @c: enter an input
 *
 * Return: 1 if is digit, while 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
