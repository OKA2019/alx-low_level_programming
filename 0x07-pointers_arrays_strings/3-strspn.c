#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 *
 * Return: memory area s
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;

	n = strspn(s, accept);
	return (n);
}
