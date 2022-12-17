#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: ...
 */

void times_table(void)
{
	int q, w, e, r, t;

	for (q = 0; q <= 9; q++)
	{
	for (w = 0; w <= 9; w++)
	{
	e = q * w;
	if (e > 9)
	{
	r = e % 10;
	t = (e - r) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(t + '0');
	_putchar(r + '0');
	}
	else
	{
	if (w != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(e + '0');
	}
	}
	_putchar('\n');
	}
}
