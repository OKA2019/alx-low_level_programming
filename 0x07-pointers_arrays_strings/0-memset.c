#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: the address of memory to print
 * @b: value to put in the jumper
 * @n: the size of the memory to print
 *
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
