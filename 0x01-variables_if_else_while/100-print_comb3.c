#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		k = i + 1;
		for (j = k; j < 10; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
