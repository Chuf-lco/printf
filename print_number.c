#include "main.h"
/**
 * print_number - writes number
 * @num: Parameter
 */
void print_number(int32_t num)
{
        uint32_t u_num, divisor, digit;

        if (num < 0)
        {
                _putchar('-');
                num = -num;
        }
        u_num = (uint32_t)num;
        divisor = 1;
        while (u_num / divisor > 9)
        {
                divisor *= 10;
        }
        while (divisor != 0)
        {
                digit = u_num / divisor;
                _putchar('0' + digit);
                u_num %= divisor;
                divisor /= 10;
        }
}
