#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
        int i;
        char j;

        for (i = 0; i < 10; i++)
        {
                putchar(i);
        }
        for (j = 'a'; j <= 'f'; j++)
                putchar(j);
        return (0);
}

