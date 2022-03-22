#include <string.h>
/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 * Return: Pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
