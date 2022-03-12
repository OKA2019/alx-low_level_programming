#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i, j, m;


	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
                	for (m = j + 1; m < 10; m++)
                	{
				putchar(i);
				putchar(j);
				putchar(m);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
