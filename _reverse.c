#include "main.h"

/**
* _reverse - prints a reversed string
* @list: number of arguments
* @x: the printed characters
* Return: printed characters
*/

int _reverse(va_list list, int x)
{
	char *str = va_arg(list, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		x++;
	}

	return (x);
}
