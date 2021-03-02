#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: pointer to the array. NULL is size is 0 or fails.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int x;
	int l1 = 0;
	int l2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	while (s1[i] != '\0')
		i++;
	l1 = i + 1;
	while (s2[j] != '\0')
		j++;
	l2 = j + 1;
	p = malloc(sizeof(char) * (l1 + l2 - 1));
	if (p != NULL)
	{
		for (x = 0; x <= (l1 - 1); x++)
		{
			p[x] = s1[x];
		}
		for (x = 0; x <= (l2 - 1); x++)
		{
			p[(l1 - 1) + x] = s2[x];
		}
	}
	else
		return ('\0');
	return (p);
}
