/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 1;

	while (s[i])
	{
		i++;
	}
	return (i);
}
