#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number to extract the last digit from
*
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
long num = n;
int last_digit;

if (num < 0)
num = -num;

last_digit = num % 10;
_putchar(last_digit + '0');

return (last_digit);
}

