#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: integer
 * Return: Always 0;
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		printf("%d,  ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
