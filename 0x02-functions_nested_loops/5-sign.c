#include "main.h"

/**
 * print_sign - check for sign
 * @n : number to check the case
 * Return:0 or 1
 */

int print_sign(int n)
{
	int sgn;

	if (n > 0)
	{
		_putchar('+');
		sgn = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		sgn = -1;
	}
	else
	{
		_putchar('0');
		sgn = 0;
	}
	return (sgn);
}
