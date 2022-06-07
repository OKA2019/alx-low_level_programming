#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i, j, m;

	i = '0';
	j = '0';
	m = '0';
	for (i = '0'; i <= '8'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (m = j + 1; m <= '9'; m++)
			{
				putchar(i);
				putchar(j);
				putchar(m);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
