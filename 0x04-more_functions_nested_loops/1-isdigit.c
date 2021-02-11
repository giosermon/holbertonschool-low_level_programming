#include "holberton.h"
/**
 * isdigit - check for digits.
 * @c: is a character to be check.
 * Return: 1 if c is digit. 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
