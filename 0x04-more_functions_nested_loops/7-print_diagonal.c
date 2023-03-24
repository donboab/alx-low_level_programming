#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (postn = 0; postn < n; ++postn)
		{
			for (space = 0; space < postn; ++space)
				putchar(32);
			putchar(92); /*is equal to '/' char*/
			putchar('\n');
		}
	}
}
