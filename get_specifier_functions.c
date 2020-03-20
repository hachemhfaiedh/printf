#include "holberton.h"
/**
 * get_specifier_functions - specifiers
 * @c: char
 * @pa: variadic
 * Return: count
 */
int get_specifier_functions(char c, va_list pa)
{
	type_t type[] = {
	{'c', _char},
	{'s', _string},
	{'%', _percentage},
	{'i', _integer},
	{'d', _integer},
	{'0', NULL}
	};
	int i = 0;
	int countt = 0;

	while (i < 6)
	{
		if (c == (type[i].t))
{
			countt += type[i].f(pa);
			return (countt);
}
		i++;
	}
	return (-1);
}
