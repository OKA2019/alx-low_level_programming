
/**
 * leet - function that concatenates two strings
 * @str: pointer
 * Return: Pointer to `str`
 */
char *leet(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
		}
	}
return (str);
}
