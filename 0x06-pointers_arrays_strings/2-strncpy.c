#include <string.h>
/**
 * *_strncpy - function that copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: Pointer to `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
