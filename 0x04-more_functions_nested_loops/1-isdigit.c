#include <stdio.h>

/**
 *_isdigit - print 1 if c is uppercase
 *@c: number
 *Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
