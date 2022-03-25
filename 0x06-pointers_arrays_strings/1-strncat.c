#include <string.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: Pointer to `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
