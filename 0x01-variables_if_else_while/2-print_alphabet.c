#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char i, espace;

	espace = ' ';
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar(espace);
	return (0);
}
