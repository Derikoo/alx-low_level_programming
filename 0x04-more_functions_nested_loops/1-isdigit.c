#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @q: the number to checked
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int q)
{
	if (q >= 48 && q <= 57)
	{
	return (1);
	}
	return (0);
}
