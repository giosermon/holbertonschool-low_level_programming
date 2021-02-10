#include "holberton.h"

/**
 * _islower - check for lowercase character.
 * @c: is a character to be check.
 *
 *Return: 1 if c is lowercase. 0 .
 */

int _islower(int c)
{
    int lwc;

    if (c > 96 && c < 123)
    {
            lwc = 1;
    }
    else
    {
            lwc = 0;
    }
    return (lwc);
}
