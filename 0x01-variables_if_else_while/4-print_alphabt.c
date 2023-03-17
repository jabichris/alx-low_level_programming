#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		char c = 'a' + i;

		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
