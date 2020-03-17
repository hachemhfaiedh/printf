#include "holberton.h"
int get_specifier_functions(char c, va_list pa)
{
	type_t type[] ={
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'i', print_integer},
	{'d', print_integer},
	{'0', NULL}
	};
	int i =0;
	int countt = 0;
	while (i < 6)
	{
		if (c == (type[i].t)
		{
			countt += type[i].f(pa);
			return(countt);
		}
		i++;
	}
	return (-1);
}
