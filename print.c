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
			if (format[x + 1] == 's')
			{
				str = va_arg(args, char *);
				puts(str);
			}
			else if (format[x + 1] == 'c')
			{
				ch = va_arg(args, char);
				putchar(ch);
			}
			else if (format[x + 1] == '%')
			{
				ch = va_arg(args, char);
				putchar(ch);
			}
		}
		else
			putchar(format[x]);

	}
	va_end(args);
	return (x + 1);
}
