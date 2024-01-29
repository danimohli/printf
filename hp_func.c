#include "main.h"
/**
 * print_number - Print number.
 * @n: numsto print
 * @c: count
 */
void print_number(int n, int *c)
{
	int div, dig;

	if (n < 0)
	{
		_putchar('-');
		(*c)++;
		n = -n;
	}

	div = 1;
	while (n / div > 9)
		div *= 10;

	while (div != 0)
	{
		dig = n / div;
		putchar(dig + '0');
		(*c)++;
		n %= div;
		div /= 10;
	}
}
