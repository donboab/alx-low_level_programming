#include "main.h"

/**
 * factorial - the function print factorial of a give number
 * @n: is the para
 *
 * Return: Always return the factorial
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
