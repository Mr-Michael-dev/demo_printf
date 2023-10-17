#include "main.h"
int my_parser(const char *format, va_list args);
/**
 * my_parser - parse the format string and check for format specifiers
 * and print arguments passed to the function
 * @format: The format string
 * @args: arguments passed from _printf
 *
 * Return: total length printed
 */

int my_parser(const char *format, va_list args)
{
	const char *p;
	char c;
	char *str;
	int integer;

	for (p = format; p != NULL; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
		}
		else
		{
			p++;
			if (*p == '%')
			{
				_putchar('%');
			}
			else if (*p == 'c')
			{
				c = va_arg(args, int);

				handle_char(c);
			}
			else if (*p == 's')
			{
				str = va_arg(args, char *);
				handle_str(str);
			}
			else if (*p == 'd')
			{
				integer = va_arg(args, int);

				handle_int(integer);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (0);
}
