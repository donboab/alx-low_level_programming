#include "main.h"

/**
 * print_line - Draws a straight line according to parameter
 * @n: The number of line to draw
 * Return: empty
 */

void print_line(int n)

{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
