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
	unsigned int j = 0;
	unsigned int i;
	char *ptr;

	if (str == '\0')
	{
		return ('\0');
	}
	while (str[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr != NULL)
	{
		for (i = 0; i <= j; i++)
		{
			ptr[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
