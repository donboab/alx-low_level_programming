#include "main.h"

/*
 * _puts_recursion - This function will print sting and a new line
 *
 * @s: The parameter for the function
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
