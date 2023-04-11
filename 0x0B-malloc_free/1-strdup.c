#include <stdlib.h>

/**
 * _strdup - copy
 * @s: pointer to string
 * Return: pointer
 */

char *_strdup(char *s)
{
	char *str;
	int i = 0, j;

	if (!s)
		return (NULL);

	while (*(s + i))
		i++;
	i++;
	str = malloc(sizeof(char) * i);

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		str[j] = s[j];
	}
	return (str);
}
