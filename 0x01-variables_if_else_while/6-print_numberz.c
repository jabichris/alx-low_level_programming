#include <stdio.h>
/**
 * main - Putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar(dig + '0');
	}
	putchar('\n');
	return (0);
}
