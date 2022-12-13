#include <stdio.h>

/**
 * main - Entry point
 *
 * Returns: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num - 0; num < 10; num++)
	{
	putchar(num + '0');
	if (num < 10)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
