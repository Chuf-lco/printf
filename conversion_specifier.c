#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * conv_spec -Print out integers
 * @format: Parameter
 */

void conv_spec(const char *format, ...)
{
	va_list args;
	int arg, i, j;
	char buffer[];

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++; /* move past '%' */
			if (*format == 'd' || *format == 'i')
			{
				arg = va_arg(args, int);
				buffer[32];
				i = 0;
				j = 0;
				if (arg < 0)
				{
					buffer[0] = '-';
					arg = -arg;
					j++;
				}
				while (arg > 0)
				{
					buffer[i++] = arg % 10 + '0';
					arg /= 10;
				}
				while (i > 0)
				{
					putchar(buffer[--i + j]);
				}
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(args);
}

