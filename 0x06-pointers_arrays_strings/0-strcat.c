#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: Pointer to `dest`
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
