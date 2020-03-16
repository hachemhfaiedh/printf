#include <stdout.h>
#include <stdarg.h>
#include "holberton.h"

/**
*printf - produce output according to a format.
*@format: format of output
*Return: int
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	int i = 0;
	char *p;
	//other variables

	va_start(ap, format);
	while (format)
	{
		if (*format == '%')
		format++;
		switch (*format)
		{
			case 'c':
				//print charachter function
				break;
			case 's':
				//string function
				break;
			case '%':
				//dhaherli yaffichi %
				break;
			case 'd':
				//task 1 print integer
				break;
			case 'i':
				//dhaherli nafs lahkeya fil printf maantha nchoufou kifeh ndakhlouha fil case elli 9abalha nrodouhom fard case
			default:
			_putchar('%');
			_putchar(*format)
			format++;
		}
		//fama fazet lahne mazelt markztch fihom(normalament taffichi fonction normale ellibech tektbou khadmin kifha to93d tincrimenti w taffichi hata lin tousel lil if el loula
	}
	va_end(ap);
	return (count);
}
