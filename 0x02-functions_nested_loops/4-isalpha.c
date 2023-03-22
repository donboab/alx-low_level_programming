#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The Character to the checked
 * Return: 1 for alphabetic chracter or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
