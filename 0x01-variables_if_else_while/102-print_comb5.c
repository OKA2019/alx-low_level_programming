#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i, j, k, m;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
                	for (m = j + 1; m < 10; m++)
                	{
				for (k = m + 1; m < 10; m++)
		        	{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(k);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
