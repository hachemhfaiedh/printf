#include "holberton.h"
/**
*_printf - produce output according to a format.
*@format: format of output
*Return: int
*/
int _printf(const char *format, ...)
{
	int i = 0, count_format = 0;
	va_list pa;

	va_start(pa, format);
	if (format == NULL)
	return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count_format++;
			for (; format[i] == ' '; i++)
			{
				}
			if (format[i] == '\0')
				return (-1);
			count_format += get_specifier_functions(format[i + 1], pa) - 1;
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count_format++;
		}
	}
	va_end(pa);
	return (count_format);
}
