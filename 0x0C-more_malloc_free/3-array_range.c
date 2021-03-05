#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Function that allocates memory for an array of integers.
 * @min: min elements of the array.
 * @max: max element of the array.
 *
 * Return: a pointer with the memory location of the array.
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int i;
	unsigned int j = 0;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min ; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
