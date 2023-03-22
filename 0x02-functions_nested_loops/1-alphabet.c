#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to
 * print the alphabet a - z in lowercase.
 *
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; ++lc)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
