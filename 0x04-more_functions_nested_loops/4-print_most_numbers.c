#include "holberton.h"
/**
 * print_numbers - Prints numbers form 0 to 9.
 *
 *Return: Always void.
 */
void print_numbers(void)
{
	int number = 0;

	while (number < 11)
	{
		if (number != '2' && number != '4')
			{
					_putchar(number + '0');
			}
			number++;
	}
	_putchar('\n');
}
