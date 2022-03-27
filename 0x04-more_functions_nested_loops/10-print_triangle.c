#include "main.h"

/**
 ** print_triangle - prints a triangle, followed by a new line.
 * @size: integer
 * Return: Always O
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j >= 0; j--)
			{
				if (i >= j)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
