#include"main.h"
/**
 * print_alphabet - prints out the alphabet
 *
 * Return: 0 (succesful)
 */
int print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
