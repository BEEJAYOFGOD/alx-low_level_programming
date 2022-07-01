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

	printf("Size of a char: %d bytes", sizeof(chart));
	printf("Size of an int: %d bytes", sizeof(intg));
	printf("Size of a long int: %d bytes", sizeof(lintg));
	printf("Size of a long long int: %d bytes", sizeof(lintg));
	printf("Size of a float: %d bytes", sizeof(flt));

	return (0);
}
