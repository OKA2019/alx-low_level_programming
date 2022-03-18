#include <stdio.h>

/**
 *_isupper - print 1 if c is uppercase
 *@c: number of character
 *Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
