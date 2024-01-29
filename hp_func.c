#include "main.h"
/**
 * print_char - print character
 * @ch: character
 * @count: count
 * Return: void
 */
void print_char(char ch, int *count)
{
	putchar(ch);
	(*count)++;
}
/**
 * print_number - Print number.
 * @n: numsto print
 * @c: count
 * Return: void
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
/**
 * print_str - take string from printf
 * @str: pointer to string
 * @count: count len of item
 * Return: void
 */
void print_str(const char *str, int *count)
{
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		putchar(*str);
		(*count)++;
		str++;
	}
}
