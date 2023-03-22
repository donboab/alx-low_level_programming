#include "main.h"

/*
 * print_alphabet - print_alphabet_x10 will print alphabet ten times.
 *
 * Description - The function will print multiple time.
 */

void print_alphabet_x10(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z';)
	{
		_putchar(lc);
	lc += 10;
	}
	_putchar('\n');
}
