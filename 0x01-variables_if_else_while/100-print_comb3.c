#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int b, d;

	for (b = '0'; b < '9'; b++)
	{
	for (d = b + 1; d <= '9'; d++)
	{
	if (b != d)
	{
	putchar(b);
	putchar(d);
	if (b == '8' && d == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
