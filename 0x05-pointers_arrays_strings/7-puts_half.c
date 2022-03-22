#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer
 * Return: Always 0;
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	j = i / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
