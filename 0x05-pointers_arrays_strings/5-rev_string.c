#include "main.h"

/**
 * rev_string -  prints a string, in reverse, followed by a new line.
 * @s: pointer
 * Return: Always 0;
 */

void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
