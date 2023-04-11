#include "main.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
* str_concat - Concat 2 strings.
* @str1: string
* @str2: string
* Return: char
*/

char *str_concat(char *str1, char *str2)
{
	unsigned int l1, l2;
	char *conc, *tmp;

	if (!str1)
		s1 = "";
	else
		l1 = _strlen(str1);

	if (!str2)
		str2 = "";
	else
		l2 = _strlen(str2);

	conc = malloc(l1 + l2 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*str1)
		*tmp++ = *str1++;

	while ((*tmp++ = *str2++))
		;

	return (conc);
}
