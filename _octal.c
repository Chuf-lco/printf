#include "main.h"

/**
* _octal - prints octals
* @num: number of arguments
* @x: the printed characters
* Return: printed characters
*/

int _octal(unsigned int num, int x)
{
	int oct[100], i = 0, j, remainder;

	while (num != 0)
	{
		remainder = num % 8;

		oct[i] = 48 + remainder;
		i++;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		x++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			x++;
		}
	}
	return (x);
}
