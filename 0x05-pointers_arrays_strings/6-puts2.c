#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer
 * Return: Always 0;
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
