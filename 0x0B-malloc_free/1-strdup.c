#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer.
 * @str: pointer char
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int j = 0;
	int i;
	char *p;

	if (*str == '\0')
	{
		return ('\0');
	}
	while (str[j] != '\0')
	{
		j++;
	}
	p = malloc(sizeof(char) * (j + 1));
	if (p != NULL)
	{
		for (i = 0; i <= j; i++)
		{
			p[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (p);
}
