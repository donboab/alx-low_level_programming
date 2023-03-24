#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * Return: Nothing.
*/

void print_number(int n)
{
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0)
	{
		n *= -1;
		num = n;
		putchar('-');
	}
		num /= 10;
		/*Print the first few digits*/
		if (num != 0)
			print_number(num);
		/*Print the last digit*/
		putchar((unsigned int) n % 10 + '0');
}
