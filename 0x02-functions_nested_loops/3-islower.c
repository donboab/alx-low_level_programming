#include "main.h"

/**
 * _islower - This function will check for lowercase character
 * Description: The character to be checked.
 * @c: Where c is the parameter
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
