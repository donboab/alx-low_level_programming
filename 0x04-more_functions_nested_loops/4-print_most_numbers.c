#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 - 9
 * Description:Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 - 9
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	putchar(x + '0');
	}
	}
	putchar('\n');
}
