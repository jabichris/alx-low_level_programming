#include "main.h"
/**
 * print_last_digit - print last digit of a number.
 *
 * @num: takes number input
 *
 * Return: lastDigit
*/
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		last_digit = -1 * (num % 10);
	last_digit = num % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
