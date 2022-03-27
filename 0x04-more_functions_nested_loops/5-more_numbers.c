#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0;
 */

void more_numbers(void)
{
	char c, m;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m <= 14; m++)
		{
			c = m;
			if (c > 9)
			{
				_putchar('1');
				c = m % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
