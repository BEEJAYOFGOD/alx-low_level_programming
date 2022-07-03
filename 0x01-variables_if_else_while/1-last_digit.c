#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
* main - a program that prints the last digit of a string
* Return: Always 0 (Success)
*
*/

int main(void)
{
	int n, LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;
	printf("Last digit of %d is %d\n",n, LastDigit);
	return (0);
}

