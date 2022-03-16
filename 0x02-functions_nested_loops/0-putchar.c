#include <stdio.h>
#include "main.h"

/**
 * main - chek the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char putchar[8]="_putchar";
	int i;
	
	for (i = 0; i < 8; i++)
	{
		_putchar(putchar[i]);
	}
	return (0);
}
