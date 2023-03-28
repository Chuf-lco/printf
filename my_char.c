#include "main.h"

/**
* my_char - prints character
* @list: number of arguments
* @x: printed characters
* Return: printed charcaters
*/

int my_char(va_list list, int x)
{
	int c = va_arg(list, int);

	_putchar(c);
	return (x + 1);
}
