/**
 * swap_int -  swaps the values of two integers.
 * @a: Pointer
 * @b: pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int *c = a;

	*a = *b;
	*b = *c;
}
