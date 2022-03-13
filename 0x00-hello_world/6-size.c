#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char p;
	int q;
	long int r;
	long long int s;
	float t;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(p));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(t));

        return(0);
}

