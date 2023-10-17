 #include "main.h"
 
/**
 * _printf - print formatted string to the screen.
 * @format: character string to print.
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int ret;
	
	va_start(args, format);
	if (format == NULL || *format == '\0')
	{
		_putchar('\n');
		va_end(args);
		return (-1);
	}

	ret = my_parser(format, args);
	va_end(args);
	
	if (ret < 0)
	{
		return (-1);
	}

	return (ret);
}
