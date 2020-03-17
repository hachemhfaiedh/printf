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
	va_start(pa, format)
	if(format == NULL)
	return (-1);
	for(i = 0;format[i] != '\0'; i++)
	{
	if ( forma[i] == '%')
		{
		}
	else
	{
		_putchar(format[i]);
		count_format++;
	}
	va_end(pa);
	return (count_format);
}
