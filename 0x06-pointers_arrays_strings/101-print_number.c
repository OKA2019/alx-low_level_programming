#include <stdio.h>
#include "main.h"
/**
 * print_number - function that prints an integer.
 * @dest: pointer
 * @n: integer
 */
void print_number(int n)
{
	char c[11];
	int i;

	i = 0;
	sprintf(c,"%d ", n);
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
}
