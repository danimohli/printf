#include "main.h"
/**
 * _printf - similar to printf
 * @format: constant format
 * Return: len of format
 */
int _printf(const char *format, ...)
{
	va_list args;
	int x = 0, count = 0;

	va_start(args, format);
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			++x;
			if (format[x] == 's')
				print_str(va_arg(args, char *), &count);
			else if (format[x] == 'c')
				print_char(va_arg(args, int), &count);
			else if (format[x] == '%')
			{
				putchar('%');
				count++;
			}
			else if (format[x] == 'i' || format[x] == 'd')
				print_number(va_arg(args, int), &count);
			else
			{
				putchar(format[x]);
				count++;
			}
		}
		else
		{
			putchar(format[x]);
			count++;
		}
		x++;
	}
	va_end(args);
	return (count);
}
