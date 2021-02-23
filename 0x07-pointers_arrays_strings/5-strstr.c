#include "holberton.h"

/**
 * _strstr - Entry point
 * Desc: Entry
 *@haystack: pointer
 *@needle: pointer
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		while ((haystack[i] == needle[0]) && needle[j])
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
