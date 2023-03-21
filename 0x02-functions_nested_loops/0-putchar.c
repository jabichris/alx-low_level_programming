#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
