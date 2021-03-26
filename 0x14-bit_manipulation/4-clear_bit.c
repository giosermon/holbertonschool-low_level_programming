#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * clear_bit - sets the bit at a given index to 0
 * @n: pointer to the number
 * @index: the index the change
 * Return: success or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
