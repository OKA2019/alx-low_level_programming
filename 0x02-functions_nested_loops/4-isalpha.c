#include "main.h"

/**
 * _isalpha - check for alpha case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
