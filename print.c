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
	char *str;
	char ch;
	long int num;
	int count = 0;
	
	va_start(args, format);

	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			++x;
			if (format[x] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					_putchar(*str);
					count++;
					str++;
				}
			}
			else if (format[x] == 'c')
			{
				ch = (char)va_arg(args, int);
				_putchar(ch);
				count++;
			}
			else if (format[x] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[x] == 'i' || format[x] == 'd')
			{
				num = va_arg(args, int);
				print_number(num);
			}
		}
		else
		{
			_putchar(format[x]);
			count++;
		}
		x++;
	}
	va_end(args);
	return count;
}
