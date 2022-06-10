#include "main.h"

/**
 * times_table - prints the 9 times
 * Return: last number for n.
 */

void times_table(void)
{

	int compteur;
	int compteur2;
	int rep;

	compteur = 0;
	while (compteur <= 9)
	{
		compteur2 = 0;
		while (compteur2 <= 9)
		{
			rep = compteur * compteur2;
			if (compteur2 == 0)
			{
				_putchar('0' + rep);
			}
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			compteur2++;
		}
		_putchar('\n');
		compteur++;
	}
}
