#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: An unsigned long integer value.
 * @index: An unsigned integer value.
 * Return: An integer value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
