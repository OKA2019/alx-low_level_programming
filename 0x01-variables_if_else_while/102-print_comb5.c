#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i, j, k, m;

	i = '0';
	j = '0';
	k = '0';
	m = '0';
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (m = '0'; m <= '9'; m++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if ((i <= '9') && (j <= '8') && (k <= '9') && (m < '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
