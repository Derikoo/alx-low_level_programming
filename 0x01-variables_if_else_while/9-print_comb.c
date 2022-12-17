#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0, b = 9;

	while (a <= b)
	{
		putchar(a + '0');

		if (a != b)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}

	putchar('\n');

	return (0);
}
