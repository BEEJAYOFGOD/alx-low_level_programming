#include <stdio.h>
#include <time.h>
/* more headers goes ther */

/*
* main - checks if a random generated number is positive, negative or 0
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%f is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%f is negative\n", n);
	}

}
