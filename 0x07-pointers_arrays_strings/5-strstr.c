#include <string.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: memory area haystack
 */

char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);
	return (haystack);
}
