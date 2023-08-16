#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - To print the name using pointer to function
 * @name: The string to add
 * @f: The pointer to function
 * Return: nothing to return
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

