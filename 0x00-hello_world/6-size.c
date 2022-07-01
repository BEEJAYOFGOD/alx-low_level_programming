#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char chart;
	int intg;
	long int lintg;
	long long int llintg;
	float flt;

	printf("Size of a char: %d bytes\n", sizeof(chart));
	printf("Size of an int: %d bytes\n", sizeof(intg));
	printf("Size of a long int: %d bytes\n", sizeof(lintg));
	printf("Size of a long long int: %d bytes\n", sizeof(lintg));
	printf("Size of a float: %d bytes\n", sizeof(flt));

	return (0);
}
