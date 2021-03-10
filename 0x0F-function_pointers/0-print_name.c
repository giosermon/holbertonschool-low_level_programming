#include "function_pointers.h"
#include <assert.h>
/**
 * print_name - prints a name using a pointer function.
 * @name: name of the person
 * @f: Pointer function to call functions
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	assert(name && f);
		(*f)(name);
}
