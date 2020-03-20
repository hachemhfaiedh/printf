# Our _printf project

The functions in the printf() family produce output according to a format as described below. The functions printf() and vprintf() write output to stdout, the standard output stream; fprintf() and vfprintf() write output to the given output stream; sprintf(), snprintf(), vsprintf() and vsnprintf() write to the character string str.

The functions snprintf() and vsnprintf() write at most size bytes (including the terminating null byte ('\0')) to str.

The functions vprintf(), vfprintf(), vsprintf(), vsnprintf() are equivalent to the functions printf(), fprintf(), sprintf(), snprintf(), respectively, except that they are called with a va_list instead of a variable number of arguments. These functions do not call the va_end macro. Because they invoke the va_arg macro, the value of ap is undefined after the call. See stdarg(3).

The _printf function can be used just like the original printf, for example:
typing _printf("I study at %s", Holberton) wil print: I study at Holberton