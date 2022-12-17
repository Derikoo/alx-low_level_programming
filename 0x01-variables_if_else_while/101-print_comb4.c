#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0(Success)
 */

int main(void)
{
	int b, d, z;

	for (b = '0'; b < '9'; b++)
	{
	for (d = b + 1; d <= '9'; d++)
	{
	for (z = d + 1; z <= '9'; z++)
	{
	if ((b != d) != z)
	putchar(b);
	putchar(d);
	putchar(z);
	if (d == '7' && z == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
