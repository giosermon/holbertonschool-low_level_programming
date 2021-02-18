#include "holberton.h"

/**
 * *_strcat - function concatenates two strings
 * @dest: elements destination array.
 * @src: elements the source array.
 * Return: a string characters.
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0 ; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
