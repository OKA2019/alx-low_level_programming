#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i, j, k, m;

	k = '0';
	m = 0;
	for (i = '0'; i <= '8'; i++)
	{
		k = i + 1;
		for (j = k; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (m < 44)
			{
				putchar(',');
				putchar(' ');
			}
			m = m + 1;
		}
	}
	putchar('\n');
	return (0);
}
