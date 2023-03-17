#include <stdio.h>
/**
 * main - Iterate
 *
 * Return: Always 0.
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
