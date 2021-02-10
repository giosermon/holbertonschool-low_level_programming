#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet lowercase x 10 times.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int m;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (m = 'a'; m <= 'z' ; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
