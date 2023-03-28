#include "main.h"

#define MAX_HEX_DIGITS 16

/**
* _pointer - prints a pointer
* @list: numberof arguments
* @x: the printed characters
* Return: printed characters
*/

int _pointer(va_list list, int x)
{
	void *ptr = va_arg(list, void*);
	unsigned long num = (unsigned long) ptr;
	int digits = 0;
	int i;
	unsigned long temp = num;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];

	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}

	x += _putchar('0');
	x += _putchar('x');

	if (num == 0)
	{
		x += _putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			int digit = num % 16;

			hex[i] = hex_digits[digit];
			num /= 16;
		}
		for (i = 0; i < digits; i++)
		{
			x += _putchar(hex[i]);
		}
	}
	return (x);
}
