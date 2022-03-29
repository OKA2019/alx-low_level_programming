#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: the address of memory to print
 * @src: value to put in the jumper
 * @n: the size of the memory to print
 *
 * Return: memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
