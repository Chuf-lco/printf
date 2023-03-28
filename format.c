#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * _printf - Custom printf function
 * @format: Parameters for output
 * Return: Return Correct Output Success
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	char c, *s;

	va_start(ap, format);
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = (char) va_arg(ap, int);
				_putchar(c);
				i++;
			}
			else if (*format == 's')
			{
				s = va_arg(ap, char *);
				fputs(s, stdout);
				i += strlen(s);
			}
			else if (*format == '%')
			{
				_putchar('%');
				i++;
			}
		}
		else
		{
			_putchar(*format);
			i++;
		}
	}
	va_end(ap);
	return (i);
}
