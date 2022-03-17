#include "main.h"
#include <time.h>
#include <math.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n : number to check the case
 * Return: last number for n.
 */

int print_last_digit(int n)
{
	int c, last;

	c = n % 10;
	if (c < 0)
	{
		last = -c;
	}
	else
	{
		last = c;
	}
	_putchar('0' + last);
	return (last);
}
