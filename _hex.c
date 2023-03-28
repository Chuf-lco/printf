#include "main.h"

/**
* _hex - function definition
* @num: number of arguments
* @x: the printed characters
* @upper_case: the uppercase equivalent
* Return: printed charcaters
*/

int _hex(unsigned int num, int x, int upper_case)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = 48 + remainder;
		}
		else
		{
			if (upper_case)
			{
				hex[i] = 65 + (remainder - 10);
			}
			else
			{
				hex[i] = 97 + (remainder - 10);
			}
		}
		i++;
		num /= 16;
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
			_putchar(hex[j]);
			x++;
		}
	}
	return (x);
}
