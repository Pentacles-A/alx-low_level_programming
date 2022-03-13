#include <stdio.h>

/**
 * main - Use printf to print out the different type sizes
 *
 * Return: A printed string stating the different type sizes
 */
int main(void)
{
	int d;
	long int ei;
	long long int ffi;
	char c;
	float g;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("SIze of a long int: %lu byte(s)\n", (long unsigned)sizeof(ei));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ffi));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(g));

	return (0);
}
