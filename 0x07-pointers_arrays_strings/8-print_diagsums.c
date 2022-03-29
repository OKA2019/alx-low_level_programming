#include <stdio.h>

/**
 * print_diagsums - function that locates a substring.
 * @a: array
 * @size: integer
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i, sumX, sumY;

	sumX = 0;
	sumY = 0;
	for (i =  0; i < size; i++)
	{
		sumX = sumX + a[i];
		sumY = sumY + a[size - i - 1];
		a += size;
	}
	printf("%d, %d \n", sumX, sumY);
}
