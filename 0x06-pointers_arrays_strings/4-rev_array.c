#include <string.h>
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n / 2)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
		i++;
	}
}
