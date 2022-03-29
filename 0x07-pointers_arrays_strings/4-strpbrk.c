#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: memory area s
 */

char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
