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
 * print_number - function to print number
 * @c: total element printed
 * @n: number to print
 */
void print_number(int n, int *c)
{
	unsigned int m;

	if (n < 0)
	{
		putchar('-');
		(*c)++;
		n *= -1;
	}
	m = n;
		if (m / 10 > 0)
			print_number(m / 10, c);
	putchar(m % 10 + '0');
	(*c)++;
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
