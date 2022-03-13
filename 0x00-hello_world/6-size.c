#include <stdio.h>

/**
 * main - Print type sizes
 *
 * Return: Printed types
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", (long int)sizeof(char));
	printf("Size of an int: %li byte(s)\n", (long int)sizeof(int));
	printf("Size of a long int: %li byte(s)\n", (long int)sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", (long int)sizeof(long long int));
	printf("Size of a float: %li byte(s)\n", (long int)sizeof(float));

	return (0);
}
