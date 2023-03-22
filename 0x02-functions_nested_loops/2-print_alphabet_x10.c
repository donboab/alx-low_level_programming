#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet_x10 will print alphabet ten times.
 *
 * Description - The function will print multiple time.
 */

void print_alphabet_x10(void)
{
	char lc;
	int i = 0;

	while (i <= 9)
	{
	for (lc = 'a'; lc <= 'z'; ++lc)
	{
		_putchar(lc);
	}
	_putchar('\n');
	i++;
	}
}
