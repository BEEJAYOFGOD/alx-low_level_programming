#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chrt;
	int intg;
	long int lintg;
	long long llintg;
	float flt;

	printf("Size of an int: %d byte(s)\n", sizeof(intg));
	printf("Size of a long int: %d byte(s)\n", sizeof(lintg));
	printf("Size of a long long int: %d byte(s)\n", sizeof(llintg));
	printf("Size of a float: %d byte(s)\n", sizeof(flt));
	return (0);
}
