#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or o for something else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
