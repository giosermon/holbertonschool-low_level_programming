#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 *
 * @array: pointer
 * @size: variable
 * @action: pointer function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (action && array)
	{
	for (j = 0; j < size; j++)
	action(array[j]);
	}
}
