#include "main.h"

/**
* printf_int - prints int value
* @list: number of arguments
* @x: printed chars
* Return: printed chars
*/

int printf_int(va_list list, int x)
{
	int num = va_arg(list, int);
	int digits = 0;
	int temp = num;
	int digit;

	if (num < 0)
	{
		x += _putchar('-');
		num = -num;

		temp = num;
	}
	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	while (digits > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		x += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (x);
}
