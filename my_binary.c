#include "main.h"

/**
* printf_binary - prints a binary number
* @num: number arguments
* @x: printed characters
* Return: printed characters
*/

int printf_binary(unsigned int num, int x)
{
	int binary[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		x++;
		return (x);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		x++;
	}

	return (x);
}
