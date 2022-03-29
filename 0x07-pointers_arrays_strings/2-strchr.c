#include <string.h>
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer
 * @c: c
 *
 * Return: memory area s
 */

char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
