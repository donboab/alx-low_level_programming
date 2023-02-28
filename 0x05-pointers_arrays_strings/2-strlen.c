#include <stdio>

/**
 * _strlen - returns the length of a string
 *
 * @s: The string to get the length of input
 *
 * Return: length of string
*/

size_t _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
