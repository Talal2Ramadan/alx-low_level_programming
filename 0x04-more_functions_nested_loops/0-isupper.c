#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: input an alphapitical char
 *
 * Return: 1 in uppercase, 0 in lowercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

