#include <stdio.h>
/**
 * main - entry point
 *
 *Return: always 0
 */

int main(void)
{
	long i;
	long j;

	i = 2;
	j = 612852475143;

	while (j != 1)
	{
	if (j % i == 0)
	{
		j = j / i;
	}
	else
	{
		i++;
	}
	}
		printf("%lu\n", i);

	return (0);
}
