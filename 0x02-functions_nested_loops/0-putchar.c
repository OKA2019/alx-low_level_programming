#include <stdio.h>
#include "main.h"

/**
 * main - chek the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char putchar[8] = "_putchar";

	i = 0;
	while (i < 8)
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
