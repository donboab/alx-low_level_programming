#include "main.h"

/**
 * int _strlen_recursion - this function returns the lenght of a string.
 * @s: is the string
 *
 * return: an integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
	
}
