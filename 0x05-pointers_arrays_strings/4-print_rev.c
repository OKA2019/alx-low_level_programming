#include "main.h"

/**
 * _puts -  prints a string, in reverse, followed by a new line.
 * @s: pointer
 * Return: Always 0;
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
