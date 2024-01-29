#include "main.h"
/**
 * _printf - similar to printf
 * @format: constant format
 * Return: len of format
 */
int _printf(const char *format, ...)
{
	va_list args;
	int x = 0;
	char *str, ch;

	va_start(args, format);
	while (format[x] != '\0')
	{

		if (format[x] == '%')
		{
			++x;
			if (format[x] == 's')
			{
				str = va_arg(args, char *);
				puts(str);
			}
			else if (format[x] == 'c')
			{
				ch = (char) va_arg(args, int);
				putchar(ch);
			}
			else if (format[x] == '%')
			{
				ch = (char)va_arg(args, int);
				putchar(ch);
			}
		}
		else
			putchar(format[x]);
		x++;

	}
	va_end(args);
	return (x + 1);
}
