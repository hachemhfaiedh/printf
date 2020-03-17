#include "holberton.h"
/**
 * _char - prints char.
 * @spec: specifiers list.
 * Return: int.
 */
int _char(va_list spec)
{
	_putchar(va_arg(spec, int));
	return (1);
}

/**
 * _string - Prints a string.
 * @spec: specifiers list.
 * Return: int.
 */
int _string(va_list spec)
{
	int i;
	char *p;

	p = va_arg(spec, char *);
	if (p == NULL)
		p = "(null)";
	for (i = 0; p[i] != '\0'; i++)
		_putchar(p[i]);
	return (i);
}

/**
 * _percentage - Prints a percent symbol.
 * @spec: specifiers list.
 * Return: int.
 */
int _percentage(__attribute__((unused))va_list spec)
{
	_putchar('%');
	return (1);
}

/**
 * _integer - Prints an integer.
 * @spec: specifiers list.
 * Return: int.
 */
int _integer(va_list spec)
{
	int count_int = 0, x, div = 1;
	unsigned int n;

	x = va_arg(spec, int);
	if (x < 0)
	{
		_putchar ('-');
		count_int++;
		x *= -1;
	}
	n = x;
	while ((x / div ) > 9)
	{
		div *= 10;
		n = x;
	}
	while (div != 0)
	{
		count_int++;
		_putchar ('0' + (n / div));
		n = n % div;
		div = div / 10;
	}
	return (count_int);
}
