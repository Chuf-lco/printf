#include "main.h"

/**
* print_string - prints a string
* @list: numberof arguments
* @x: the printed characters
* Return: printed characters
*/

int print_string(va_list list, int x)
{
	char *string = va_arg(list, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		x++;
		string++;
	}
	return (x);
}

