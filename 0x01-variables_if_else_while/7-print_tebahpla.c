#include <stdio.h>
/**
 * main - Print lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
