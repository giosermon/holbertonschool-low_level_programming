#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: array
 * @size: bytes
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}
